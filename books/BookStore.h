#ifndef _BOOKSTORE_H
#define _BOOKSTORE_H
#include<string>
#include<iostream>
#include"Book.h"
using namespace std;
class  BookStore
{
public:
  Book bookBox[50];
  int bookNum = 0;
  bool delBook(Book book);
  bool showBooksList();
  Book searchBook(string name);
};
#endif
