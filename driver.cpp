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
  menu->insert("Add node to tree");
  menu->insert("Delete node from tree");
  menu->insert("Print: In order");
  menu->insert("Print: Pre order");
  menu->insert("Print: Post order");
  
  while(int temp = menu->print() > 0)
  {
    std::cout << temp;
    break;
  }
  
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

  delete menu;
	return 0;
}

void menu()
{

  std::cout << "\n\nTitle\n\n" << std::endl;

}