# 💻 Expense Tracker (C++ / Qt)

A desktop application for tracking and managing personal expenses.

## Features
- Add, edit, and delete transactions
- Categorize expenses
- Persistent storage using file I/O
- Budget tracking and export functionality

## Tech Stack
- C++
- Qt Framework (signals & slots, event-driven UI)

## How It Works
The application uses Qt's signal-slot mechanism to handle user interactions and maintain a responsive UI. Data is stored locally using file-based persistence, allowing users to retain their financial data across sessions.

## Demo
(Coming Soon)

## Requirements

- Qt 6 with QtCharts
- CMake 3.16+
- C++17 compiler

## Build

```bash
cmake -S . -B build
cmake --build build
```

## Run
```bash
./build/HonoraryBudgetApp
```
