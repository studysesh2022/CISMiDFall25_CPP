# Week 6 – File Handling and Classes in C++

## 📌 Overview

This project demonstrates how to use **C++ classes**, **file input/output**, and **strings** to store and retrieve inventory data from a file. The purpose of this assignment is to practice working with files and organizing code using object-oriented programming.

The program simulates a basic inventory system where item data is written to a file and later read back into the program.

---

## 🧾 Program Features

- Creates an `Item` class to represent products
- Stores item name and quantity
- Saves item data into a text file
- Reads stored data from a file
- Displays inventory content in the terminal

---

## 📂 Files Included

- `main.cpp` – Main program file
- `items.txt` – Output file where item data is saved automatically (created when program runs)
- `README.md` – Project documentation

---

## ⚙️ How It Works

### 1. Class Creation

The `Item` class contains:
- `name` (string)
- `quantity` (integer)

It also contains two functions:

- `saveToFile()` – appends data to a file
- `loadFromFile()` – reads data from a file and displays it

---

### 2. Writing to File

Each item is saved in this format:


Example:


The file is opened using append mode so new items do not overwrite existing entries.

---

### 3. Reading from File

The program reads the file line-by-line and displays all saved item information.

---

## ▶️ How to Run

###  Using g++

```bash
g++ main.cpp -o inventory
./inventory
