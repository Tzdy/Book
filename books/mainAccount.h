#ifndef _MAINACCOUNT_H_
#define _MAINACCOUNT_H_
#include "MyAccount.h"
extern MyAccount self;
class mainAccount
{
public:
    void sence();
    bool charge(double x);
    void returnPage();
};

#endif