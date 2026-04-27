# CS 360 – Mobile App Development Reflection

## Overview
This project focused on developing a functional mobile application that allows users to manage inventory items. The primary goal of the app was to provide a simple and efficient way for users to log in, add items, track quantities, and view their data in a clean interface. The app was designed to address the need for a lightweight inventory management solution that is easy to use and does not require complex setup or external tools.

## User Needs and Goals
To support user needs, the app included several key screens and features. A login screen was necessary to allow users to create an account or access existing data. The main inventory screen allowed users to input item names and quantities, view a list of stored items, and interact with the data through a RecyclerView. Additional functionality included persistent storage using SQLite and SMS permission handling for notifications.

The UI design focused on simplicity and clarity, using straightforward layouts and clearly labeled input fields so users could quickly understand how to interact with the app. Keeping the interface minimal helped reduce confusion and made the app more user-friendly.

## Development Approach
When approaching the coding process, I focused on breaking the application into smaller components instead of trying to build everything at once. I started with the database setup, then implemented login functionality, and finally worked on displaying and interacting with data using a RecyclerView.

This step-by-step approach made it easier to isolate and fix issues as they came up. I also relied heavily on debugging and testing throughout development, especially when dealing with mismatches between XML layouts and Java code. This approach can be applied in future projects by maintaining a structured workflow and building features incrementally.

## Testing and Validation
Testing was done continuously during development by running the application on a device and verifying each feature as it was implemented. I tested login functionality, database persistence, item creation, and UI updates to ensure everything worked as expected.

This process is important because it helps catch errors early and ensures that each part of the application functions correctly before moving on. Testing revealed several issues, particularly with UI element IDs not matching the code and layout inconsistencies, which reinforced the importance of keeping code and design aligned.

## Challenges and Problem Solving
Throughout the development process, one of the main challenges was ensuring that the UI and backend logic stayed synchronized. I had to adjust my approach and carefully verify that layout IDs matched the Java code, which required attention to detail and problem-solving.

Overcoming this challenge helped improve my understanding of how Android applications connect UI components to logic.

## Key Success
One area where I was particularly successful was implementing the full workflow of the application, including user authentication, database integration, and dynamic data display using a RecyclerView. This demonstrated my ability to combine multiple components into a working application and reinforced my understanding of mobile app architecture.

## Conclusion
Overall, this project helped me develop a more structured and user-focused approach to mobile app development. It also improved my ability to troubleshoot issues and build functional applications that meet user needs.
