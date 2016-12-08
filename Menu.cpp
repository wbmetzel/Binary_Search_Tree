
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
  //this->options;
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
  //this->options;
  this->title = title;
  this->width = this->setWidth();
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
* f(x): setWidth
* Created: 07 Dec 2016
* Purpose: Set width of menu
*    If length of title is less than 48, width minimum is 50
*    No max is set, since I only intend to name titles and use this class
********************************/
int Menu::setWidth()
{
  if( (this->title).size() <= 46 )
  {
    return 50;
  }
  else
  {
    return (this->title).size() + 4;
  }

}


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
* f(x): insert
* Created: 08 Dec 2016
* Purpose: Add item to options
*
********************************/
void Menu::insert()
{
}


/*******************************
*
* f(x): indent
* Created: 08 Dec 2016
* Purpose: print 5 blank spaces
*
********************************/
void Menu::indent(const int &indentSize)
{
  std::cout.fill(' ') << std::cout.width(indentSize);  // Indent 
}


/*******************************
*
* f(x): print
* Created: 08 Dec 2016
* Purpose: print menu
*
********************************/
void Menu::print()
{
    // where to start printing title to center, NOT center of menu width
  unsigned short int centerFill = (this->width/2) - ((this->title).size() / 2);
  unsigned short int indentSize = 10;

  this->clear();  // Clear screen
  
    // Print top border
  this->indent(indentSize);
  std::cout << char(201);
  std::cout.fill(205) << std::cout.width(width-2);
  std::cout << char(187) << std::endl;
  
    // Blank fill line
  this->indent(indentSize);
  std::cout << char(186);
  std::cout.fill(32) << std::cout.width(width-2);
  std::cout << char(186) << std::endl;
  
    // Print title, centered horizontally
  this->indent(indentSize);
  std::cout << char(186); // We are now indentSize + 1 chars into line.
  std::cout.fill(32) << std::cout.width(width - centerFill - 1);
  std::cout << this->title;
  std::cout.fill(32) << std::cout.width(centerFill - 1);
  std::cout << char(186) << std::endl;
  
    // Blank fill line
  this->indent(indentSize);
  std::cout << char(186);
  std::cout.fill(32) << std::cout.width(width-2);
  std::cout << char(186) << std::endl;
  
      // Print middle border
  this->indent(indentSize);
  std::cout << char(204);
  std::cout.fill(205) << std::cout.width(width-2);
  std::cout << char(185) << std::endl;
  
    // Blank fill line
  this->indent(indentSize);
  std::cout << char(186);
  std::cout.fill(32) << std::cout.width(width-2);
  std::cout << char(186) << std::endl;
  
  // Loop through list items
  
      // Print menu options, options descriptions must be shorter than 46 chars!!
    this->indent(indentSize);
    std::cout << char(186);
    std::cout.fill(32) << std::cout.width(width - centerFill - 1);
    std::cout << this->title;
    std::cout.fill(32) << std::cout.width(centerFill - 1);
    std::cout << char(186) << std::endl;
  
    // Blank fill line
  this->indent(indentSize);
  std::cout << char(186);
  std::cout.fill(32) << std::cout.width(width-2);
  std::cout << char(186) << std::endl;
  
    // Print bottom border
  this->indent(indentSize);
  std::cout << char(200);
  std::cout.fill(205) << std::cout.width(width-2);
  std::cout << char(188) << std::endl;
  
}