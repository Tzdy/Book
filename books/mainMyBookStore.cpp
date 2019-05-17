#include <iostream>
#include <string>
#include "mainMyBookStore.h"
#include "Account.h"
using namespace std;

void mainMyBookStore::showBooklist()
{
        if (self.username == "")
                cout << "请先登陆！" << endl;
        else
        {
                Book book;
                for (int i = 0; i < mybookstore.bookNum; i++)
                {
                        mybookstore.bookBox[i] = {book}; //清除缓存！
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
                        cout << "购物车为空" << endl;
                        return;
                }
                int operate;
                cout << "1:"
                     << "移除" << endl;
                cout << "2:"
                     << "下单" << endl;
                cin >> operate;
                switch (operate)
                {
                case 1:
                        delBook();
                        break;
                case 2:
                        buyBook();
                        break;
                default:
                        break; // 没写完    还没回到主循环
                }
                returnPage();
        }
}

void mainMyBookStore::delBook()
{
        cout << "请输入你要删除的书名" << endl;
        string name;
        cin >> name;
        Book book;
        for (int i = 0; i < mybookstore.bookNum; i++)
        {
                mybookstore.bookBox[i] = {book}; //清除缓存！
        }
        mybookstore.bookNum = 0;
        mybookstore.username = self.username;
        mybookstore.readFile();
        if (mybookstore.delBook(mybookstore.searchBook(name)) && mybookstore.writeFile())
        {
                cout << "删除成功" << endl;
        }
        else
        {
                cout << "你输入的不存在" << endl;
        }
}

void mainMyBookStore::buyBook()
{
        cout << "请输入你要购买的书名" << endl;
        string name;
        cin >> name;
        Book book;
        for (int i = 0; i < mybookstore.bookNum; i++)
        {
                mybookstore.bookBox[i] = {book}; //清除缓存！
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
                                merchantbookstore.bookBox[i] = {book}; //清除缓存！
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
                        cout << "你输入的不存在" << endl;
                }
        }
        else
        {
                cout << "余额不足" << endl;
        }
        
}

void mainMyBookStore::returnPage()
{
        cout << "是否继续查看购物车？（y/n）" << endl;
        char jude = getchar();
        char judge = getchar();
        if (judge == 'y')
                showBooklist();
        else
                return;
}

//