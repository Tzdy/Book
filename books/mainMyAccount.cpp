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
        cout << "���½��" << endl;
    else
    {
        cout << 1 << ":"
             << "��ֵ" << endl;
        cout << 2 << ":"
             << "���" << endl;
        int operate;
        cin >> operate;
        switch (operate)
        {
        case 1:
            cout << "�����������ֵ�Ľ�" << endl;
            double money;
            cin >> money;
            if (charge(money))
                cout << "��ֵ�ɹ���" << endl;
            else
            {
                cout << "��ֵʧ�ܣ�" << endl;
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

void mainMyAccount::test()
{
    self.readFile();
    cout << "����ǰ�����Ϊ��" << self.money << endl;
}