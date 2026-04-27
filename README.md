# CS 340 Portfolio Reflection

## How do you write programs that are maintainable, readable, and adaptable?

Writing maintainable and readable code starts with organization and clarity. In this course, I focused on separating concerns by creating a dedicated CRUD Python module in Project One, which I later reused in Project Two for the dashboard. This made the code easier to manage because the database logic was isolated from the user interface and visualization logic. Instead of rewriting database queries in multiple places, I could simply call functions from the CRUD module, which improved both readability and efficiency.

Using this approach also made the program more adaptable. If the database structure or queries needed to change, I only had to update the CRUD module instead of modifying the entire application. In the future, I could reuse this same module structure in other projects that require database interaction, such as web applications, APIs, or data analytics dashboards. This modular design is a practical way to scale projects and keep code clean as complexity increases.

## How do you approach a problem as a computer scientist?

When approaching a problem, I try to break it down into smaller, manageable pieces and focus on understanding the requirements first. For this project, I started by analyzing what Grazioso Salvare needed from the database and dashboard, then worked step by step to build the backend functionality before connecting it to the frontend.

Compared to earlier assignments in other courses, this project felt more realistic because it involved working with a real dataset and designing something that could actually be used by a client. Instead of just writing code to meet a rubric, I had to think about usability, performance, and how the data would be presented in a meaningful way.

In the future, I would continue using this structured approach by planning out database schemas, testing queries early, and building modular components that can be reused. I would also spend more time validating data and optimizing queries to improve performance for larger datasets.

## What do computer scientists do, and why does it matter?

Computer scientists design and build systems that help people process, analyze, and use data more effectively. This matters because data is a critical part of decision-making in almost every industry. In this project, the dashboard I developed allows users to quickly filter, visualize, and understand data from the animal shelter database.

For a company like Grazioso Salvare, this type of system can improve efficiency by reducing the time it takes to find relevant information and make decisions. Instead of manually searching through records, users can interact with a dashboard that provides insights instantly. This can lead to better resource allocation, improved operations, and more informed decision-making overall.


