#include <iostream>
#include "treenode.h"
using namespace std;

int main() {
    // Creating a tree and assigning values
    TreeNode<int>* root = new TreeNode<int>(60);
    root -> left = new TreeNode<int>(55);
    root -> right = new TreeNode<int>(100);

    // Printing root (parent) element
    cout << root -> element << endl;

    // Printing root left child element
    cout << root -> left -> element << endl;

    // Printing root right child element
    cout << root -> right -> element << endl;

    // Testing search algorithms
    if (root->search(100)) {
        cout << "First case true" << endl
        ;
    }
    if (root->search(12)) {
        cout << "Second case true" << endl;
    }

    return 0;
}