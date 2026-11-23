# 🧮 C++ CLI Calculator

A command-line based calculator built in C++. This project was created to practice modular programming, loop control flow, and basic data structuring.

## 🚀 Features
*   **Core Math Operations:** Addition, Subtraction, Multiplication, Division, and Modulo.
*   **Continuous Loop:** Uses a `while(true)` game loop so the user can perform multiple calculations without restarting the program.
*   **Clean Exit:** Includes a dedicated exit option (6) that safely breaks the loop.
*   **Custom Terminal UI:** Features a stylized ASCII art interface for the menus.
*   **Basic Error Handling:** Built-in protection against division by zero and modulo by zero crashes.

## 🧠 Technical Structure
*   **Modular Functions:** The code is split into dedicated functions (`Additions`, `Subtractions`, etc.) to keep `main()` clean.
*   **Data Structs:** Uses a `MathVariable` struct to group user inputs and results.
*   **State Management:** The main loop captures the user's choice, routes it to the correct math function, and returns to the main menu.

## 🛠️ How to Compile and Run
1. Clone this repository.
2. Open your terminal and navigate to the project directory.
3. Compile the code:
   ```bash
   g++ main.cpp -o calculator
