#ifndef _MAINSENCE_H_
#define _MAINSENCE_H_

#include<iostream>
#include"MerBox.h"
#include"MyBookStore.h"
#include"MerchantBookStore.h"
#include"MyAccount.h"
#include"MerchantAccount.h"
#include"mainBuy.h"
#include"mainLogin.h"
#include"mainMyBookStore.h"
#include"mainAccount.h"
#include"mainMerchant.h"
#include"MerchantLogin.h"
using namespace std;
extern MerBox merbox;
extern mainBuy mainbuy;
extern mainLogin mainlogin;
extern mainMyBookStore mainmybookstore;
extern MyBookStore mybookstore;  
extern MerchantBookStore merchantbookstore;
extern MyAccount self;
extern MerchantAccount merchant;
extern mainMerchant mainmerchant;
extern MerchantLogin Merlogin;
extern mainAccount mainaccount;
class mainSence{
    public:
        void init();
        void run();
};



#endif