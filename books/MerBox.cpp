#include"MerBox.h"
void MerBox::pushMer(MerchantBookStore store){
    box[boxNum] = store;
    boxNum += 1;
}

void MerBox::readAll(){  
    boxNum = 0;
    MerchantBookStore copy;
    for(int i = 0 ; i < Merlogin.userNum ; i++){ //清除缓存！！！
        box[i] =copy;
    }   

    for(int i = 0 ; i < Merlogin.userNum ; i++){ //读入缓存！！！
        merchantbookstore.username = Merlogin.user[i].username;
        merchantbookstore.readFile();
        pushMer(merchantbookstore);
    }   
    MerchantBookStore del;
    merchantbookstore = del;   //清除缓存！！！！！！
}

void MerBox::display(){
    for(int i = 0 ; i < boxNum ; i ++){
        cout << box[i].username << endl;
    }
}

MerchantBookStore MerBox::searchBox(string name){
    for(int i = 0; i < boxNum ; i ++){
        if(name == box[i].username){
            return box[i];
            break;
        }
    }
    MerchantBookStore null;   //没找到
    return null;
}