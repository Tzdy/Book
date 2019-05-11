#include<iostream>
#include<string>
//购物车：
#include"MyBookStore.h"
#include"mainMyBookStore.h"
//卖家买家账户：
#include"Account.h"
//书：
#include "Book.h"
//卖家书库

MyBookStore mybookstore;   
Account self,merchant;
int main(){
        int a;
        Book book("shu",12.5);
        mybookstore.pushBook(book);
        mainMyBookStore m;
        m.showBooklist();
        m.buyBook();
}