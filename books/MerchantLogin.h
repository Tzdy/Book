#ifndef _MERCHANTLOGIN_H_
#define _MERCHANTLOGIN_H_

#include"Login.h"
#include<fstream>
using namespace std;

class MerchantLogin : public Login{
    public:
        bool sign();
        bool writeFile();
        bool readFile();
};



#endif


