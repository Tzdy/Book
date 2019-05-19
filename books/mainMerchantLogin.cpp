#include"mainMerchantLogin.h"
bool mainMerchantLogin::login(){
    Merlogin.readFile();
    if(Merlogin.login()){
        merchantbookstore.username = Merlogin.username; //≤÷ø‚√˚
        merchant.username = Merlogin.username; //’Àªß




        Book book;
        for(int i = 0 ; i < merchantbookstore.bookNum ; i ++){
            merchantbookstore.bookBox[i] = {book};  //«Â≥˝ª∫¥Ê£°
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
    cout << 1 << ":" << "µ«¬Ω" << endl;
    cout << 2 << ":" << "◊¢≤·" << endl;
    cout << 3 << ":" << "∑µªÿ…œ“ª“≥" << endl;
    int operate;
    cin >> operate;
	system("cls");
    switch (operate)
    {
    case 1:
        if(login())
            cout << "µ«¬Ω≥…π¶" << endl;
        else 
            cout << "µ«¬Ω ß∞‹" << endl;   
        break;
    case 2:
        if(sign())
            cout << "◊¢≤·≥…π¶" << endl;
        else
            cout << "◊¢≤· ß∞‹" << endl;  
        break;          
    default:
        break;
    }
}

void mainMerchantLogin::returnPage(){
    cout << " «∑ÒºÃ–¯¡Ù‘⁄∏≈ΩÁ√Ê£ø£®y/n£©" << endl;
        fflush(stdin);
		getchar();
        char judge = getchar();
        if (judge == 'y')
                sence();
        else
                return;
}