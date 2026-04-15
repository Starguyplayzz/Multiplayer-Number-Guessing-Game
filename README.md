# 🎮 Multiplayer Number Guessing Game

Welcome to the **Multiplayer Number Guessing Game**! This is my very first project built in **C**, designed to be a fun, interactive terminal-based game. Test your luck and logic by trying to guess the computer's secret number, or challenge a friend to see who is the ultimate guesser.

---

## 🚀 Features

* 🎯 **Single & Multiplayer Modes:** Play solo against the computer (1 Player) or challenge a friend (2 Players).
* 📊 **Dynamic Feedback System:** The game gives hints if your guess is too high or too low.
* 🎲 **Randomized Gameplay:** Every match generates a random number between `0` and `100`.
* ⚡ **Lightweight & Fast:** Runs directly in your terminal with minimal resources.

---

## 🕹️ How to Play

### 1. Choose Your Mode

When you launch the game, you will be prompted to select the number of players:

* Press `1` → Single Player mode
* Press `2` → Multiplayer mode

### 2. The Guessing Phase

The system secretly assigns a random number between **0 and 100**. Your goal is to guess it.

### 3. Follow the Hints

After each guess:

* If your guess is too low → *"Your number is smaller than the assigned number"*
* If your guess is too high → *"Your number is greater than the assigned number"*

> **🧠 Example Scenario:**
>
> * Secret number: `64`
> * Guess: `50` → Too low
> * Guess: `84` → Too high
> * Keep narrowing down until you find the correct number 🎯

---

## 💻 How to Run It

Make sure you have a C compiler (like GCC) installed.

### 1. Clone the Repository

```bash
git clone https://github.com/Starguyplayzz/Multiplayer-Number-Guessing-Game.git
cd Multiplayer-Number-Guessing-Game
```

### 2. Compile the Program

```bash
gcc Number_guessing_game.c -o Number_guessing_game
```

### 3. Run the Game

```bash
./Number_guessing_game
```

---

## 🛠️ Tech Stack

* Language: **C**
* Concepts Used:

  * Loops
  * Conditional Statements
  * Random Number Generation
  * User Input Handling

---

## 🙌 Feedback

Since this is my **first C project**, feedback is highly appreciated!
Feel free to suggest improvements or optimizations.

---

## ⭐ Support

If you liked this project, consider giving it a ⭐ on GitHub!
