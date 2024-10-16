# Heaps

- **Definition**: A heap is a special tree-based data structure, specifically a complete binary tree.
- **Types of Heaps**:
  - **Min Heap**: The value of the parent node is always less than or equal to its child nodes.
  - **Max Heap**: The value of the parent node is always greater than or equal to its child nodes.

## Key Properties:
1. **Min Heap**: The root (or parent) always has the smallest value, and all child nodes have values greater than or equal to their parent.
   - Example: `Parent <= Child`
   
2. **Max Heap**: The root (or parent) always has the largest value, and all child nodes have values smaller than or equal to their parent.
   - Example: `Parent >= Child`

3. **Complete Binary Tree**: Heaps are always complete binary trees, meaning all levels are fully filled except possibly the last level, which is filled from left to right.

4. **Array Representation**: Heaps can be represented as arrays, where:
   - The parent of any node at index `i` is found at index `(i - 1) // 2`.
   - The left child of a node at index `i` is found at index `2i + 1`.
   - The right child of a node at index `2i + 2`.

## Example:

Consider the heap:

```
      7
   5     6
 1   2  3   4
```

Array representation: `[7, 5, 6, 1, 2, 3, 4]`

- The parent of the node at index `6` is at index `(6 - 1) // 2 = 2`. So, the parent of `4` (at index `6`) is `6` (at index `2`).

## Additional Properties:
- **Heapify**: This is the process of rearranging an array to satisfy the heap property.
- **Heap Operations**: Common operations on heaps include:
  - **Insertion**: Adding a new element and maintaining the heap property.
  - **Deletion**: Removing the root element and rebalancing the heap.

---
