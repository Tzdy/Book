#include <iostream>
#include "mainBuy.h"
using namespace std;

bool mainBuy::displayList()
{
    int judge = 0;
    for (int i = 0; i < merbox.boxNum; i++)
    {
        if (merbox.box[i].showBooksList())
            judge++;
    }
    if (judge == 0)
        return false;
    else
        return true;
}

bool mainBuy::displayDetails()
{
    cout << "����������" << endl;
    string name;
    cin >> name;
    int sit;
    Book book;
    for (int i = 0; i < merchantbookstore.bookNum; i++)
    {
        merchantbookstore.bookBox[i] = {book}; //������棡
    }
    merchantbookstore.bookNum = 0;
    for (int i = 0; i < merbox.boxNum; i++)
    {
        if (merbox.box[i].searchBook(name).bookName == name)
        {
            merchantbookstore.pushBook(merbox.box[i].searchBook(name));
        }
    }
    if (merchantbookstore.showBooksList())
    {
        int operate;
        cout << "���������" << endl;
        cin >> operate;
        if (merchantbookstore.bookBox[operate - 1].bookName != "")
        {
            merchantbookstore.showBookListDetails(merchantbookstore.bookBox[operate - 1]);
            return true;
        }
        else
        {
            cout << "��������" << endl;
            return false;
        }
    }
    else
    {
        cout << "sorry������Ĳ����ڣ�" << endl;
        return false;
    }
}

bool mainBuy::addMystore()
{
    Book book;
    for (int i = 0; i < merchantbookstore.bookNum; i++)
    {
        merchantbookstore.bookBox[i] = {book}; //������棡
    }
    merchantbookstore.bookNum = 0; //��ִ��read������Ҫ�ֶ���0
    cout << "����������" << endl;
    string name;
    int operate;
    cin >> name;
    for (int i = 0; i < merbox.boxNum; i++)
    {
        if (merbox.box[i].searchBook(name).bookName == name)
        {
            merchantbookstore.pushBook(merbox.box[i].searchBook(name));
        }
    }
    if (merchantbookstore.showBooksList())
    {
        cout << "������Ҫ��ӵ����" << endl; //���������Ǵ�1��ʼ��ʾ�ģ�
        cin >> operate;
        if (merchantbookstore.bookBox[operate - 1].bookName != "")
        {
            for (int i = 0; i < mybookstore.bookNum; i++)
            {
                mybookstore.bookBox[i] = {book}; //������棡
            }
            mybookstore.username = self.username;
            mybookstore.readFile();
            mybookstore.pushBook(merchantbookstore.bookBox[operate - 1]);
            mybookstore.writeFile();
            return true;
        }
        else
        {
            cout << "������Ĳ����ڣ�" << endl;
            return false;
        }
    }
    else
    {
        cout << "û�в鵽��" << endl;
        return false;
    }
}

bool mainBuy::buyBook()
{
    cout << "����������" << endl;
    string name;
    cin >> name;
    Book book;
    int operate;
    for (int i = 0; i < merchantbookstore.bookNum; i++)
    {
        merchantbookstore.bookBox[i] = {book}; //������棡
    }
    merchantbookstore.bookNum = 0;
    for (int i = 0; i < merbox.boxNum; i++)
    {
        if (merbox.box[i].searchBook(name).bookName == name)
        {
            merchantbookstore.pushBook(merbox.box[i].searchBook(name));
        }
    }

    if (merchantbookstore.showBooksList())
    {
        cout << "������Ҫ��������" << endl; //���������Ǵ�1��ʼ��ʾ�ģ�
        cin >> operate;
        if (merchantbookstore.bookBox[operate - 1].bookName != "")
        {
            book = merchantbookstore.bookBox[operate - 1];
            self.readFile();
            if (self.pay(book.price))
            {
                merchant.username = book.username;
                merchant.readFile();
                merchant.get(book.price);
                merchant.writeFile();

                merchantbookstore.username = book.username;
                for (int i = 0; i < merchantbookstore.bookNum; i++)
                {
                    merchantbookstore.bookBox[i] = {book}; //������棡
                }
                merchantbookstore.bookNum = 0;
                merchantbookstore.readFile();
                merchantbookstore.delBook(book);
                merchantbookstore.writeFile();

                for (int i = 0; i < mybookstore.bookNum; i++)
                {
                    mybookstore.bookBox[i] = {book}; //������棡
                }
                mybookstore.username = self.username;
                mybookstore.readFile();
                mybookstore.delBook(book);
                mybookstore.writeFile();

                self.writeFile();
            }
            else
            {
                cout << "����" << endl;
            }

            return true;
        }
        else
        {
            cout << "������Ĳ����ڣ�" << endl;
            return false;
        }
    }
    else
    {
        cout << "û�в鵽��" << endl;
        return false;
    }
}

void mainBuy::returnPage()
{
    cout << "�Ƿ���������y/n��" << endl;
    fflush(stdin);
    char jude = getchar();
    char judge = getchar();
    if (judge == 'y')
    {
        Sence();
    }
    else
    {
        return;
    }
}

void mainBuy::Sence()
{

    if (displayList())
    {
        int operate;
        cout << 1 << ":"
             << "����" << endl;
        cout << 2 << ":"
             << "չʾϸ��" << endl;
        cout << 3 << ":"
             << "���빺�ﳵ" << endl;
        cout << 4 << ":"
             << "������һ����" << endl;
        cin >> operate;
		system("cls");
        switch (operate)
        {
        case 1:
            if (self.username == "")
                cout << "���ȵ�½��" << endl;
            else
            {
                if (buyBook())
                {
                    merbox.readAll();
                    cout << "����ɹ�" << endl;
                }

                else
                    cout << "����ʧ��" << endl;
            }
            break;
        case 2:
            if (displayDetails())
            {
            }
            else
            {
                cout << "չʾϸ��ʧ�ܣ�" << endl;
            }
            break;
        case 3:
            if (mybookstore.username == "")
                cout << "���ȵ�½��" << endl;
            else
            {
                if (addMystore())
                {
                    cout << "��ӳɹ�" << endl;
                }
                else
                {
                    cout << "���ʧ��" << endl;
                }
            }
            break;
        case 4:
            break;
        }
    }
    else
    {
        cout << "����û���鱾�ϼ�" << endl;
    }
}