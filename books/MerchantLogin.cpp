#include "MerchantLogin.h"

bool MerchantLogin::sign()
{
        string repassword;
        User user;
        cout << "username:";
        cin >> user.username;
        cout << "password:";
        cin >> user.password;
        cout << "again password!";
        cin >> repassword;
        if (user.password != repassword)
        {
                cout << "前后输入不符" << endl;
                cout << "是否继续注册？（y/n）";
                char judg = getchar();
                char judge = getchar();
                if (judge == 'y')
                        sign();
                else
                        return false;
        }
        for (int i = 0; i < userNum; i++)
        {
                if (user == this->user[i])
                        return false;
        }
        this->user[userNum] = user;
        userNum++;
        return true;
}

bool MerchantLogin::writeFile()
{
        fstream file;
        file.open("merchant.txt", ios::out);
        if (file.write((char *)&user, sizeof(user)))
        {
                file.close();
                return true;
        }
        else
        {
                file.close();
                return false;
        }
}

bool MerchantLogin::readFile()
{
        fstream file;
        file.open("merchant.txt", ios::in);
        if (file.read((char *)&user, sizeof(user)))
        {
                int time = 0;
                while (1)
                {
                        if (user[time].username == "")
                        {
                                break;
                        }

                        time++;
                }
                userNum = time;
                file.close();
                return true;
        }
        else
        {
                file.close();
                return false;
        }
}