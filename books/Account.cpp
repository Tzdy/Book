#include"Account.h"
using namespace std;

bool Account::pay(double x){
        if(money - x < 0)
                return false;
        else
        {
                money -= x;
                return true;
        }
}

bool Account::get(double x){
        money += x;
        return true;
}

bool Account::charge(double x){
        money += x;
        return true;
}