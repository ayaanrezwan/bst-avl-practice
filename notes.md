# Binary Search Tree Notes

## Logic
- The left child will always be less than the parent, the right child will always be greater

## Implementation
- When creating a new node in a tree, always set the children to null
- When using a member function on a tree, if you call the function using a pointer, you need to use "->" instead of "." as you need to DEREFERENCE (get the information from the pointer then start the function)