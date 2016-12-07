/*********************************************
*
* Author: W. B. Metzel
* Created: 07 Dec 2016
* Description: Display menu for demos
*
*********************************************/

#ifndef __MENU_H__
#define __MENU_H__

#include <string>
#include <iostream>

using std::string;

class Menu
{
private:
  int items;
  string title;
  
  void clear();
public:
  Menu();
  Menu(const string &title);
  virtual ~Menu();
  void print();
  
};

#endif