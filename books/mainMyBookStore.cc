#include<iostream>
#include<string>
#include"mainMyBookStore.h"
#include"Account.h"
using namespace std;
extern Account self,merchant;
extern MyBookStore mybookstore; 

void mainMyBookStore::showBooklist(){
        if(mybookstore.showBooksList()){}
        else
        {
                cout << "购物车为空" << endl;
        }
        int operate;
        cout << "1:" << "移除" << endl;
        cout << "2:" << "下单" << endl;
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
                break;                                                           // 没写完    还没回到主循环
        }
}

void mainMyBookStore::delBook(){
        cout << "请输入你要删除的书名" << endl;
        string name;
        cin >> name;
        if(mybookstore.delBook(mybookstore.searchBook(name)))
        {
                cout << "删除成功" << endl;
        }
        else
        {
                cout << "你输入的不存在" << endl;
        }
}

void mainMyBookStore::buyBook(){
        cout << "请输入你要购买的书名" << endl;
        string name;
        cin >> name;
        Book book = mybookstore.searchBook(name);
        if(mybookstore.delBook(book))
        {
                if(self.pay(book.price)){
                        cout << "支付成功！" << endl;
                        merchant.get(book.price);
                }
                        
                else
                        cout << "支付失败" << endl;        
        }
}