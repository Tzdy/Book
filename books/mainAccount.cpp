#include"mainAccount.h"

bool mainAccount::charge(double x){
    if(self.charge(x)){
        self.writeFile();
        return true;
    }
        
    else
    {
        return false;
    }
        
}

void mainAccount::sence(){
    if(self.username == "")
        cout << "���½��" << endl;
    else
    {
        cout << "�����������ֵ�Ľ�" << endl;
        double money;
        cin >> money;
        if(charge(money))
            cout << "��ֵ�ɹ���" << endl;
        else
        {
            cout << "��ֵʧ�ܣ�" << endl;
        }
        returnPage();
    }
        
}

void mainAccount::returnPage(){
    cout << "�Ƿ������ֵ����y/n��" << endl;
    fflush(stdin);
    char jude = getchar();
    char judge = getchar();
    if (judge == 'y')
    {
        sence();
    }
    else
    {
        return;
    }
}