#include "mainMerchant.h"

void mainMerchant::run()
{
    cout << 1 << ":"
         << "登陆" << endl;
    cout << 2 << ":"
         << "书库" << endl;
    int operate;
    cin >> operate;
    switch (operate)
    {
    case 1:
        mainlog.sence();
        break;
    case 2:
        if (merchant.username == "")
            cout << "请登陆" << endl;
        else
        {
            Book book;
            for (int i = 0; i < merchantbookstore.bookNum; i++)
            {
                merchantbookstore.bookBox[i] = {book}; //清除缓存！
            }
            merchantbookstore.username = merchant.username;
            merchantbookstore.readFile();
            mainMerbookstore.sence();
        }
        break;
    default:
        break;
    }
}