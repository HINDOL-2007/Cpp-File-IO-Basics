# 🗄️ C++ File I/O: Persistent Storage

## 📖 About the Project
This project transitions from temporary RAM storage to persistent hard drive storage. It utilizes the `` library to log data to a physical text file and immediately read it back into the program, simulating a standard data-logging architecture.

## ✨ Features
*   **Persistent Writing (`ofstream`):** Opens an output stream to create and write formatted string data to a physical file.
*   **Stream Reading (`ifstream`):** Opens an input stream and utilizes a `while(getline())` loop to parse multi-line text files sequentially.
*   **Buffer Management:** Demonstrates strict resource management by explicitly invoking `.close()` to flush memory buffers and release file locks.

## 💻 Tech Stack
*   **Language:** C++
*   **Core Concepts:** File I/O, `ofstream`, `ifstream`, Buffer Flushing, Persistent Data.

## 🛠️ How to Run
1. Clone this repository and compile:
   ```bash
   g++ file_io.cpp -o file_io
