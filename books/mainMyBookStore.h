#ifndef _MAINMYBOOKSTORE_H_
#define _MAINMYBOOKSTORE_H_
#include<iostream>
#include<string>
#include"MyBookStore.h"
#include"MerchantBookStore.h"
#include"MerchantAccount.h"
#include"MyAccount.h"
#include"MerBox.h"
extern MyAccount self;
extern MerchantAccount merchant;
extern MyBookStore mybookstore;
extern MerchantBookStore merchantbookstore;
extern MerBox merbox;
class mainMyBookStore
{
public:
        void showBooklist();
        void delBook();
        void buyBook();
        void returnPage();
};










#endif