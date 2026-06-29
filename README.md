# CS 465 Full Stack Development: Travlr Getaways

## Project Overview

This branch contains my final project for **CS 465: Full Stack Development** at Southern New Hampshire University. The project is a full stack web application for a fictional travel company called **Travlr Getaways**. The application supports both a customer-facing website and an administrator-facing single-page application.

The customer side allows users to view travel packages through an Express and Handlebars website. The administrator side allows authorized users to log in, view trips, add new trips, and edit existing trip information through an Angular single-page application.

This project demonstrates my ability to build and connect the frontend, backend, database, API, and authentication layers of a full stack web application.

---

## Technologies Used

* MongoDB
* Express
* Angular
* Node.js
* JavaScript
* TypeScript
* Handlebars
* Mongoose
* RESTful APIs
* JSON Web Token authentication
* Postman
* Git and GitHub

---

## Application Architecture

The Travlr Getaways project uses the MEAN stack:

* **MongoDB** stores trip data as flexible JSON-like documents.
* **Express** handles routing, controllers, API endpoints, and server-side rendering.
* **Angular** provides the administrator single-page application.
* **Node.js** runs the backend server environment.

The customer-facing website is built with Express, JavaScript, and Handlebars templates. It uses server-rendered pages and displays trip data dynamically. The Travel page was refactored from hard-coded static content to use data from the backend API.

The administrator-facing application is built with Angular. It uses reusable components, services, routing, and forms to create a more interactive user experience. The Angular application communicates with the Express API to retrieve, add, and update trip data.

---

## Features

* Customer-facing travel website
* Dynamic Travel page using API/database data
* RESTful API endpoints for trip data
* MongoDB database integration
* Angular administrator SPA
* Admin login page
* JSON Web Token authentication
* Add trip functionality
* Edit trip functionality
* Reusable Angular trip card component
* API testing with Postman

---

## API Endpoints

| Method | Endpoint               | Description                                                 |
| ------ | ---------------------- | ----------------------------------------------------------- |
| GET    | `/api/trips`           | Retrieves all trips                                         |
| GET    | `/api/trips/:tripCode` | Retrieves one trip by trip code                             |
| POST   | `/api/trips`           | Adds a new trip                                             |
| PUT    | `/api/trips/:tripCode` | Updates an existing trip                                    |
| DELETE | `/api/trips/:tripCode` | Deletes a trip                                              |
| POST   | `/api/login`           | Authenticates an administrator and returns a JSON Web Token |

---

## Project Structure

```text
travlr/
├── app_admin          # Angular administrator SPA
├── app_api            # Express API routes and controllers
├── app_server         # Express server-rendered customer website
├── bin                # Server startup files
├── data               # Original seed/static data
├── public             # Static assets such as images and CSS
├── routes             # Express route files
├── templates          # Original static HTML reference files
├── app.js             # Main Express application file
├── package.json       # Backend dependencies and scripts
├── package-lock.json  # Locked backend dependency versions
└── seed.js            # Database seed script
```

---

## Running the Application

### Backend

From the `travlr` directory:

```bash
npm install
npm start
```

The backend runs at:

```text
http://localhost:3000
```

Useful backend routes:

```text
http://localhost:3000
http://localhost:3000/travel
http://localhost:3000/api/trips
```

### Angular Admin SPA

From the `travlr/app_admin` directory:

```bash
npm install
npm start
```

The Angular admin application runs at:

```text
http://localhost:4200
```

Admin login credentials used for testing:

```text
Email: admin@test.com
Password: password123
```

---

## Angular Version Note

During the final module, the Angular admin application was downgraded to **Angular 17** to ensure compatibility with the course environment and grading requirements. This resolved version compatibility issues and allowed the project to run correctly with the expected Node and Angular setup.

---

## Testing

The application was tested using both the browser and Postman.

Postman was used to test the REST API endpoints for retrieving, adding, updating, and deleting trip data. The login endpoint was also tested to confirm that valid credentials returned a JSON Web Token.

Browser testing was completed by running both the backend and Angular frontend at the same time. I tested the customer-facing Travel page, the admin login page, trip card loading, Add Trip functionality, and Edit Trip functionality. I also tested authentication by clearing the stored token and confirming that the Angular admin page redirected back to the login screen.

---

## Reflection

This project helped me understand how the different layers of a full stack application work together. I learned how the frontend, backend, database, API, and authentication systems communicate as part of one complete application.

The customer-facing Express site helped me understand server-rendered frontend development using routes, controllers, views, layouts, and partials. The Angular admin SPA helped me understand component-based frontend development and how reusable UI components make an application easier to maintain.

Working with MongoDB and Mongoose helped me understand how NoSQL databases fit into JavaScript-based full stack applications. Since MongoDB stores data in a document format similar to JSON, it worked well with the REST API and Angular frontend.

I also gained experience testing endpoints with Postman, debugging API calls, fixing frontend and backend issues, and handling version compatibility problems. Overall, CS 465 strengthened my understanding of modern web application development and gave me practical experience with the MEAN stack.

---

## Project .zip

Because the final project .zip file was too large to upload directly, I uploaded the completed project archive to Google Drive.

Google Drive Project ZIP: https://drive.google.com/file/d/1ueUsXe2_hMCfuaPb-6x5xJAwqdOrfh0I/view?usp=drive_link
