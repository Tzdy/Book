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
        cout << "请登陆！" << endl;
    else
    {
        cout << "请输入你想充值的金额。" << endl;
        double money;
        cin >> money;
        if(charge(money))
            cout << "充值成功！" << endl;
        else
        {
            cout << "充值失败！" << endl;
        }
        returnPage();
    }
        
}

void mainAccount::returnPage(){
    cout << "是否继续充值？（y/n）" << endl;
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