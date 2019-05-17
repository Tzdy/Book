#include"mainLogin.h"


bool mainLogin::login(){
    mylogin.readFile();
    if(mylogin.login()){
        mybookstore.username = mylogin.username;
        self.username = mylogin.username;
        mybookstore.readFile();
        self.readFile();
        return true;
    }
    else
    {
        return false;
    }
    
}

bool mainLogin::sign(){
    if(mylogin.sign()){
        mylogin.writeFile();
        return true;
    }
    else
    {
        return false;
    }
    
}

void mainLogin::sence(){
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

void mainLogin::returnPage(){
    cout << "是否继续留在概界面？（y/n）" << endl;
        fflush(stdin);
        char judge = getchar();
        if (judge == 'y')
                sence();
        else
                return;
}