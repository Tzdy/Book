#include "mainMerchantBookStore.h"

void mainMerchantBookStore::delBook()
{
    Book book;
    for (int i = 0; i < merchantbookstore.bookNum; i++)
    {
        merchantbookstore.bookBox[i] = {book}; //清除缓存！
    }
    merchantbookstore = merbox.searchBox(merchant.username);
    merchantbookstore.username = merchant.username;
    merchantbookstore.readFile();
    cout << "请输入你要删除的书名" << endl;
    string name;
    cin >> name;
    if (merchantbookstore.delBook(merchantbookstore.searchBook(name)) && merchantbookstore.writeFile())
    {
        cout << "删除成功" << endl;
        merbox.readAll();
    }
    else
    {
        cout << "你输入的不存在" << endl;
    }
}
void mainMerchantBookStore::returnPage()
{
    cout << "是否继续添加图书（y/n）" << endl;
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
        merchantbookstore.bookBox[i] = {book}; //清除缓存！
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
        cout << "请添加书！" << endl;
    }
}

void mainMerchantBookStore::addBook()
{
    Book book_;
    for (int i = 0; i < merchantbookstore.bookNum; i++)
    {
        merchantbookstore.bookBox[i] = {book_}; //清除缓存！
    }
    merchantbookstore = merbox.searchBox(merchant.username);
    merchantbookstore.username = merchant.username;
    merchantbookstore.readFile();
    string name;
    double price;
    string details;
    cout << "请输入书名" << endl;
    cin >> name;
    cout << "请输入价格" << endl;
    cin >> price;
    cout << "细节" << endl;
    cin >> details;
    Book book(name, price, details);
    book.username = merchantbookstore.username;
    if (merchantbookstore.pushBook(book))
    {
        merchantbookstore.writeFile();
        merbox.readAll();
        cout << "添加成功" << endl;
    }

    else
        cout << "添加失败" << endl;
}

void mainMerchantBookStore::sence()
{
    cout << 1 << ":"
         << "添加图书" << endl;
    cout << 2 << ":"
         << "删除图书" << endl;
    cout << 3 << ":"
         << "列出所有图书" << endl;
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