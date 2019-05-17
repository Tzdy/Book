#include"MerchantAccount.h"

bool MerchantAccount::writeFile(){
        fstream file;
        file.open(username + "Mer.txt",ios::out);
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

bool MerchantAccount::readFile(){
        fstream file;
        file.open(username + "Mer.txt",ios::in);
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