#include"mainMerchantLogin.h"
bool mainMerchantLogin::login(){
    Merlogin.readFile();
    if(Merlogin.login()){
        merchantbookstore.username = Merlogin.username; //�ֿ���
        merchant.username = Merlogin.username; //�˻�




        Book book;
        for(int i = 0 ; i < merchantbookstore.bookNum ; i ++){
            merchantbookstore.bookBox[i] = {book};  //������棡
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

void mainMerchantLogin::returnPage(){
    cout << "�Ƿ�������ڸŽ��棿��y/n��" << endl;
        fflush(stdin);
		getchar();
        char judge = getchar();
        if (judge == 'y')
                sence();
        else
                return;
}