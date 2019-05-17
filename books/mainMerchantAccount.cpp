#include"mainMerchantAccount.h"

void mainMerchantAccount::test(){
    merchant.readFile();
    cout << "您当前的余额为：" << merchant.money << endl; 
}

void mainMerchantAccount::sence(){
    if(merchant.username == "")
        cout << "请登陆！" << endl;
    else
    {
        test();
    }
}