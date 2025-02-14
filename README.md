[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/DqCnpMUO)
# AP-Experiment-4

## Divide and Conquer
Divide and Conquer is an algorithm design paradigm that solves complex problems by breaking them into smaller subproblems, solving each recursively, and combining the results to obtain the final solution.
[🔗 Learn more about Divide and Conquer](https://www.enjoyalgorithms.com/blog/divide-and-conquer)

![image](https://github.com/user-attachments/assets/dd536d78-0da4-465c-9fa8-3dce90cd86d5)

### Examples of Divide and Conquer Algorithms:
1. Merge Sort – Sorts an array by dividing, sorting subarrays, and merging them.
2. Quick Sort – Selects a pivot, partitions elements, and sorts recursively.
3. Binary Search – Recursively searches for an element in a sorted array.


## Recusion
Recursion is a programming technique where a function calls itself to solve smaller instances of a problem until it reaches a stopping condition. It is commonly used in divide and conquer algorithms and tree-based problems.

### Base Condition (Stopping Condition)
The base condition is the condition in a recursive function that stops further recursive calls. Without a base condition, recursion would continue indefinitely, leading to a stack overflow error.

### Recursive Condition
The recursive condition defines how the function will call itself, reducing the problem size with each step.

✅ Example: 

      def factorial(n):
           if n == 0 or n == 1:  # Base condition
                   return 1
           return n * factorial(n - 1)  # Recursive call

      print(factorial(5))  # Output: 120
      

# Divide and Conquer - LeetCode Problems

| Day | Difficulty | Problem                       | Type | Link                                                                                                                                    | Company |
|----|------------ |-------------------------------|------|-----------------------------------------------------------------------------------------------------------------------------------------|---------|
| 5  | Easy        | Longest Nice Substring        | CW   | [Problem Link](https://leetcode.com/problems/longest-nice-substring/description)                                                        | Microsoft|
| 5  | Easy        | Reverse Bits                  | CW   | [Problem Link](https://leetcode.com/problems/reverse-bits/description/?envType=problem-list-v2&envId=divide-and-conquer)                | Amazon |
| 5  | Easy        | Number of 1 Bits              | HW   | [Problem Link](https://leetcode.com/problems/number-of-1-bits/description/?envType=problem-list-v2&envId=divide-and-conquer)            | Microsoft |
| 5  | Medium      | Max Subarray                  | CW   | [Problem Link](https://leetcode.com/problems/maximum-subarray/description/?envType=problem-list-v2&envId=divide-and-conquer)            | Amazon |
| 5  | Medium      | Search 2D Matrix II           | CW   | [Problem Link](https://leetcode.com/problems/search-a-2d-matrix-ii/description/?envType=problem-list-v2&envId=divide-and-conquer)       | Twitter |
| 5  | Medium      | Super Pow                     | CW   | [Problem Link](https://leetcode.com/problems/super-pow/description/?envType=problem-list-v2&envId=divide-and-conquer)                   | Amazon |
| 6  | Medium      | Beautiful Array               | CW   | [Problem Link](https://leetcode.com/problems/beautiful-array/description/?envType=problem-list-v2&envId=divide-and-conquer)             | Microsoft |
| 6  | Hard        | The Skyline Problem           | CW   | [Problem Link](https://leetcode.com/problems/the-skyline-problem/description/?envType=problem-list-v2&envId=divide-and-conquer)         | Twitter |
| 6  | Hard        | Reverse Pairs                 | CW   | [Problem Link](https://leetcode.com/problems/reverse-pairs/description/?envType=problem-list-v2&envId=divide-and-conquer)               | Uber |
| 6  | Hard        | Longest Increasing Subsequence II | CW | [Problem Link](https://leetcode.com/problems/longest-increasing-subsequence-ii/description/?envType=problem-list-v2&envId=divide-and-conquer) | Apple |

### Legend:
- **CW**: Classwork  
- **HW**: Homework  
