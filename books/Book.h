#ifndef _BOOK_H_
#define _BOOK_H_
#include<iostream>
#include<string>
using namespace std;
class Book
{
public:
        Book(){}
        Book(string name, double price,string details){
                bookName = name;
                this->price = price;
                this->details = details;
        }
        string bookName;    //书名
        double price;    //价格
        string details;
        string username; // 属于那个卖家书库。
        Book getBook(){
                return *this;
        }
        bool operator==(Book book);
};

#endif
