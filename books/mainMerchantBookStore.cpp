#include "mainMerchantBookStore.h"

void mainMerchantBookStore::delBook()
{
    Book book;
    for (int i = 0; i < merchantbookstore.bookNum; i++)
    {
        merchantbookstore.bookBox[i] = {book}; //������棡
    }
    merchantbookstore = merbox.searchBox(merchant.username);
    merchantbookstore.username = merchant.username;
    merchantbookstore.readFile();
    cout << "��������Ҫɾ��������" << endl;
    string name;
    cin >> name;
    if (merchantbookstore.delBook(merchantbookstore.searchBook(name)) && merchantbookstore.writeFile())
    {
        cout << "ɾ���ɹ�" << endl;
        merbox.readAll();
    }
    else
    {
        cout << "������Ĳ�����" << endl;
    }
}
void mainMerchantBookStore::returnPage()
{
    cout << "�Ƿ�������ͼ�飨y/n��" << endl;
    fflush(stdin);
    char judge = getchar();
    char jude = getchar();
    if (judge == 'y')
        showBooklist();
    else
        return;
}

void mainMerchantBookStore::showBooklist()
{
    Book book;
    for (int i = 0; i < merchantbookstore.bookNum; i++)
    {
        merchantbookstore.bookBox[i] = {book}; //������棡
    }
    merchantbookstore = merbox.searchBox(merchant.username);
    merchantbookstore.username = merchant.username;
    merchantbookstore.readFile();
    int sit;
    if (merchantbookstore.showBooksList())
    {
    }
    else
    {
        cout << "������飡" << endl;
    }
}

void mainMerchantBookStore::addBook()
{
    Book book_;
    for (int i = 0; i < merchantbookstore.bookNum; i++)
    {
        merchantbookstore.bookBox[i] = {book_}; //������棡
    }
    merchantbookstore = merbox.searchBox(merchant.username);
    merchantbookstore.username = merchant.username;
    merchantbookstore.readFile();
    string name;
    double price;
    string details;
    cout << "����������" << endl;
    cin >> name;
    cout << "������۸�" << endl;
    cin >> price;
    cout << "ϸ��" << endl;
    cin >> details;
    Book book(name, price, details);
    book.username = merchantbookstore.username;
    if (merchantbookstore.pushBook(book))
    {
        merchantbookstore.writeFile();
        merbox.readAll();
        cout << "��ӳɹ�" << endl;
    }

    else
        cout << "���ʧ��" << endl;
}

void mainMerchantBookStore::sence()
{
    cout << 1 << ":"
         << "���ͼ��" << endl;
    cout << 2 << ":"
         << "ɾ��ͼ��" << endl;
    cout << 3 << ":"
         << "�г�����ͼ��" << endl;
    int operate;
    cin >> operate;
	system("cls");
    switch (operate)
    {
    case 1:
        addBook();
        merbox.readAll();
        break;
    case 2:
        delBook();
        merbox.readAll();
        break;
    case 3:
        showBooklist();
        break;
    default:
        break;
    }
    returnPage();
}