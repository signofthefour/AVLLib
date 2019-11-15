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
#ifndef __NODE_BASIC__
#define __NODE_BASIC__
#include <string>
#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

/** Node
 * type: Class
 * use: store in for of a node in tree with template
*/
// TODO: Node contain all infor of a node with data
template<typename T>
class   Node {
    T       data;
    Node<T>*      pLeft;
    Node<T>*      pRight;
    int     level;
    int     height;
    int     balance = 0;
    // Constructor
public:
    Node() : pLeft(NULL), pRight(NULL), level(0), height(0), balance(0) {};
    Node(T _data) : data(_data), pLeft(NULL), pRight(NULL), level(0), height(0), balance(0) {};
    Node(T& _data) : data(_data), pLeft(NULL), pRight(NULL), level(0), height(0), balance(0) {};
    Node(Node<T>& n) : data(n.data), pLeft(n.pLeft), pRight(n.pRight), level(n.level), height(n.height), balance(n.balance) {};
    // Operator
    Node&   operator=(const T& _data);
    Node&   operator=(const Node<T>& n);
    // Set function
    void    setData(T& a) {data = a;}
    void    setLeft(Node<T>* lChild)    { pLeft = lChild;   }
    void    setRight(Node<T>* rChild)   { pRight = rChild;  }
    void    setLevel(int _level)        { level = _level;   }
    void    setHeight(int _h)           { height = _h;      }
    void    setBalance(ing _b)          { balance = _b;     }
    // Get function
    T&      getData()   { return data;      }
    Node<T>*getLeft()   { return pLeft;     }
    Node<T>*getRight()  { return pRight;    }
    int     getLevel()  { return level;     }
    int     getHeight() { return height;    }
    int     getBalance(){ return balance;   }
};

template<typename T>
Node<T>& Node<T>::operator=(const T& _data) {
    if (&data == &_data) {
        return *this;
    }
    // Don't need to check and delete if data is created by new, it's should be make in operator= of T
    data = _data;
    return *this;
}

template<typename T>
Node<T>& Node<T>::operator=(const Node<T>& _n) {
    if (&_n == this) return *this;
    // Don't need to check and delete if data is created by new, it's should be make in operator= of T
    data    = _n.data;
    pLeft   = _n.pLeft;
    pRight  = _n.Right;
    height  = _n.height;
    level   = _n.level;
    balance = _n.balance;
    return *this;
}

#endif //!__NODE_BASIC__