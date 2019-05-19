#ifndef _MAINACCOUNT_H_
#define _MAINACCOUNT_H_
#include "MyAccount.h"
#include"MyLogin.h"
extern MyAccount self;
extern MyLogin mylogin;
class mainMyAccount
{
public:
    void sence();
    bool charge(double x);
    void test();
    void returnPage();
};

#endif