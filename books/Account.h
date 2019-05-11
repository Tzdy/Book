#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

class Account
{
private:
        double money = 100;                //写100测试
public:
        bool pay(double x);
        bool get(double x);
};

#endif