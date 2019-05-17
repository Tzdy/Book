#ifndef _MAINMERCHANT_H_
#define _MAINMERCHANT_H_
#include"MerchantLogin.h"
#include"MerchantBookStore.h"
#include"Book.h"
#include"MerchantAccount.h"
#include"mainMerchantLogin.h"
#include"mainMerchantBookStore.h"
extern MerchantLogin Merlogin;
extern MerchantBookStore merchantbookstore; //
extern MerchantAccount merchant;
extern mainMerchantLogin mainlog;
extern mainMerchantBookStore mainMerbookstore;
class mainMerchant{
    public:
        void run();
};


#endif