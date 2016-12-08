/*********************************************
*
* Author: W. B. Metzel
* Created: 07 Dec 2016
* Description: Display menu for demos
*
*********************************************/

#ifndef __MENU_H__
#define __MENU_H__

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using std::string;

struct Option
{
  unsigned short int id;
  string item;
  Option *next;
  
  Option(const string &item) 
  {      
    this->id = 0;
    this->next = NULL;
    if(item.size() < 38)
    {
      this->item = item;
    }
    else
    {
      this->item = item.substr(0,38) + "...";
    }
  }
};

class Menu
{
private:
  /* Private member variables */
  Option *root;
  string title;
  unsigned short int width;

  /* Private member functions */
  int setWidth();
  string createStr(const int &id, const string &item);
  void indent(const int &indentSize);
  void clear();
  void printMenu();
public:
  /* Public member functions */
  Menu();
  Menu(const string &title);
  virtual ~Menu();
  void insert(const string &item);
  int print();
  // Select returns item
  
};

#endif