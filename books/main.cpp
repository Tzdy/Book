#include<iostream>
#include<string>
//���ﳵ��
#include"MyBookStore.h"
#include"mainMyBookStore.h"
//��������˻���
#include"MerchantAccount.h"
#include"MyAccount.h"
//�飺
#include "Book.h"
//�������
#include"MerchantBookStore.h"
//�������
#include"mainBuy.h" 
//��½����
#include"mainLogin.h"
#include"MyLogin.h"
//������
#include "mainSence.h"
//��̨����
#include"mainMerchant.h"
//�����˺�
#include"MerchantLogin.h"
//�ֿ⼯��
#include"MerBox.h"
//�����˻�����
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
