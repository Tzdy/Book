#ifndef _MERCHANTACCOUNT_H_
#define _MERCHANTACCOUNT_H_

#include"Account.h"
using namespace std;

class MerchantAccount : public Account{
    public:
        bool writeFile();
        bool readFile();
};

#endif 