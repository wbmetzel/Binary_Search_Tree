
#include "Menu.h"


/*******************************
*
* f(x): Menu
* Created: 07 Dec 2016
* Purpose: Constructor
*
********************************/
Menu::Menu()
{
  this->items = 0;
  this->title = "Title";
}


/*******************************
*
* f(x): Menu
* Created: 07 Dec 2016
* Purpose: Copy Constructor
*
********************************/
Menu::Menu(const string &title)
{
  this->items = 0;
  this->title = title;
}


/*******************************
*
* f(x): ~Menu
* Created: 07 Dec 2016
* Purpose: Destructor
*
********************************/
Menu::~Menu()
{}


/*******************************
*
* f(x): clear
* Created: 07 Dec 2016
* Purpose: Make some space on cmd, not system specific
*
********************************/
void Menu::clear()
{
  int b = 50;
  for(; b >= 0; b--)
  {
    std::cout << std::endl;
  }
}


/*******************************
*
* f(x): print
* Created: 07 Dec 2016
* Purpose: print menu
*
********************************/
void Menu::print()
{
  this->clear();
  
  std::cout << "\t\t" << this->title << "\n" << std::endl;
}