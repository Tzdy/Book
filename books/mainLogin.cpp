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
    cout << 1 << ":" << "��½" << endl;
    cout << 2 << ":" << "ע��" << endl;
    cout << 3 << ":" << "������һҳ" << endl;
    int operate;
    cin >> operate;
	system("cls");
    switch (operate)
    {
    case 1:
        if(login())
            cout << "��½�ɹ�" << endl;
        else 
            cout << "��½ʧ��" << endl;   
        break;
    case 2:
        if(sign())
            cout << "ע��ɹ�" << endl;
        else
            cout << "ע��ʧ��" << endl;  
        break;          
    default:
        break;
    }
}

void mainLogin::returnPage(){
    cout << "�Ƿ�������ڸý��棿��y/n��" << endl;
        fflush(stdin);
		char jude = getchar();
        char judge = getchar();
        if (judge == 'y')
                sence();
        else
                return;
}