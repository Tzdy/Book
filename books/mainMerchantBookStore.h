#ifndef _MAINMERCHANTBOOKSTORE_H_
#define _MAINMERCHANTBOOKSTORE_H_
#include"MerchantLogin.h"
#include"MerchantBookStore.h"
#include"MerchantAccount.h"
#include"MerBox.h"
extern MerBox merbox;
extern MerchantBookStore merchantbookstore;
extern MerchantLogin Merlogin;
extern MerchantAccount merchant;
class mainMerchantBookStore{
    public:
        void showBooklist();
        void addBook();
        void delBook();
        void sence();
        void returnPage();
};

#endif