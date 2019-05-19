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
    cout << 1 << ":" << "µÇÂ½" << endl;
    cout << 2 << ":" << "×¢²á" << endl;
    cout << 3 << ":" << "·µ»ØÉÏÒ»Ò³" << endl;
    int operate;
    cin >> operate;
	system("cls");
    switch (operate)
    {
    case 1:
        if(login())
            cout << "µÇÂ½³É¹¦" << endl;
        else 
            cout << "µÇÂ½Ê§°Ü" << endl;   
        break;
    case 2:
        if(sign())
            cout << "×¢²á³É¹¦" << endl;
        else
            cout << "×¢²áÊ§°Ü" << endl;  
        break;          
    default:
        break;
    }
}

void mainLogin::returnPage(){
    cout << "ÊÇ·ñ¼ÌÐøÁôÔÚ¸Ã½çÃæ£¿£¨y/n£©" << endl;
        fflush(stdin);
		char jude = getchar();
        char judge = getchar();
        if (judge == 'y')
                sence();
        else
                return;
}