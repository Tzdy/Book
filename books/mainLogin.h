#ifndef _MAINLOGIN_H_
#define _MAINLOGIN_H_
#include<iostream>
#include"MyLogin.h"
#include"MyBookStore.h"
#include"MyAccount.h"
extern MyBookStore mybookstore;
extern MyLogin mylogin;
extern MyAccount self;
using namespace std;
class mainLogin{
    public:
        void sence();
        bool login();
        bool sign();
        void returnPage();
};

#endif