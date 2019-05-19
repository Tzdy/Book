#include <iostream>
#include "mainSence.h"
void mainSence::init()
{
    mylogin.readFile();
    Merlogin.readFile();
    
    merbox.readAll();
    // merchantbookstore.username = Merlogin.user[0].username;
    // merchantbookstore.readFile();  //需要修，改；
}

void mainSence::run()
{
    init();
    while (1)
    {
        int operate;
        cout << "1:商品列表" << endl;
        cout << "2:购物车" << endl;
        cout << "3:登陆" << endl;
        cout << "4:充值" << endl;
        cout << "5:商家管理" << endl;
        cin >> operate;
		system("cls");
        switch (operate)
        {
        case 1:
            mainbuy.Sence();
            break;
        case 2:
            mainmybookstore.showBooklist();
            break;
        case 3:
            mainlogin.sence();
            break; 
        case 4:
            mainmyaccount.sence();  
            break;     
        case 5:
            mainmerchant.run();
            break;    
        default:
            break;
        }
    }
}