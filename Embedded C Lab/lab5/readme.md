# Lab 5

1. Create a **structure** called `Student` with members `name`, `age`, and `total_marks`. Write a **C** program to input data for students, display their information, calculate the **average of total marks**, find the **highest marks**, and display the **top 3 ranked students**.

2. Create a **structure** named `Complex` to represent a complex number with real and imaginary parts. Write a **C** program to **add and multiply two complex numbers**.

3. Create a **Library Management System** by defining a `struct Book` with fields `title`, `author`, `price`, `category`, and `availability`. Use an **enum** for `BookStatus` and `BookCategory`. Implement the following operations:
   - Add a new book.
   - Search by title or author.
   - Change status (e.g., issue/return).
   - Count books in each category.

4. Create an **Employee Management System** by defining a `struct Employee` with fields `id`, `name`, `department`, `type`, and `compensation`. Use an **enum** for employee types (`FULL_TIME`, `PART_TIME`, `INTERN`) and a **union** named `Compensation` to store either `hourly_rate` or `monthly_salary`, based on employee type.

   Implement the following operations:
   - Add/remove employees.
   - Filter by department or type.
   - Calculate total payroll.
   - Search for an employee by ID.
