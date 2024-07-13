**Project Name:** Library Management System

**Technologies Used:**
- **C:** Used for the core implementation of the application, providing high performance and close-to-hardware control.
- **GCC (GNU Compiler Collection):** Used to compile the C code.
- **MinGW (Minimalist GNU for Windows):** A development environment for native Microsoft Windows applications, which includes the GCC compiler.

**Description:** This project creates a simple desktop application for managing a library. It uses C to implement functionalities such as adding and searching for books, managing users, handling book loans and returns, and generating reports on library usage.

---

### **Technologies Usage**

1. **C:**
   - **Usage:** Core language used for implementing all functionalities of the library management system.
   - **Files:** All files (`main.c`, `book_manager.c`, `user_manager.c`, `loan_manager.c`, `report_manager.c`, `database.c`).

2. **GCC:**
   - **Usage:** Compiler used to compile the C source code into an executable program.
   - **Files:** Used for compiling all source files into `library_app.exe`.

3. **MinGW:**
   - **Usage:** Provides the GCC compiler and necessary tools for compiling and running the application on Windows.
   - **Files:** Not directly referenced in code, but used in the development environment setup.

---

### **Setup and Usage Instructions**

To set up and use the project after downloading the code, follow these steps:

1. **Clone the Repository:**
   - Use `git clone` to clone the repository to your local machine.
   ```bash
   git clone <repository_url>
   ```

2. **Navigate to the Project Directory:**
   - Change your working directory to the project folder.
   ```bash
   cd C:\Users\XXXXXXXX\Documents\Library_APP_C
   ```

3. **Install Dependencies:**
   - Ensure you have MinGW installed and configured correctly. Refer to the MinGW setup documentation if necessary.

4. **Compile the Application:**
   - Navigate to the `src` directory and compile the `main.c` file.
   ```bash
   cd src
   gcc main.c -o ../bin/library_app.exe
   ```

5. **Run the Application:**
   - Navigate to the `bin` directory and run the executable.
   ```bash
   cd ../bin
   ./library_app.exe
   ```

---

### **File Descriptions**

1. **`main.c`:**
   - Contains the main function and integrates all functionalities. It serves as the entry point for the application.

2. **`book_manager.c`:**
   - Implements functions for managing books, including adding new books, searching for books, and updating book information.

3. **`database.c`:**
   - Provides functions for initializing, saving, and loading the database.

4. **`loan_manager.c`:**
   - Implements functions for managing book loans, returns, and displaying loan history.

5. **`report_manager.c`:**
   - Implements functions for generating various reports about the library usage, such as monthly loan reports and inventory reports.

6. **`user_manager.c`:**
   - Implements functions for managing users, including registration, renewing memberships, and canceling memberships.

7. **`book_manager.h`, `database.h`, `loan_manager.h`, `report_manager.h`, `user_manager.h`:**
   - Header files containing function declarations for their respective `.c` files.

---

### **Project Functionality**

1. **Gestión de Libros:**
   - **Description:** Allows administrators to add new books to the system, search for books by title, author, or genre, and update book information.
   - **Usage:** Select "Gestión de Libros" from the main menu and follow the prompts.

2. **Gestión de Usuarios:**
   - **Description:** Allows the registration of new users, renewal, and cancellation of memberships.
   - **Usage:** Select "Gestión de Usuarios" from the main menu and follow the prompts.

3. **Préstamo y Devolución de Libros:**
   - **Description:** Manages the loaning and returning of books, including recording loan dates and return dates.
   - **Usage:** Select "Préstamo y Devolución de Libros" from the main menu and follow the prompts.

4. **Inventario y Reportes:**
   - **Description:** Maintains an updated inventory of books and generates reports on library usage.
   - **Usage:** Select "Inventario y Reportes" from the main menu and follow the prompts.

---

This documentation provides an overview of the project, technologies used, setup instructions, file descriptions, and functionality details. It serves as a guide to understanding, setting up, and using the Library Management System.
