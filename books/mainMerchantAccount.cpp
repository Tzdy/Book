#include"mainMerchantAccount.h"

void mainMerchantAccount::test(){
    merchant.readFile();
    cout << "����ǰ�����Ϊ��" << merchant.money << endl; 
}

void mainMerchantAccount::sence(){
    if(merchant.username == "")
        cout << "���½��" << endl;
    else
    {
        test();
    }
}