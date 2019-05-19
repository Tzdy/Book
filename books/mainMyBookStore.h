#ifndef _MAINMYBOOKSTORE_H_
#define _MAINMYBOOKSTORE_H_
#include<iostream>
#include<string>
#include"MyBookStore.h"
#include"MerchantBookStore.h"
#include"MerchantAccount.h"
#include"MyAccount.h"
#include"MerBox.h"
#include"MyLogin.h"
extern MyAccount self;
extern MerchantAccount merchant;
extern MyBookStore mybookstore;
extern MerchantBookStore merchantbookstore;
extern MerBox merbox;
extern MyLogin mylogin;
class mainMyBookStore
{
public:
        void showBooklist();
        void delBook();
        void buyBook();
        void returnPage();
};










#endif