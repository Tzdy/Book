#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Account
{
private:
                        //д100����
public:
        string username;
        double money;
        bool pay(double x);
        bool get(double x);
        bool charge(double x);
};

#endif