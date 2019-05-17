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
        cout << "1:main" << endl;
        cout << "2:store" << endl;
        cout << "3:login" << endl;
        cout << "4:charge" << endl;
        cout << "5:后台" << endl;
        cin >> operate;
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