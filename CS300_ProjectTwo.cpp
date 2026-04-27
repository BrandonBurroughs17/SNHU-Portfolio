/******************************
* CS 300 Project Two
* Brandon Burroughs
*SNHU
*
* Advising assistance tool:
* - Loads course data from CSV
* - Stores in Binary Search Tree (BST)
* - Provides sorted course list
* - Allows lookup of course + prerequisites
******************************/

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

/*
 * Course model
 * Represents one row from the CSV file.
 */
struct Course {
    string courseId;                 // e.g. "CSCI200"
    string title;                    // e.g. "Data Structures"
    vector<string> prerequisites;    // list of prerequisite course IDs
};

/*
 * Node used in BST
 * Each node stores one course and pointers to children
 */
struct Node {
    Course course;
    Node* left;
    Node* right;

    Node(Course c) : course(c), left(nullptr), right(nullptr) {}
};

/*
 * BinarySearchTree
 *
 * Stores courses sorted by courseId.
 * This allows:
 * - O(log n) insert/search (average)
 * - In-order traversal for sorted output
 */
class BinarySearchTree {
private:
    Node* root;

    /*
     * Recursive insert
     * Places course in correct position based on courseId
     */
    Node* insert(Node* node, Course course) {
        // Empty spot found → create new node
        if (!node) return new Node(course);

        // Traverse left/right depending on ordering
        if (course.courseId < node->course.courseId)
            node->left = insert(node->left, course);
        else
            node->right = insert(node->right, course);

        return node;
    }

    /*
     * In-order traversal
     * Left → Node → Right
     *
     * This naturally prints courses in sorted order
     * without needing an additional sorting algorithm
     */
    void inOrder(Node* node) {
        if (!node) return;

        inOrder(node->left);

        cout << node->course.courseId << ", "
            << node->course.title << endl;

        inOrder(node->right);
    }

    /*
     * Recursive search
     * Navigates BST using comparisons instead of scanning entire tree
     */
    Course* search(Node* node, const string& id) {
        if (!node) return nullptr;

        // Found match
        if (node->course.courseId == id)
            return &node->course;

        // Traverse based on ordering
        if (id < node->course.courseId)
            return search(node->left, id);
        else
            return search(node->right, id);
    }

public:
    BinarySearchTree() : root(nullptr) {}

    void Insert(Course course) {
        root = insert(root, course);
    }

    void PrintCourses() {
        inOrder(root);
    }

    Course* Search(const string& id) {
        return search(root, id);
    }
};

/*
 * trim()
 *
 * Removes leading/trailing whitespace from CSV tokens.
 * Important because CSV parsing can include spaces.
 */
string trim(const string& str) {
    size_t start = str.find_first_not_of(" \t");
    size_t end = str.find_last_not_of(" \t");
    return (start == string::npos) ? "" : str.substr(start, end - start + 1);
}

/*
 * loadCourses()
 *
 * Reads CSV file line-by-line and builds BST.
 *
 * Expected format:
 * courseId,title,prereq1,prereq2,...
 *
 * Returns true if file successfully loaded.
 */
bool loadCourses(const string& filename, BinarySearchTree& bst) {

    ifstream file(filename);

    // File open failure → early exit
    if (!file.is_open()) {
        cout << "Error: Could not open file." << endl;
        return false;
    }

    string line;

    while (getline(file, line)) {

        stringstream ss(line);
        string token;
        Course course;

        // First column → course ID
        getline(ss, token, ',');
        course.courseId = trim(token);

        // Second column → title
        getline(ss, token, ',');
        course.title = trim(token);

        /*
         * Remaining columns → prerequisites
         * Ignore empty tokens (handles trailing commas)
         */
        while (getline(ss, token, ',')) {
            string prereq = trim(token);
            if (!prereq.empty())
                course.prerequisites.push_back(prereq);
        }

        // Insert into BST (automatically sorted)
        bst.Insert(course);
    }

    cout << "Courses loaded successfully." << endl;
    return true;
}

/*
 * printCourse()
 *
 * Outputs a single course and its prerequisites.
 * Handles empty prerequisite case.
 */
void printCourse(Course* course) {
    if (!course) {
        cout << "Course not found." << endl;
        return;
    }

    cout << course->courseId << ", " << course->title << endl;

    cout << "Prerequisites: ";

    if (course->prerequisites.empty()) {
        cout << "None";
    }
    else {
        for (size_t i = 0; i < course->prerequisites.size(); i++) {
            cout << course->prerequisites[i];

            // Add comma between items
            if (i < course->prerequisites.size() - 1)
                cout << ", ";
        }
    }

    cout << endl;
}

/*
 * displayMenu()
 *
 * Keeps UI logic separate from main loop
 */
void displayMenu() {
    cout << "\nMenu:\n";
    cout << "1. Load Data Structure\n";
    cout << "2. Print Course List\n";
    cout << "3. Print Course\n";
    cout << "9. Exit\n";
    cout << "Enter choice: ";
}

/*
 * main()
 *
 * Controls program flow and user interaction.
 */
int main() {

    BinarySearchTree bst;
    string filename;
    int choice = 0;

    // Tracks whether data has been loaded successfully
    bool dataLoaded = false;

    cout << "Welcome to the ABCU Advising Assistance Program." << endl;

    while (choice != 9) {

        displayMenu();
        cin >> choice;

        /*
         * Input validation:
         * Prevents program from breaking on invalid input
         */
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input." << endl;
            continue;
        }

        switch (choice) {

        case 1:
            cout << "Enter file name: ";

            // Clear newline left in buffer before getline
            cin.ignore();
            getline(cin, filename);

            dataLoaded = loadCourses(filename, bst);
            break;

        case 2:
            if (!dataLoaded) {
                cout << "Please load data first." << endl;
                break;
            }

            cout << "\nCourse List:\n";
            bst.PrintCourses();
            break;

        case 3:
            if (!dataLoaded) {
                cout << "Please load data first." << endl;
                break;
            }

            {
                string id;

                cout << "Enter course ID: ";
                cin >> id;

                // Normalize input for consistent search
                transform(id.begin(), id.end(), id.begin(), ::toupper);

                printCourse(bst.Search(id));
            }
            break;

        case 9:
            cout << "Goodbye." << endl;
            break;

        default:
            cout << "Invalid option." << endl;
        }
    }

    return 0;
}