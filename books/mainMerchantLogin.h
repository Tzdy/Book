#ifndef _MAINMERCHANTLOGIN_H_
#define _MAINMERCHANTLOGIN_H_
#include"MerchantLogin.h"
#include"MerchantBookStore.h"
#include"MerchantAccount.h"
extern MerchantBookStore merchantbookstore;
extern MerchantLogin Merlogin;
extern MerchantAccount merchant;
class mainMerchantLogin{
    public:
        void sence();
        bool login();
        bool sign();
        void returnPage();
};

#endif