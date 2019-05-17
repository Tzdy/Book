#include<iostream>
#include<string>
#include"Book.h"

bool Book::operator==(Book book){
        if(bookName == book.bookName )
                return true;
        else
                return false;
}