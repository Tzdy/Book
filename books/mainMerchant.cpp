#include "mainMerchant.h"

void mainMerchant::run()
{
    cout << 1 << ":"
         << "��½" << endl;
    cout << 2 << ":"
         << "���" << endl;
    cout << 3 << ":"
         << "���" << endl;
    int operate;
    cin >> operate;
    switch (operate)
    {
    case 1:
        mainlog.sence();
        break;
    case 2:
        if (merchant.username == "")
            cout << "���½" << endl;
        else
        {
            Book book;
            for (int i = 0; i < merchantbookstore.bookNum; i++)
            {
                merchantbookstore.bookBox[i] = {book}; //������棡
            }
            merchantbookstore.username = merchant.username;
            merchantbookstore.readFile();
            mainMerbookstore.sence();
        }
        break;
    case 3:
        mainmerchantaccount.sence();
        break;
    default:
        break;
    }
}