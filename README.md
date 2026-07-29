# RockPaperScissors-ConsoleGame
A simple CLI Rock-Paper-Scissors game written in C++ with input validation and loop mechanics.
# Rock, Paper, Scissors Game (C++) 🎮
> A simple, interactive, console-based Rock-Paper-Scissors game written in C++ featuring user input validation, dynamic computer opponent selection, and score/round looping mechanics.

---

## 📌 Project Overview
This project is a classic implementation of the **Rock-Paper-Scissors** (حجرة - ورقة - مقص) game using C++. It allows a single player to compete against a computer opponent directly in the terminal interface. 

The application demonstrates core C++ programming concepts including enumeration (`enum`), conditional logic, loop control structures, modular function design, dynamic random number generation, and input validation.

---

## 🌟 Features
* **Interactive Terminal Menu:** Clean prompt enabling players to choose between Rock, Paper, and Scissors.
* **Input Validation:** Built-in safeguards that prompt the user repeatedly if an invalid option (outside 1–3) is selected.
* **Randomized AI Opponent:** The computer's selection is randomly generated each round using pseudo-random number generation.
* **Automated Decision Logic:** Real-time evaluation to determine the winner based on standard game rules:
  * 🪨 **Rock** beats ✂️ **Scissors**
  * 📄 **Paper** beats 🪨 **Rock**
  * ✂️ **Scissors** beats 📄 **Paper**
  * Matching choices result in a **Tie**.
* **Replayability / Dynamic Game Loop:** Players can continuously play multiple rounds until they manually choose to exit by entering `0`.

---

## 🛠️ Code Architecture & Key Functions

| Function Name | Description |
| :--- | :--- |
| `enum enValibleChoices` | Defines the valid game moves (`rock = 1`, `paper = 2`, `scissors = 3`). |
| `short randomNum()` | Generates a pseudo-random integer in the closed range $[1, 3]$. |
| `short readNumber(string, string)` | Prompts the user and enforces input validation between $1$ and $3$. |
| `enValibleChoices chekChoiceUser(short)` | Maps integer input from user to the `enValibleChoices` enumeration. |
| `enValibleChoices chekChoicePC()` | Generates and maps computer's move to `enValibleChoices`. |
| `void GameSystem()` | Controls the primary game loop, rules checking, winner declaration, and replay prompt. |
| `int main()` | Initializes random seeds and serves as the main execution entry point. |

---

## 🚀 How to Run

### Prerequisites
* A C++ compiler supporting C++11 or later (e.g., GCC, Clang, or MSVC via Visual Studio).

### Compilation & Execution Steps

1. **Clone or Download the Repository:**
   ```bash
   git clone https://github.com/your-username/rock-paper-scissors-cpp.git
   cd rock-paper-scissors-cpp
   ```

2. **Compile the Code:**
   Using GCC (`g++`):
   ```bash
   g++ -o RockPaperScissors main.cpp
   ```

3. **Run the Executable:**
   * **Linux / macOS:**
     ```bash
     ./RockPaperScissors
     ```
   * **Windows Command Prompt / PowerShell:**
     ```cmd
     RockPaperScissors.exe
     ```

---

## 🎮 How to Play

1. Upon starting, you will be presented with a prompt:
   ```text
   [1]rock    [2]paper    [3]scissors: 
   ```
2. Enter `1` for **Rock**, `2` for **Paper**, or `3` for **Scissors**.
3. The game will reveal the outcome immediately:
   * `its a tie`
   * `user winner`
   * `PC winner`
4. After each round, press any number key to continue playing, or enter `0` to quit.

---

## 💡 Potential Improvements / Refactoring Ideas
* **Bug Fix / Best Practice on `srand()`:** Currently, `srand()` is re-initialized inside `randomNum()` in every call. It is better practice to call `srand()` **only once** in `main()`.
* **Visual Polish:** Add decorative ascii art, clear terminal screens (`system("cls")`), and display explicit choices (e.g., showing *"User: Rock vs PC: Scissors"* instead of just the final result).
* **Score Tracker:** Keep track of wins, losses, and ties across multiple rounds.

---

## 📄 License
This project is open-source and available under the [MIT License](LICENSE).
