<p align="center">
  <img src="https://img.shields.io/badge/C-Language-blue" alt="C Language">
  <img src="https://img.shields.io/badge/Data_Structures-Trees-green" alt="Data Structures">
  <img src="https://img.shields.io/badge/Algorithms-Implementation-orange" alt="Algorithms">
  <img src="https://img.shields.io/badge/Memory-Management-red" alt="Memory Management">
  <img src="https://img.shields.io/badge/Status-Complete-brightgreen" alt="Status">
</p>

<div align="center">
  <h1>🌳 Binary Trees</h1>
  <p><em>Comprehensive implementation of binary tree data structures and algorithms in C</em></p>
</div>

---

## 📋 Table of Contents
- [📖 Overview](#-overview)
- [🎯 Learning Objectives](#-learning-objectives)
- [🛠️ Tech Stack](#️-tech-stack)
- [📁 Project Structure](#-project-structure)
- [🚀 Getting Started](#-getting-started)
- [💡 Usage](#-usage)
- [🏆 Key Features](#-key-features)
- [📚 Resources](#-resources)
- [👥 Contributors](#-contributors)

## 📖 Overview
The Binary Trees project is a comprehensive collection of data structure implementations in C, covering fundamental to advanced tree concepts. This project demonstrates mastery of hierarchical data organization, memory management, and algorithm design through the implementation of binary trees, binary search trees (BST), AVL trees, and binary heaps.

Developed as part of the ALX Software Engineering Program's low-level programming and algorithms specialization, this project provides hands-on experience with essential data structures used in systems programming, database design, and software engineering interviews. Each implementation follows industry best practices with proper memory management, error handling, and comprehensive testing.

## 🎯 Learning Objectives
- **Data Structure Mastery**: Understand and implement various binary tree structures
- **Algorithm Implementation**: Master tree traversal methods and specialized operations
- **Memory Management**: Develop expertise in dynamic memory allocation and cleanup
- **Complexity Analysis**: Analyze and optimize algorithm time and space complexity
- **Recursive Programming**: Apply recursive problem-solving techniques effectively
- **Code Quality**: Write professional-grade C code following industry standards
- **Problem Solving**: Tackle complex algorithmic challenges systematically
- **Performance Optimization**: Design efficient algorithms for large-scale applications
- **Testing & Debugging**: Implement comprehensive testing and debugging strategies
- **Technical Interview Preparation**: Master common tree problems and solutions

## 🛠️ Tech Stack

**Core Technologies:**
- **Language**: C (C90/C99 standard)
- **Compiler**: GCC with strict warning flags
- **Build System**: Manual compilation with Makefile support
- **Memory Management**: Dynamic allocation with malloc/free

**Development Tools:**
- **Debugging**: GDB for step-by-step debugging
- **Memory Analysis**: Valgrind for leak detection and memory profiling
- **Code Quality**: Betty style checker for coding standards
- **Testing**: Custom test suites with comprehensive edge case coverage

**Algorithms & Concepts:**
- **Tree Traversal**: Preorder, Inorder, Postorder, Level-order
- **Self-Balancing**: AVL tree rotations and rebalancing
- **Priority Queues**: Binary heap implementation
- **Search Algorithms**: Efficient BST search and retrieval

## 📁 Project Structure
```
binary_trees/
├── 📄 binary_trees.h              # Main header with structure definitions
├── 📄 binary_tree_print.c         # Tree visualization utility
├── 
├── 🌳 Basic Binary Tree Operations
│   ├── 0-binary_tree_node.c       # Node creation
│   ├── 1-binary_tree_insert_left.c # Left insertion
│   ├── 2-binary_tree_insert_right.c # Right insertion
│   ├── 3-binary_tree_delete.c     # Tree deletion
│   ├── 4-binary_tree_is_leaf.c    # Leaf node check
│   ├── 5-binary_tree_is_root.c    # Root node check
│   └── ...
├── 
├── 🔄 Tree Traversal Algorithms
│   ├── 6-binary_tree_preorder.c   # Preorder traversal
│   ├── 7-binary_tree_inorder.c    # Inorder traversal
│   ├── 8-binary_tree_postorder.c  # Postorder traversal
│   └── 101-binary_tree_levelorder.c # Level-order traversal
├── 
├── 📊 Tree Analysis Functions
│   ├── 9-binary_tree_height.c     # Height calculation
│   ├── 10-binary_tree_depth.c     # Depth calculation
│   ├── 11-binary_tree_size.c      # Size calculation
│   ├── 12-binary_tree_leaves.c    # Leaf count
│   └── ...
├── 
├── 🔍 Binary Search Tree (BST)
│   ├── 110-binary_tree_is_bst.c   # BST validation
│   ├── 111-bst_insert.c           # BST insertion
│   ├── 112-array_to_bst.c         # Array to BST conversion
│   ├── 113-bst_search.c           # BST search
│   └── 114-bst_remove.c           # BST deletion
├── 
├── ⚖️ AVL Tree (Self-Balancing)
│   ├── 120-binary_tree_is_avl.c   # AVL validation
│   ├── 121-avl_insert.c           # AVL insertion with balancing
│   ├── 122-array_to_avl.c         # Array to AVL conversion
│   ├── 123-avl_remove.c           # AVL deletion with rebalancing
│   └── 124-sorted_array_to_avl.c  # Optimized AVL construction
├── 
├── 🏔️ Binary Heap Implementation
│   ├── 130-binary_tree_is_heap.c  # Heap validation
│   ├── 131-heap_insert.c          # Heap insertion
│   ├── 132-array_to_heap.c        # Array to heap conversion
│   ├── 133-heap_extract.c         # Heap extraction
│   └── 134-heap_to_sorted_array.c # Heap sort
├── 
├── 📈 Complexity Analysis
│   ├── 115-O                      # BST complexity
│   ├── 125-O                      # AVL complexity
│   └── 135-O                      # Heap complexity
└── 
└── 🧪 tests/                      # Comprehensive test suite
    ├── 0-main.c                   # Basic tree tests
    ├── 111-main.c                 # BST tests
    ├── 121-main.c                 # AVL tests
    └── ...
```

## 🚀 Getting Started

### Prerequisites
- **GCC Compiler**: Version 4.8.4 or later
- **Operating System**: Linux (Ubuntu 14.04 LTS or similar)
- **Memory Tools**: Valgrind for memory leak detection
- **Code Style**: Betty style checker

### Installation

1. **Clone the repository:**
   ```bash
   git clone https://github.com/your-username/binary_trees.git
   cd binary_trees
   ```

2. **Compile individual files:**
   ```bash
   # Basic compilation
   gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-binary_tree_node.c 0-main.c -o 0-node
   
   # With debug information
   gcc -g -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-binary_tree_node.c 0-main.c -o 0-node
   ```

3. **Compile with test files:**
   ```bash
   # Example: Testing BST insertion
   gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 111-bst_insert.c 111-main.c -o 111-bst_insert
   ```

### Running the Project

1. **Execute compiled programs:**
   ```bash
   # Run basic tree operations
   ./0-node
   
   # Run BST operations
   ./111-bst_insert
   
   # Run with Valgrind for memory checking
   valgrind --leak-check=full ./0-node
   ```

2. **Test specific functionality:**
   ```bash
   # Test tree traversal
   gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 6-binary_tree_preorder.c 6-main.c -o traversal
   ./traversal
   ```

## 💡 Usage

### Basic Binary Tree Operations

```c
#include "binary_trees.h"

// Create a new binary tree
binary_tree_t *root = binary_tree_node(NULL, 98);

// Insert left and right children
root->left = binary_tree_node(root, 12);
root->right = binary_tree_node(root, 402);

// Print the tree
binary_tree_print(root);

// Clean up memory
binary_tree_delete(root);
```

### Binary Search Tree Operations

```c
#include "binary_trees.h"

// Create BST and insert values
bst_t *root = NULL;
bst_insert(&root, 98);
bst_insert(&root, 402);
bst_insert(&root, 12);

// Search for a value
bst_t *node = bst_search(root, 12);
if (node)
    printf("Found: %d\n", node->n);

// Remove a value
root = bst_remove(root, 12);
```

### AVL Tree Operations

```c
#include "binary_trees.h"

// Create AVL tree with automatic balancing
avl_t *root = NULL;
avl_insert(&root, 98);
avl_insert(&root, 402);
avl_insert(&root, 12);

// Tree automatically maintains balance
binary_tree_print(root);
```

### Binary Heap Operations

```c
#include "binary_trees.h"

// Create max heap
heap_t *root = NULL;
heap_insert(&root, 98);
heap_insert(&root, 402);
heap_insert(&root, 12);

// Extract maximum value
int max = heap_extract(&root);
printf("Maximum: %d\n", max);
```

## 🏆 Key Features

### Complete Tree Implementation Suite
- **Basic Binary Trees**: Full CRUD operations with comprehensive tree manipulation
- **Binary Search Trees**: Efficient search, insertion, and deletion with BST property maintenance
- **AVL Trees**: Self-balancing with automatic rotations for optimal performance
- **Binary Heaps**: Priority queue implementation with heap property preservation

### Advanced Algorithm Collection
- **Multiple Traversal Methods**: Preorder, inorder, postorder, and level-order traversals
- **Tree Analysis**: Height, depth, size, leaf count, and structural property validation
- **Relationship Finding**: Sibling, uncle, and lowest common ancestor algorithms
- **Balancing Operations**: Left and right rotations for AVL tree maintenance

### Professional Development Practices
- **Memory Management**: Proper allocation, deallocation, and leak prevention
- **Error Handling**: Defensive programming with null pointer checks
- **Code Documentation**: Comprehensive function headers and inline comments
- **Testing Coverage**: Extensive test suites with edge case validation

### Performance Optimization
- **Complexity Analysis**: Documented time and space complexity for all operations
- **Efficient Algorithms**: Optimized implementations for large-scale data processing
- **Memory Efficiency**: Minimal memory footprint with cache-friendly data layouts
- **Scalability**: Algorithms designed for enterprise-level applications

## 📚 Resources

### Learning Materials
- [Binary Trees - GeeksforGeeks](https://www.geeksforgeeks.org/binary-tree-data-structure/)
- [AVL Trees Explained](https://www.programiz.com/dsa/avl-tree)
- [Binary Heaps Tutorial](https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/)

### Documentation
- [Binary Trees Visualization](https://visualgo.net/en/bst)
- [Algorithm Complexity Guide](https://www.bigocheatsheet.com/)
- [C Memory Management](https://www.learn-c.org/en/Dynamic_memory_allocation)

### Practice Problems
- [LeetCode Tree Problems](https://leetcode.com/tag/tree/)
- [HackerRank Data Structures](https://www.hackerrank.com/domains/data-structures)
- [Binary Tree Interview Questions](https://www.interviewbit.com/tree-interview-questions/)

## 👥 Contributors

**Chigbu Joshua**  
📧 Email: [chigbujoshua@yahoo.com](mailto:chigbujoshua@yahoo.com)  
🐙 GitHub: [@yungryce](https://github.com/yungryce)  
🎓 Program: ALX Software Engineering  

---

## 📈 Algorithm Complexity Summary

| Operation | Binary Tree | BST Average | BST Worst | AVL Tree | Heap |
|-----------|-------------|-------------|-----------|-----------|------|
| Search    | O(n)        | O(log n)    | O(n)      | O(log n)  | O(n) |
| Insert    | O(1)        | O(log n)    | O(n)      | O(log n)  | O(log n) |
| Delete    | O(1)        | O(log n)    | O(n)      | O(log n)  | O(log n) |
| Traversal | O(n)        | O(n)        | O(n)      | O(n)      | O(n) |

---

## 🎯 Real-World Applications

- **Database Systems**: B-trees and B+ trees for efficient data indexing
- **File Systems**: Directory structures and hierarchical file organization
- **Compilers**: Abstract syntax trees for code parsing and optimization
- **Operating Systems**: Process trees and memory management structures
- **Network Routing**: Routing tables and decision tree algorithms
- **Game Development**: Scene graphs and collision detection systems
- **Machine Learning**: Decision trees and random forest algorithms

---

*This project demonstrates comprehensive mastery of data structures and algorithms, essential skills for systems programming, technical interviews, and software engineering excellence.*