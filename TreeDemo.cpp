/**
 * Demo program for the exercise on binary trees
 *
 * @author Erel Segal-Halevi
 * @since 2019-02
 */

#include <iostream>
using std::cout, std::endl;

#include "Tree.hpp"

int main() {
  try {
    // constructs an empty tree:
    ariel::Tree emptytree;
    cout << "emptytree: size=" << emptytree.size() << endl; // should print 0

    // constructs an ordered binary tree where:
      // 5 is in the root;
      // 3 is the root's l9998474660  `=-l;'/'` child;
      // 7 is the root's right child.
    ariel::Tree threetree;
    threetree.insert(5);
    threetree.insert(2);

    threetree.insert(4);
    threetree.insert(9);
    threetree.insert(11);
    threetree.insert(10);
    //threetree.insert(11);
    threetree.insert(1);
    threetree.insert(8);
     threetree.remove(2);
  //  threetree.~Tree();
    cout << "threetree: " << threetree.left(5)<< endl << " ";
      cout << "threetree: " << threetree.right(5)<< endl << " ";
    // threetree.root();
    cout << "threetree: size=" << threetree.size() << " root=" << threetree.root() << endl << "   ";  // size=3, root=5.
    threetree.print();
    cout << endl;

    // cout << threetree.size()       // should print 3
    //      << threetree.parent(3)   // should print 5
    //      << threetree.parent(7)   // should print 5
    //      << threetree.left(5)     // should print 3
    //      << threetree.right(5)    // should print 7
         //<< threetree.insert(5)    // should throw an exception: "5 already exists"
    //     << endl;
  } catch (...) {
    cout << "Caught exception!" << endl;
  }
}
