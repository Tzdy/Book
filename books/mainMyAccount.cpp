#include "mainMyAccount.h"

bool mainMyAccount::charge(double x)
{
    self.readFile();
    if (self.charge(x))
    {
        self.writeFile();
        return true;
    }

    else
    {
        return false;
    }
}

void mainMyAccount::sence()
{
    if (self.username == "")
        cout << "请登陆！" << endl;
    else
    {
        cout << 1 << ":"
             << "充值" << endl;
        cout << 2 << ":"
             << "余额" << endl;
        int operate;
        cin >> operate;
        switch (operate)
        {
        case 1:
            cout << "请输入你想充值的金额。" << endl;
            double money;
            cin >> money;
            if (charge(money))
                cout << "充值成功！" << endl;
            else
            {
                cout << "充值失败！" << endl;
            }
            returnPage();
            break;
        case 2:
            test();
            break;
        default:
            break;
        }
    }
}

void mainMyAccount::returnPage()
{
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

void mainMyAccount::test()
{
    self.readFile();
    cout << "您当前的余额为：" << self.money << endl;
}