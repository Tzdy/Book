#ifndef _BOOK_H_
#define _BOOK_H_
#include<iostream>
#include<string>
using namespace std;
class Book
{
public:
        Book(){}
        Book(string name, double price){
                bookName = name;
                this->price = price;
        }
        string bookName;    //书名
        double price;    //价格
        Book getBook(){
                return *this;
        }
        bool operator==(Book book);
};

#endif
