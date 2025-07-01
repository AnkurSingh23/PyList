# ⚡ PyList — A Flexible C++ Linked List for All Datatypes

Welcome to **PyList**, my personal attempt at building a **dynamic, type-flexible** linked list in **C++** — inspired by Python’s ease and versatility.  
This structure supports multiple datatypes at once — `int`, `float`, `double`, `string`, `char`, `bool` — all inside the same list.

---

## ✅ Current Features

- 🔢 Append values of **any type** (int, float, double, string, char, bool)
- 👀 Display the list with **ANSI-colored output** for visual clarity
- 📏 `Size()` function to get current list size
- 📦 Constructor overloading to handle different data types cleanly

---

## 🎯 What Makes PyList Different?

Unlike standard C++ containers like `vector` or `list`, **PyList** lets you:

- 🔁 Store **mixed datatypes in a single list**
- 🔍 View elements with **color-coded output**
- ⚙️ Expand support for future operations like insert, remove, search
- 🔄 Handle data dynamically using custom logic — no STL overhead

---

## 🧪 Sample Usage (from `main()`)

```cpp
PyList list;
list.append(1);              // int
list.append("Ankur");        // string
list.append(true);           // bool
list.append(1.2);            // double
list.append(1.2f);           // float

list.display();
cout << list.Size();

📚 Why the Name PyList?
Because I wanted the flexibility of Python, but with the power and control of C++.
This is my custom-built data structure that doesn't restrict types — just like Python lists.

🤝 Contributions Welcome
This is an evolving, beginner-friendly project.
Feel free to fork, clone, and contribute ideas or improvements!