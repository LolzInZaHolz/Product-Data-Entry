# Product Information System in C++

This program manages product information using structures and dynamic memory allocation. It allows entering multiple product records and displaying their stored details.

---

## Overview

The application uses a `Product` structure to store:

- Name  
- Model number  
- Price  

Memory for multiple products is dynamically allocated based on user input.

---

## Features

### Enter Product Details
Each product includes:
- Product name  
- Model number  
- Price  

User enters details for each product one by one.

### Display Details
After all entries are completed, the program displays:
- Name  
- Model number  
- Price  

for every product stored in memory.

### Memory Management
- Products are stored in a dynamically allocated array.
- Memory is released at the end using `delete[]`.

---

## Notes

- Product names are read using `getline`, allowing spaces.
- `cin.ignore()` is used to clear input buffer before reading string input.
- The program waits for Enter before exiting.
