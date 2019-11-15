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

#endif //!__AVL_TREE_BASIC__