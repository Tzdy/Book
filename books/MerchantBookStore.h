#ifndef _MERCHANTBOOKSTORE_H_
#define _MERCHANTBOOKSTORE_H_
#include"Book.h"
#include"BookStore.h"
// #include"MerBox.h"
// extern MerBox merbox;

class MerchantBookStore :public BookStore 
{
private:
        /* data */
public:
        // Book bookBox[50];
        // int bookNum = 0;
        bool writeFile();
        bool readFile();
        bool operator==(MerchantBookStore store);
        
};


#endif