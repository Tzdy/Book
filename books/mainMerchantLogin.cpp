#include"mainMerchantLogin.h"
bool mainMerchantLogin::login(){
    Merlogin.readFile();
    if(Merlogin.login()){
        merchantbookstore.username = Merlogin.username; //仓库名
        merchant.username = Merlogin.username; //账户




        Book book;
        for(int i = 0 ; i < merchantbookstore.bookNum ; i ++){
            merchantbookstore.bookBox[i] = {book};  //清除缓存！
        }
        merchantbookstore.bookNum = 0;
        merchantbookstore.readFile();
        merchant.readFile();
        return true;
    }
    else
    {
        return false;
    }
    
}

bool mainMerchantLogin::sign(){
    if(Merlogin.sign()){
        Merlogin.writeFile();
        return true;
    }
    else
    {
        return false;
    }
    
}

void mainMerchantLogin::sence(){
    cout << 1 << ":" << "登陆" << endl;
    cout << 2 << ":" << "注册" << endl;
    cout << 3 << ":" << "返回上一页" << endl;
    int operate;
    cin >> operate;
    switch (operate)
    {
    case 1:
        if(login())
            cout << "登陆成功" << endl;
        else 
            cout << "登陆失败" << endl;   
        break;
    case 2:
        if(sign())
            cout << "注册成功" << endl;
        else
            cout << "注册失败" << endl;  
        break;          
    default:
        break;
    }
}

void mainMerchantLogin::returnPage(){
    cout << "是否继续留在概界面？（y/n）" << endl;
        fflush(stdin);
        char judge = getchar();
        if (judge == 'y')
                sence();
        else
                return;
}