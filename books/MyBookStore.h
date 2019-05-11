#ifndef _MYBOOKSTORE_H
#define _MYBOOKSTORE_H
#include<string>
#include<iostream>
#include"Book.h"
#include "BookStore.h"
using namespace std;
class  MyBookStore : public BookStore
{
public:
  int bookNum = 0;
  Book bookBox[50];
  bool pushBook(Book book);
};
#endif
