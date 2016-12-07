/*********************************************
*
* Author: W. B. Metzel
* Last_Revised: 07 Dec 2016
* Description: Client driver to demo Binary Search Tree 
*
*********************************************/

#include <iostream>
#include "Menu.h"
#include "BSTree.h"

void menu();

int main()
{
  Menu *menu = new Menu("Binary Search Tree");
  menu->print();
	try {

		//BSTree<int> *T1 = new BSTree<int>();
    //T1->add(25);
    //T1->print("dog");

	}
	catch (exception const &ex)
	{
		std::cerr << "Exception: " << ex.what() << std::endl;
	}

	std::cout << endl;

	return 0;
}

void menu()
{

  std::cout << "\n\nTitle\n\n" << std::endl;

}