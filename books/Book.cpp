#include<iostream>
#include<string>
#include"Book.h"
using namespace std;

bool Book::operator==(Book book){
        if(this->bookName == book.bookName)
                return true;
        else
                return false;
}