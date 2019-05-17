#ifndef _MERBOX_H_
#define _MERBOX_H_
#include"MerchantBookStore.h"
#include"MerchantLogin.h"
using namespace std;
extern MerchantBookStore merchantbookstore;
extern MerchantLogin Merlogin;

class MerBox{
    public:
        MerchantBookStore box[50];
        int boxNum = 0;
        void pushMer(MerchantBookStore store);
        void readAll();
        void display();
        MerchantBookStore searchBox(string name);
};  


#endif