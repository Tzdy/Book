#ifndef _LOGIN_H_
#define _LOGIN_H_

#include"User.h"

class Login{
    public:
        User user[50];
        string username;
        int userNum = 0;
        bool login();
};

#endif