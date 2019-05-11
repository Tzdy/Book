#ifndef _MAINMYBOOKSTORE_H_
#define _MAINMYBOOKSTORE_H_
#include<iostream>
#include<string>
#include"MyBookStore.h"
#include"Account.h"
extern Account self,merchant;
extern MyBookStore mybookstore;

class mainMyBookStore
{
public:
        void showBooklist();
        void delBook();
        void buyBook();
};










#endif