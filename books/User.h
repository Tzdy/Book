#ifndef _USER_H_
#define _USER_H_
#include<iostream>
#include<string>
using namespace std;

class User{
    public:
        string username;
        string password;
        bool operator==(User user);
};

#endif