#include <iostream>
#include "treenode.h"
#include "bst.h"
#include "iterator.h"
#include <vector>
#include <string>
#include <algorithm>
#include "avl.h"
using namespace std;

template <typename T>
void printTree(const BST<T>& tree)  // Self explanatory from name
{
  // Traverse tree
  cout << "Inorder (sorted): ";
  tree.inorder();
  cout << "\nPostorder: ";
  tree.postorder();
  cout << "\nPreorder: ";
  tree.preorder();
  cout << "\nThe number of nodes is " << tree.getSize() << endl;
}

string toUpperCase(const string& s) {// Converting a string to all upper case
  string upper = s;
  for (int i = 0; i < upper.length(); i++)
    upper[i] = toupper(upper[i]);

  return upper;
}


int main() {
    BST<string> tree;
    tree.insert("George");
    tree.insert("Michael");
    tree.insert("Tom");
    tree.insert("Adam");
    tree.insert("Jones");
    tree.insert("Peter");
    tree.insert("Daniel");
    printTree(tree);

    

    cout << "\nThe number of nodes is " << tree.getSize() << endl;
    cout << "search(\"Jones\") " << tree.search("Jones") << endl;
    cout << "search(\"John\") " << tree.search("John") << endl;

    cout << "A path from the root to Peter is: ";
    vector<TreeNode<string>*>* v = tree.path("Peter");
    for (unsigned i = 0; i < (*v).size(); i++) {
        cout << (*v)[i]->element << " ";
    }
    delete v;  // Free the memory allocated for the vector
    int numbers[] = {2, 4, 3, 1, 8, 5, 6, 7};
    BST<int> intTree(numbers, 8);
    cout << "\nInorder (sorted): ";
    intTree.inorder();

    cout << "\nAfter delete George:";
    tree.remove("George");
    printTree(tree);

    cout << "\nAfter delete Adam:";
    tree.remove("Adam");
    printTree(tree);

    cout << "\nAfter delete Michael:";
    tree.remove("Michael");
    printTree(tree);

    // Create a binary search tree for strings
    BST<string> tree2;

    // Add elements to the tree
    tree2.insert("America");
    tree2.insert("Canada");
    tree2.insert("Russia");
    tree2.insert("France");

    // Traverse a binary tree using iterators
    for (Iterator<string> iterator = tree2.begin(); iterator != tree2.end(); ++iterator) {
        cout << toUpperCase(*iterator) << " ";
    }

    cout << endl << "Min element is " << *min_element(tree2.begin(), tree2.end()) << endl;
    cout << "Max element is " << *max_element(tree2.begin(), tree2.end()) << endl;

    return 0;
}