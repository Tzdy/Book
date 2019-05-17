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
    cout << "请输入书名" << endl;
    string name;
    cin >> name;
    int sit;
    Book book;
    for (int i = 0; i < merchantbookstore.bookNum; i++)
    {
        merchantbookstore.bookBox[i] = {book}; //清除缓存！
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
        cout << "请输入序号" << endl;
        cin >> operate;
        if (merchantbookstore.bookBox[operate - 1].bookName != "")
        {
            merchantbookstore.showBookListDetails(merchantbookstore.bookBox[operate - 1]);
            return true;
        }
        else
        {
            cout << "输入有误" << endl;
            return false;
        }
    }
    else
    {
        cout << "sorry您输入的不存在！" << endl;
        return false;
    }
}

bool mainBuy::addMystore()
{
    Book book;
    for (int i = 0; i < merchantbookstore.bookNum; i++)
    {
        merchantbookstore.bookBox[i] = {book}; //清除缓存！
    }
    merchantbookstore.bookNum = 0; //不执行read操作就要手动清0
    cout << "请输入书名" << endl;
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
        cout << "请输入要添加的序号" << endl; //这里的序号是从1开始显示的！
        cin >> operate;
        if (merchantbookstore.bookBox[operate - 1].bookName != "")
        {
            for (int i = 0; i < mybookstore.bookNum; i++)
            {
                mybookstore.bookBox[i] = {book}; //清除缓存！
            }
            mybookstore.username = self.username;
            mybookstore.readFile();
            mybookstore.pushBook(merchantbookstore.bookBox[operate - 1]);
            mybookstore.writeFile();
            return true;
        }
        else
        {
            cout << "你输入的不存在！" << endl;
            return false;
        }
    }
    else
    {
        cout << "没有查到！" << endl;
        return false;
    }
}

bool mainBuy::buyBook()
{
    cout << "请输入书名" << endl;
    string name;
    cin >> name;
    Book book;
    int operate;
    for (int i = 0; i < merchantbookstore.bookNum; i++)
    {
        merchantbookstore.bookBox[i] = {book}; //清除缓存！
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
        cout << "请输入要购买的序号" << endl; //这里的序号是从1开始显示的！
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
                    merchantbookstore.bookBox[i] = {book}; //清除缓存！
                }
                merchantbookstore.bookNum = 0;
                merchantbookstore.readFile();
                merchantbookstore.delBook(book);
                merchantbookstore.writeFile();

                for (int i = 0; i < mybookstore.bookNum; i++)
                {
                    mybookstore.bookBox[i] = {book}; //清除缓存！
                }
                mybookstore.username = self.username;
                mybookstore.readFile();
                mybookstore.delBook(book);
                mybookstore.writeFile();

                self.writeFile();
            }
            else
            {
                cout << "余额不足" << endl;
            }

            return true;
        }
        else
        {
            cout << "你输入的不存在！" << endl;
            return false;
        }
    }
    else
    {
        cout << "没有查到！" << endl;
        return false;
    }
}

void mainBuy::returnPage()
{
    cout << "是否继续购物？（y/n）" << endl;
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
             << "购买" << endl;
        cout << 2 << ":"
             << "展示细节" << endl;
        cout << 3 << ":"
             << "加入购物车" << endl;
        cout << 4 << ":"
             << "返回上一界面" << endl;
        cin >> operate;
        switch (operate)
        {
        case 1:
            if (self.username == "")
                cout << "请先登陆！" << endl;
            else
            {
                if (buyBook())
                {
                    merbox.readAll();
                    cout << "购买成功" << endl;
                }

                else
                    cout << "购买失败" << endl;
            }
            break;
        case 2:
            if (displayDetails())
            {
            }
            else
            {
                cout << "展示细节失败！" << endl;
            }
            break;
        case 3:
            if (mybookstore.username == "")
                cout << "请先登陆！" << endl;
            else
            {
                if (addMystore())
                {
                    cout << "添加成功" << endl;
                }
                else
                {
                    cout << "添加失败" << endl;
                }
            }
            break;
        case 4:
            break;
        }
    }
    else
    {
        cout << "卖家没有书本上架" << endl;
    }
}