#include "treenode.h"

template<typename T>
class TreeNode {
    public:
        T element;  // Element which the node holds
        TreeNode<T>* left;  // Pointer at left child
        TreeNode<T>* right; // Pointer at right child
        TreeNode(T element) {   // Constructor
            this->element = element;
            left = nullptr;
            right = nullptr;
        }
};