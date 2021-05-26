#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "doctest.h"
using namespace std;

#include "BinaryTree.hpp"
using namespace ariel;

TEST_CASE("INT TREE -> add root left right test"){
    BinaryTree<int> bt;

    CHECK_NOTHROW(bt.add_root(5));
    CHECK_NOTHROW(bt.add_left(5, 2));
    CHECK_NOTHROW(bt.add_right(5, 9));
    CHECK_NOTHROW(bt.add_left(2, 3));
    CHECK_NOTHROW(bt.add_right(9,6));
    CHECK_NOTHROW(bt.add_right(3,7));
    CHECK_NOTHROW(bt.add_left(6,12));
    CHECK_NOTHROW(bt.add_right(6,14));
    CHECK_NOTHROW(bt.add_left(3, 1));

    SUBCASE("change root"){
        CHECK_NOTHROW(bt.add_root(31)); //change the root to ''
        CHECK_NOTHROW(bt.add_root(17));
        CHECK_NOTHROW(bt.add_root(8));
    }

    SUBCASE("node is not in the tree"){
        CHECK_THROWS(bt.add_left(8,4)); 
        CHECK_THROWS(bt.add_right(16,23));
        CHECK_THROWS(bt.add_left(20,21));
        CHECK_THROWS(bt.add_right(42,90));
    }
}
    
    /*
               8
              / \
             2   9         
            /     \
           3       6
          / \     / \
         1    7   12  14 
    
    */

TEST_CASE("CHAR TREE -> add root left right test"){
    BinaryTree<int> bt;

    CHECK_NOTHROW(bt.add_root('A'));
    CHECK_NOTHROW(bt.add_left('A', 'B'));
    CHECK_NOTHROW(bt.add_right('A', 'C'));
    CHECK_NOTHROW(bt.add_left('B', 'D'));
    CHECK_NOTHROW(bt.add_right('B','E'));
    CHECK_NOTHROW(bt.add_right('C','F'));
    CHECK_NOTHROW(bt.add_left('C','G'));
    CHECK_NOTHROW(bt.add_right('E','H'));
    CHECK_NOTHROW(bt.add_left('E', 'I'));

    /*
               A
              / \
             B   C         
            / \  /\
           D   E F G
              / \
             H   I
    */

    SUBCASE("change root"){
        CHECK_NOTHROW(bt.add_root('J')); //change the root to 'J'
        CHECK_NOTHROW(bt.add_root('K'));
        CHECK_NOTHROW(bt.add_root('L'));

        /*
               L
              / \
             B   C         
            / \  /\
           D   E F G
              / \
             H   I
    */
    }
    SUBCASE("node is not in the tree"){
        CHECK_THROWS(bt.add_left('M','A')); 
        CHECK_THROWS(bt.add_right('N','B'));
        CHECK_THROWS(bt.add_left('O','C'));
        CHECK_THROWS(bt.add_right('P','D'));
    }

    
}