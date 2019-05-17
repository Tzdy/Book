#ifndef _MYLOGIN_H_
#define _MYLOGIN_H_
#include"Login.h"
#include<fstream>
using namespace std;

class MyLogin : public Login{
    public:
        bool sign();
        bool writeFile();
        bool readFile();
};


#endif