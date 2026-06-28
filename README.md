# CS 230 Portfolio Reflection

## Briefly summarize The Gaming Room client and their software requirements.

The client for this project was The Gaming Room, a company that wanted to expand its existing Android game, *Draw It or Lose It*, into a web-based application that could run on multiple operating systems and devices. The software needed to support multiple games, teams, and players while ensuring that each game and team had a unique name. It also needed to be scalable, secure, and capable of supporting many users at the same time through a distributed client-server architecture.

## What did you do particularly well in developing this documentation?

I think I did a good job analyzing the different operating platforms and explaining the advantages and disadvantages of each. I also clearly documented the software requirements and design constraints while recommending a solution that met the client's needs. Organizing the information into a structured design document made it easy to communicate the proposed solution.

## What about the process of working through a design document did you find helpful when developing the code?

Creating the design document before writing the code helped me understand how the different classes would relate to one another. Planning the relationships between the Game, Team, Player, and GameService classes made implementing inheritance, encapsulation, and the Singleton design pattern much easier because I already had a clear roadmap before I started coding.

## If you could choose one part of your work on these documents to revise, what would you pick? How would you improve it?

If I were to revise one section, I would spend more time expanding the system architecture and deployment recommendations. I understand distributed systems and platform selection much better now than I did when I first completed the design document, so I would include more detail about scalability, cloud hosting, and long-term maintenance.

## How did you interpret the user's needs and implement them into your software design? Why is it so important to consider the user's needs when designing?

I focused on the client's requirements and designed the application around those needs. For example, I used unique identifiers for games, teams, and players, implemented the Singleton pattern to manage the game service, and designed the application to support multiple users across different platforms. Understanding the user's needs is important because the software must solve the client's actual problem rather than simply demonstrating technical features. Designing with the user in mind leads to software that is more useful, maintainable, and easier to expand.

## How did you approach designing software? What techniques or strategies would you use in the future to analyze and design a similar software application?

I approached the project by first identifying the requirements, then breaking the application into smaller components and determining how those components should interact. I used object-oriented design principles such as inheritance, encapsulation, and design patterns to organize the application logically. In the future, I would continue using design documents, UML diagrams, and requirement analysis before writing code because they provide a clear plan that helps reduce mistakes and makes development more efficient.
