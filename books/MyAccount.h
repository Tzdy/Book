#ifndef _MYACCOUNT_H_
#define _MYACCOUNT_H_
#include"Account.h"
using namespace std;

class MyAccount : public Account{
    public:
        bool writeFile();
        bool readFile();
};



#endif