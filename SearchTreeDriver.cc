/*
  Filename   : Hello.cc
  Author     : Gary M. Zoppetti
  Course     : CSCI 362-01
  Assignment : N/A
  Description: Beginning C++ program for Java folks new to 
               the language
*/

/**********************************************************/
// System includes

#include <iostream>
#include <cstdlib>
#include <string>
#include <iterator>


/**********************************************************/
// Local includes
#include "SearchTree.hpp"

/**********************************************************/
// Using declarations

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::iterator;

/**********************************************************/
// Function prototypes/global vars/typedefs

/**********************************************************/

int
main (int argc, char* argv[]) 
{
  SearchTree<int> tree;


  //TEST 1

  cout << "Test 1 testing empty\n";
  
  if (tree.empty() == true)
  {
    cout << "1\n";
  }
   else
    cout << "0\n";

  tree.insert(5);

  TreeIterator<int> ptrTest(tree.begin());





  
  return EXIT_SUCCESS; 
}

/**********************************************************/
// Function implementations

















