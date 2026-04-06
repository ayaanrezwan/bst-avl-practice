#ifndef TREENODE_H  // Header Guard
#define TREENODE_H

template<typename T>
class TreeNode {
    public:
        T element;  // Element which the node holds
        TreeNode<T>* left;  // Pointer at left child
        TreeNode<T>* right; // Pointer at right child

        TreeNode(T element) {  // Constructor
            // Store the parameter into node element
            this -> element = element;

            // Set child pointers to nullptr
            left = nullptr;
            right = nullptr;
        }

        bool search(T element) {    // Searching tree for element
            TreeNode<T>* current = this;    // Start at root

            while (current != nullptr) {    // Repeat until hits end of the tree
                if (current -> element == element) {
                    return true;

                } else if (element < current -> element) {  // If element is less, go left
                    current = current->left;

                } else {    // If element is greater, go right
                    current = current->right;

                }
            }
            return false;   // If nothing is found, return false
        }
};

#endif