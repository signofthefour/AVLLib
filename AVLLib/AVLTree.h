/**
 * ******************************************************************************************
 * AVL Tree Library                                                                         *
 * Author: Nguyen Tan Dat                                                                   *
 * Faculty: Computer Science                                                                *
 * University: Ho Chi Minh City of Technology, VietNam                                      *
 * Contact: Dat.nguyen_bk@hcmut.edu.vn                                                      *
 * From: 15/11/2019                                                                         *
 * End:                                                                                     *
 * This Project is to implement an full support for working with AVL tree in university     *
 *                                                                                          *
 * ******************************************************************************************
*/
// TODO: Design the basic of a AVL Tree
#ifndef __AVL_TREE_BASIC__
#define __AVL_TREE_BASIC__
#include <string>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include "Node.h"

#define max(a, b)   (a > b) ? a : b

using namespace std;

/**TreeException
 * type: Class
 * use: handle exception in process with tree
 * note: it contains both error code and error message
*/
class TreeException {
    int     _error;
    string  _text;
public:
    TreeException() : _error(0), _text("Success") {}
    TreeException(int err) : _error(err), _text("Unknown Error") {}
    TreeException(int err, const char* text) : _error(err), _text(text) {}
    int getError() { return _error; }
    string& getErrorText() { return _text; }
};

template<typename T>
class AVLTree {
    Node<T>* root;
    // Get height of a node from avl instance
    int     height(Node<T>* node) {
        if (node == NULL) return 0;
        return node.getHeight();
    }
    Node<T>&   rightRotate(Node<T>*& node);
    Node<T>&   leftRotate(Node<T>*& node);
    Node<T>&   getBalance(Node<T>*& node);
public:
    Node&   insert(T data) {
        
    }
};

/**
 * T1, T2, T3 and T4 are subtrees.
         z                                      y 
        / \                                   /   \
       y   T4      Right Rotate (z)          x      z
      / \          - - - - - - - - ->      /  \    /  \ 
     x   T3                               T1  T2  T3  T4
    / \
  T1   T2
*/
// TODO: Implement Right rotate at a node which is consider the root of this subtree
// 
template<typename T>
Node<T>&    AVLTree<T>::rightRotate(Node<T>*& z) {
    Node<T>*    y = z->getLeft();
    Node<T>*    T3 = z->getRight();
    // rotate right
    y->setRight(z);
    z->setLeft(T3);
    // TODO: Continue here, done rotate
    // FIXME: check rotate direction
}
#endif //!__AVL_TREE_BASIC__