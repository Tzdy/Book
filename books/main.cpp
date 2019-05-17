#include<iostream>
#include<string>
//购物车：
#include"MyBookStore.h"
#include"mainMyBookStore.h"
//卖家买家账户：
#include"MerchantAccount.h"
#include"MyAccount.h"
//书：
#include "Book.h"
//卖家书库
#include"MerchantBookStore.h"
//购买界面
#include"mainBuy.h" 
//登陆界面
#include"mainLogin.h"
#include"MyLogin.h"
//主界面
#include "mainSence.h"
//后台界面
#include"mainMerchant.h"
//卖家账号
#include"MerchantLogin.h"
//仓库集合
#include"MerBox.h"
//卖家账户界面
#include"mainMerchantAccount.h"
MyBookStore mybookstore;
MerchantBookStore merchantbookstore;
MyAccount self;
MerchantAccount merchant;
MyLogin mylogin;
mainBuy mainbuy;
mainLogin mainlogin;
mainMyBookStore mainmybookstore;
mainMerchant mainmerchant;
MerchantLogin Merlogin;
mainMerchantLogin mainlog;
mainMerchantBookStore mainMerbookstore;
mainMyAccount mainmyaccount;
MerBox merbox;
mainMerchantAccount mainmerchantaccount;
int main(){
        mainSence main;
        main.run();
}
//g++ mainMerchantAccount.cpp MerBox.cpp MerchantLogin.cpp mainMyAccount.cpp mainMerchantLogin.cpp  mainMerchant.cpp mainMerchantBookStore.cpp mainSence.cpp MyAccount.cpp MerchantAccount.cpp Login.cpp mainLogin.cpp MyLogin.cpp User.cpp  Account.cpp Book.cpp BookStore.cpp main.cpp mainMyBookStore.cpp MerchantBookStore.cpp MyBookStore.cpp mainBuy.cpp -o main -std=c++11
