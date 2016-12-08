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
#include <iomanip>

using std::string;

const short int ITEMS_MAX = 10;

class Menu
{
private:
  string options[ITEMS_MAX];
  string title;
  unsigned short int width;
  
  int setWidth();
  void indent(const int &indentSize);
  void clear();
public:
  Menu();
  Menu(const string &title);
  virtual ~Menu();
  void insert(const string &item);
  void print();
  // Select returns item
  
};

#endif