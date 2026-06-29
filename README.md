# CS210-Corner-Grocer-Tracking
C++ grocery item tracking application that analyzes purchase frequencies using file I/O, maps, and object-oriented programming.
# Corner Grocer Item Tracking Program

## Project Summary

The goal of this project was to develop a C++ program for the Corner Grocer that analyzes a daily grocery purchase file and tracks how frequently each item is purchased. The program reads data from an input text file, stores the information in a `map`, and provides a menu-driven interface that allows users to search for the frequency of a specific item, display all item frequencies, print a histogram, or exit the program. It also automatically creates a backup file named `frequency.dat` that stores each item's purchase count.

## What I Did Well

One of the strongest parts of this project was organizing the program using object-oriented programming principles. I created a `GroceryTracker` class to separate the program's functionality into individual functions, making the code easier to understand and maintain. Using a `map` allowed the program to efficiently store and retrieve item frequencies while keeping the code simple and organized.

## Where I Could Improve

If I were to improve this project, I would add more input validation to prevent invalid menu selections and improve how item names are entered by allowing searches that are not case-sensitive. I would also improve the file error handling and add support for multi-word item names if the program needed to work with more complex datasets. These improvements would make the program more user-friendly, reliable, and adaptable.

## Challenges and Resources

The most challenging part of this project was learning how to use the C++ `map` container and separating the program into multiple source files using classes. Understanding how to read data from a file, store it efficiently, and access it through different class functions required careful planning. I overcame these challenges by reviewing the course materials, using zyBooks examples, testing my code frequently, and debugging each function individually until it worked correctly.

## Transferable Skills

This project strengthened several skills that I will use in future programming projects. I gained experience working with classes, functions, maps, file input and output, and menu-driven applications. I also improved my debugging and problem-solving skills while learning how to organize larger C++ programs across multiple source files.

## Maintainability, Readability, and Adaptability

I designed the program to be maintainable by separating responsibilities into individual functions within the `GroceryTracker` class. I used descriptive function and variable names, included comments to explain the purpose of different sections of code, and organized the program so future features could be added without major changes. This structure makes the code easier to read, modify, and expand.
