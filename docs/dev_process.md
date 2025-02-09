# Simple Calculator - Dev Process
Outlines the development process for a **Tic Tac Toe**.

## Project Setup
1. Name the project: **Tic Tac Toe**
2. Create a GitHub repository.

## Application Overview
- Command-line Tic Tac Toe game.

## Features
- Tic Tac Toe game.
- Recodes the player names.
- Player 1 chooes the symbol (X or O).
- Win/draw detection.
- Press Enter to exit...

## Considerations

### Game rules
1. The game is played on 3 x 3 grid. (Remember the spot number)
    ```
    +---+---+---+ 
    | 1 | 2 | 3 | 
    +---+---+---+ 
    | 4 | 5 | 6 | 
    +---+---+---+ 
    | 7 | 8 | 9 | 
    +---+---+---+ 
    ```
2. The player 1 will choose symbol **X** or **O**.
3. Two players take turns to play:
    * Player 1 will place his/her choosed symbol.
    * Player 2 will place a symbol that hadn't choosen.
4. On their turn, a player chooses a cell (numbered 1-9) to place their symbol (X or O).
5. A move is valid only if the choosen cell is empty.
6. The goal is to form a line of three of your symbols (X or O) in:
    - Horizontal line
    - Vertical line
    - Diagonal line
7. The game end when:
    - A player wins by formimg a line of three symbols.
    - The board is full, resulting in a tie if no player has won.
8. If an invalid move is attempted (e.g., choosing a filled cell or an invalid number), the player is asked to retry.
9. The game announces the winner or declares a tie when it ends.

### Input Validation
- Ensure `symbol` and `spot number` are valid as per the game rules.
- Prompt the user until valid input are entered.

## Development Steps

### Design
- Create a **[`flowchart`](./flowchart.md)** outlining the program logic.
- Write pseudocode.

### Coding
- Use snake_case or camel_case for variable and function names.
- Write modular and maintainable code.

### Testing
- Test with both valid and invalid inputs.
- Check win/draw for all possible cases.

## Bug and Idea Tracking
- Log improvement ideas, identified bugs in **[`dev_journal.md`](./dev_journal.md)**.
- Continue this process until there are no outstanding bugs or ideas.

## Release
* Build the Windows executable
* Create a GitHub release

### Documentation
- Update the **[`dev_journal.md`](./dev_journal.md)** and **[`README.md`](../README.md)**.

## Release
* Update main branch links in all documentation
* Create a release branch from the main branch
