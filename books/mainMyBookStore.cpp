#include <iostream>
#include <string>
#include "mainMyBookStore.h"
#include "Account.h"
using namespace std;

void mainMyBookStore::showBooklist()
{
        if (mylogin.username == "")
                cout << "���ȵ�½��" << endl;
        else
        {
                Book book;
                for (int i = 0; i < mybookstore.bookNum; i++)
                {
                        mybookstore.bookBox[i] = {book}; //������棡
                }
                mybookstore.bookNum = 0;
                mybookstore.username = self.username;
                mybookstore.readFile();
                if (mybookstore.bookNum != 0)
                {
                        mybookstore.showBooksList();
                }
                else
                {
                        cout << "���ﳵΪ��" << endl;
                        return;
                }
                int operate;
                cout << "1:"
                     << "�Ƴ�" << endl;
                cout << "2:"
                     << "�µ�" << endl;
                cin >> operate;
				system("cls");
                switch (operate)
                {
                case 1:
                        delBook();
                        break;
                case 2:
                        buyBook();
                        break;
                default:
                        break; // ûд��    ��û�ص���ѭ��
                }
                returnPage();
        }
}

void mainMyBookStore::delBook()
{
        cout << "��������Ҫɾ��������" << endl;
        string name;
        cin >> name;
        Book book;
        for (int i = 0; i < mybookstore.bookNum; i++)
        {
                mybookstore.bookBox[i] = {book}; //������棡
        }
        mybookstore.bookNum = 0;
        mybookstore.username = self.username;
        mybookstore.readFile();
        if (mybookstore.delBook(mybookstore.searchBook(name)) && mybookstore.writeFile())
        {
                cout << "ɾ���ɹ�" << endl;
        }
        else
        {
                cout << "������Ĳ�����" << endl;
        }
}

void mainMyBookStore::buyBook()
{
        cout << "��������Ҫ���������" << endl;
        string name;
        cin >> name;
        Book book;
        for (int i = 0; i < mybookstore.bookNum; i++)
        {
                mybookstore.bookBox[i] = {book}; //������棡
        }
        mybookstore.bookNum = 0;
        mybookstore.username = self.username;
        mybookstore.readFile();
        if (self.money > mybookstore.searchBook(name).price)
        {
                Book copy = mybookstore.searchBook(name);
                cout << "copy:" << copy.bookName << endl;
                if (mybookstore.delBook(copy))
                {
                        cout << "my:" << mybookstore.bookBox[0].bookName << mybookstore.bookBox[0].price << endl;
                        cout << mybookstore.username << endl;
                        mybookstore.writeFile();
                        self.pay(mybookstore.searchBook(name).price);
                        self.writeFile();
                        for (int i = 0; i < merchantbookstore.bookNum; i++)
                        {
                                merchantbookstore.bookBox[i] = {book}; //������棡
                        }
                        merchantbookstore.username = copy.username;
                        merchant.username = copy.username;
                        merchantbookstore.readFile();
                        merchant.readFile();
                        merchantbookstore.delBook(copy);
                        merchant.get(copy.price);
                        merchantbookstore.writeFile();
                        merchant.writeFile();
                        merbox.readAll();
                }
                else
                {
                        cout << "������Ĳ�����" << endl;
                }
        }
        else
        {
                cout << "����" << endl;
        }
        
}

void mainMyBookStore::returnPage()
{
        cout << "�Ƿ�����鿴���ﳵ����y/n��" << endl;
        char jude = getchar();
        char judge = getchar();
        if (judge == 'y')
                showBooklist();
        else
                return;
}

//