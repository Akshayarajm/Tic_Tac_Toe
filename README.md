# Tic Tac Toe Game in C

This is a simple **Tic Tac Toe game** implemented in C that can be played by two players in the terminal.  
It uses basic concepts of arrays, functions, and conditional logic.

---

## 🧩 Features
- Two-player game mode.
- Displays the board dynamically after every move.
- Detects invalid moves (if a position is already occupied).
- Declares the winner or a draw.
- Uses emojis ❌ and ⭕ for a better visual experience.

---

## 🧠 Logic Explanation
- The game board is represented using a 1D array of size 9.
- The `print()` function is used to draw the grid and update it with each move.
- The `check()` function verifies winning combinations (rows, columns, diagonals).
- Player 1 always plays with ❌ (X), and Player 2 plays with ⭕ (O).

---

## 🖥️ How to Run
1. Save the source code in a file named `tictactoe.c`.
2. Open your terminal and compile the program:
   ```bash
   gcc tictactoe.c -o tictactoe
   ```
3. Run the program:
   ```bash
   ./tictactoe
   ```

---

## 🏁 Example Output
```
Enter player 1 :
Alice
Enter player 2 :
Bob
Alice : ❌
Bob : ⭕

________________________________________________
|               |               |               |
|               |               |               |
|       1       |       2       |       3       |
|               |               |               |
|               |               |               |
|_______________|_______________|_______________|
|               |               |               |
|               |               |               |
|       4       |       5       |       6       |
|               |               |               |
|               |               |               |
|_______________|_______________|_______________|
|               |               |               |
|               |               |               |
|       7       |       8       |       9       |
|               |               |               |
|               |               |               |
|_______________|_______________|_______________|
Enter the position:
```

---

## 🧑‍💻 Author
Created by **Akshaya Raj Mullasseri;**  
*(Tic Tac Toe Game in C — Terminal)*
