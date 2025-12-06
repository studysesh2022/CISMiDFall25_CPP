## Week 7

This week’s assignment focuses on:

- If statements
- Nested if statements
- Understanding Syntax, Runtime, and Logical Errors
- Practicing debugging skills

### Module 4 – Grade Checker Program

**File:** `module4_grade_checker.cpp`

This program:

- Asks the user to enter an exam score between **0 and 100**.
- Validates the input using an `if` condition:
  - If the score is outside `0–100`, it prints an error message and exits.
- Uses an `if / else if / else` ladder to assign a **letter grade**:
  - `90–100` → `A`
  - `80–89` → `B`
  - `70–79` → `C`
  - `60–69` → `D`
  - `< 60` → `F`
- Demonstrates a **nested if**:
  - Inside the `A` range, scores `>= 95` print an extra “top of the A range” message.
- Prints the final letter grade and a message:
  - If grade is `F`, it suggests reviewing the material.
  - Otherwise, it prints a positive encouragement message.

This file can also be used to illustrate the difference between:
- **Syntax errors** (e.g., removing a semicolon will cause the compiler to fail),
- **Logical errors** (e.g., changing the boundaries so 80 gets a `C` instead of a `B`),
- And how to identify and fix these issues while debugging.

**How to compile and run (from terminal):**

```bash
g++ module4_grade_checker.cpp -o module4_grade_checker
./module4_grade_checker
