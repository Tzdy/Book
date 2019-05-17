#include"MyAccount.h"

bool MyAccount::writeFile(){
        fstream file;
        file.open(username + "myAccount.txt",ios::out);
        if(file.write((char*) &money,sizeof(money))){
                file.close();
                return true;
        }
        else
        {
                file.close();
                return false;
        }
        
        
}

bool MyAccount::readFile(){
        fstream file;
        file.open(username + "myAccount.txt",ios::in);
        if(file.read((char*) &money,sizeof(money))){
                file.close();
                return true;
        }
        else
        {
                file.close();
                return false;
        }
        
        
}