# 🧮 Simple C++ Calculator (V1.0)

A command-line calculator built in C++ as part of my Semester 1 programming journey. 

This project was built from scratch to understand the fundamentals of C++ before moving on to Object-Oriented Programming (OOP) in Semester 2. 

## 🚀 Features
*   **Basic Math Operations:** Addition, Subtraction, Multiplication, Division, and Modulo.
*   **Interactive UI:** Uses ASCII art (raw string literals) for the terminal interface.
*   **State Management:** Uses a `struct` to hold the math variables and user options.
*   **Continuous Loop:** Asks the user if they want to continue or exit using a dedicated function.

## 🧠 What I Learned
*   How to break code into separate functions instead of writing everything in `main()`.
*   How to use `structs` to organize related data.
*   **The Importance of Scope:** Learned that declaring variables inside functions makes it easier to manage memory (left a comment in the code about this!).
*   **Logic Traps:** Accidentally used `&&` (AND) instead of `||` (OR) for string comparison, which taught me how conditional logic works behind the scenes.

## 🐛 Known Bugs & To-Do (For Future Me)
I am pushing this code as a checkpoint. I will fix these bugs tomorrow:
*   [ ] **Infinite Loop Trap:** The `while` loop in `main()` interferes with the `AskToContinue()` function. I need to refactor the control flow.
*   [ ] **Missing `cout`:** Forgot to add `std::cout` in the `else` statement when the user enters an invalid option.
*   [ ] **Division by Zero:** Need to add validation to prevent the program from crashing if the user divides by `0`.
*   [ ] **String Comparison:** Used `&&` instead of `||` in the `AskToContinue` function (Fixed in next commit).

## 🛠️ How to Run
1. Compile the code using g++:
   ```bash
   g++ main.cpp -o calculator
