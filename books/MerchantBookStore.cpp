#include<iostream>
#include<fstream>
#include<string>
#include"MerchantBookStore.h"
#include "BookStore.h"
using namespace std;

bool MerchantBookStore::writeFile(){
        fstream file;
        file.open(username + "merchant.txt",ios::out);
        if(file.write((char*) &bookBox,sizeof(bookBox))){
                file.close();
                return true;
        }
        else
        {
                file.close();
                return false;
        }
        
        
}

bool MerchantBookStore::readFile(){
        fstream file;
        file.open(username + "merchant.txt",ios::in);
        if(file.read((char*) &bookBox,sizeof(bookBox))){
                int time = 0;
                while (1)
                {
                        if (bookBox[time].bookName == "")
                        {
                                break;
                        }

                        time++;
                }
                bookNum = time;
                file.close();
                return true;
        }
        else
        {
                file.close();
                return false;
        }
        
        
}

bool MerchantBookStore::operator==(MerchantBookStore store){
        if(username == store.username)
                return true;
        else 
                return false;        
}