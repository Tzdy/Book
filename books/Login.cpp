#include"Login.h"

bool Login::login(){
    User user;
    cout << "username:";
    cin >> user.username;
    cout << "password:";
    cin >> user.password;
    for(int i = 0 ; i < userNum ; i ++){
        if(user == this->user[i]){
            this->username = user.username; 
            return true;
        }
    }
    return false;
}

