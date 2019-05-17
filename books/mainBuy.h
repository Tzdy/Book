#ifndef _MAINBUY_H_
#define _MAINBUY_H_
#include <iostream>
#include <stdlib.h>
#include "MerchantBookStore.h"
#include "MyBookStore.h"
#include "MerchantAccount.h"
#include "MyAccount.h"
#include"MerBox.h"
extern MerchantBookStore merchantbookstore;
extern MyBookStore mybookstore;
extern MyAccount self;
extern MerchantAccount merchant;
extern MerBox merbox;
class mainBuy
{
public:
    void Sence();
    bool displayList();
    bool displayDetails();
    bool addMystore();
    bool buyBook();
    void returnPage();
};

#endif