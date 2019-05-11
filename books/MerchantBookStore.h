#include"Book.h"
#include"MyBookStore.h"
#ifndef _MERCHANTBOOKSTORE_H_
#define _MERCHANTBOOKSTORE_H_
class MerchantBookStore :public MyBookStore 
{
private:
        /* data */
public:
        Book bookBox[50];
        int bookNum = 0;
        bool delBook(Book book);
        bool showBooksList();
        Book searchBook(string name);
};


#endif