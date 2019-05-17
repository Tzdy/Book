#include "mainMerchant.h"

void mainMerchant::run()
{
    cout << 1 << ":"
         << "µÇÂ½" << endl;
    cout << 2 << ":"
         << "Êé¿â" << endl;
    cout << 3 << ":"
         << "Óà¶î" << endl;
    int operate;
    cin >> operate;
    switch (operate)
    {
    case 1:
        mainlog.sence();
        break;
    case 2:
        if (merchant.username == "")
            cout << "ÇëµÇÂ½" << endl;
        else
        {
            Book book;
            for (int i = 0; i < merchantbookstore.bookNum; i++)
            {
                merchantbookstore.bookBox[i] = {book}; //Çå³ý»º´æ£¡
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