# C++ Basics: Operators, Smart Pointers, and Exception Handling

This project is a demonstration of several core C++ concepts, including operator overloading, memory management with smart pointers, and robust error handling.

## 🚀 Features

### 1. Operator Overloading
- **Arithmetic Operator (`+`)**: Implemented within the `Point` class to allow adding two points together.
- **Output Operator (`<<`)**: Overloaded as a global function to allow direct printing of `Point` objects in the format `(X: 10, Y: 5)`.

### 2. Smart Pointers (Memory Management)
- **`std::unique_ptr`**: Demonstrates exclusive ownership of a string object.
- **`std::shared_ptr`**: Demonstrates reference counting. Includes a check of `use_count()` to show how many pointers are sharing the same memory.
- **Automatic Cleanup**: Shows how modern C++ avoids memory leaks by automatically freeing memory when pointers go out of scope.

### 3. Exception Handling
- **Try-Catch Blocks**: Includes a `safe_divide` function that throws a `const char*` exception if a division by zero is attempted.
- **Dynamic Arrays**: A demonstration of manual memory management (`new[]` and `delete[]`) for comparison with smart pointers.

## 🛠️ How to Run

1. **Prerequisites**: Ensure you have a C++ compiler supporting **C++20** and **CMake 4.1+**.
2. **Build**:
   ```bash
   mkdir cmake-build-debug
   cd cmake-build-debug
   cmake ..
   make
   ```
3. **Execute**:
   ```bash
   ./C__TryCatchTrow
   ```

## 📝 Code Structure
- `zadacha12.cpp`: The main source file containing the `Point` class, pointer demonstrations, and logic.
- `CMakeLists.txt`: Build configuration for the project.

## 💡 Key Concept: Shared Pointer Memory
As demonstrated in the code, when using `std::shared_ptr`:
> The memory for the object is only released when the reference count reaches zero—specifically, after the last pointer (e.g., `s_ptr1` and `s_ptr2`) goes out of scope.