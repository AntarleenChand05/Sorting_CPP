# Sorting Algorithms in C++

### Aim  
To implement and compare three fundamental sorting algorithms—**Bubble Sort**, **Selection Sort**, and **Insertion Sort**—on integer arrays using C++.

***

### Theory  

Sorting arranges elements of a list in a particular order (usually ascending). It is crucial in optimising data search and organisation. Different sorting algorithms exist with varying time and space complexities.

| Algorithm      | Description                                             | Time Complexity (Average) | Space Complexity | Stability          |
|----------------|---------------------------------------------------------|---------------------------|------------------|--------------------|
| Bubble Sort    | Repeatedly swaps adjacent out-of-order elements.       | $$O(n^2)$$                | $$O(1)$$         | Stable             |
| Selection Sort | Selects the minimum element and swaps it with the current index.| $$O(n^2)$$                | $$O(1)$$         | Not stable         |
| Insertion Sort | Builds a sorted array one element at a time by inserting elements.| $$O(n^2)$$           | $$O(1)$$         | Stable             |

#### Bubble Sort  
- Repeatedly compares adjacent elements and swaps if out of order.  
- Largest elements "bubble" to the end in each iteration.

#### Selection Sort  
- Selects the minimum element from the unsorted part and swaps it with the front.  
- Reduces swaps compared to bubble sort.

#### Insertion Sort  
- Builds a sorted portion at the front by inserting each new element into its correct position.  
- Efficient for nearly sorted arrays.

***

### Algorithm  

#### Bubble Sort  
- For each element, compare with the next element.  
- Swap if the current element > next element.  
- Repeat for $$ n-1$ passes or until no swaps occur.

#### Selection Sort  
- For each position from 0 to $$n-2$$:  
  - Find the minimum element in the unsorted part.  
  - Swap it with the element at the current position.

#### Insertion Sort  
- Start from the second element.  
- Compare with elements before it and insert it at the proper position in the sorted subarray.

***

### Usage  

- Enter the number of elements and the array elements.  
- Choose the sorting algorithm by entering 1, 2, or 3.  
- The program sorts the array using the selected algorithm and displays the sorted result.

***

### Conclusion  

This program demonstrates key concepts of sorting via three classical algorithms and highlights their working and efficiency in sorting integer arrays. Understanding these basic sorting techniques lays the foundation for learning advanced algorithms in data structuring and manipulation within computer science.

---
