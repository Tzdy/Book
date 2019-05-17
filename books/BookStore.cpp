#include<iostream>
#include<fstream>
#include<string>
#include"Book.h"
#include"BookStore.h"
using namespace std;

bool BookStore::delBook(Book book){
        for(int i = 0 ; i < bookNum; i ++ )
        {
                if(bookBox[i] == book)
                {
                        for(int j = i ; j < 49; j++ ){
                                bookBox[j] = bookBox[j+1];
                        }
                        bookNum --;
                        return true;
                }
        }
        return false;
}

bool BookStore::showBooksList(){
        if(bookNum > 0)
        {
                cout << "----------------------------------------------------------------------------" << endl;
                for(int i = 0 ; i  < bookNum ; i ++)
                {
                        cout << i+1 <<"书名：" <<bookBox[i].bookName << " " <<  "价格：" <<bookBox[i].price << endl;
                }
                cout << "----------------------------------------------------------------------------" << endl;
                return true;
        }
        else
                return false;
}

Book BookStore::searchBook(string name){
        for(int i = 0 ; i < bookNum ; i++){
                if(bookBox[i].bookName == name)
                        return bookBox[i];
        }
        Book error;
        return error;
}

bool BookStore::showBookListDetails(Book book){
        if(book.price){
                cout << book.details << endl;
                return true;
        }
        else{
                return false;
        }

}

bool BookStore::pushBook(Book book){
        if(bookNum < 50)
        {
                bookBox[bookNum] = book;
                bookNum ++;      
                return true;
        }
        else
        {
                return false;
        }
        
          
}