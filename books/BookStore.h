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
  string username;  //signal
  bool delBook(Book book);
  bool showBooksList();
  Book searchBook(string name); //注意！！！！返回具体对象，没有就返回空对象
  bool showBookListDetails(Book book); //书
  bool pushBook(Book book);
};
#endif
