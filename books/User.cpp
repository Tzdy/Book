#include"User.h"

bool User::operator==(User user){
    if(username == user.username){
        if(password == user.password){
            return true;
        }
    }
    return false;
}