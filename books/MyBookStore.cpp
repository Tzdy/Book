#include<iostream>
#include<fstream>
#include<string>
#include"Book.h"
#include"MyBookStore.h"
#include "BookStore.h"
using namespace std;


bool MyBookStore::writeFile(){
        fstream file;
        file.open(username + "my.txt",ios::out);
        if(file.write((char*) &bookBox,sizeof(bookBox))){
                file.close();
                return true;
        }
        else
        {
                file.close();
                return false;
        }
        
        
}

bool MyBookStore::readFile(){
        fstream file;
        file.open(username + "my.txt",ios::in);
        if(file.read((char*) &bookBox,sizeof(bookBox))){
                int time = 0;
                while(1){
                        if(bookBox[time].bookName == "")
                                break;
                        time ++;        
                }
                bookNum = time;
                file.close();
                return true;
        }
        else
        {
                file.close();
                return false;
        }
        
        
}

// bool MyBookStore::delBook(Book book){
//         for(int i = 0 ; i < bookNum; i ++ )
//         {
//                 if(bookBox[i] == book)
//                 {
//                         for(int j = i ; j < bookNum; j++ ){
//                                 bookBox[j] = bookBox[j+1];
//                         }
//                         bookNum --;
//                         return true;
//                 }
//         }
//         return false;
// }

// bool MyBookStore::showBooksList(){
//         if(bookNum > 0)
//         {
//                 cout << "----------------------------------------------------------------------------" << endl;
//                 for(int i = 0 ; i  < bookNum ; i ++)
//                 {
//                         cout << "书名：" <<bookBox[i].bookName << " " <<  "价格：" <<bookBox[i].price << endl;
//                 }
//                 cout << "----------------------------------------------------------------------------" << endl;
//                 return true;
//         }
//         else
//                 return false;
// }

// Book MyBookStore::searchBook(string name){
//         for(int i = 0 ; i < bookNum ; i++){
//                 if(bookBox[i].bookName == name)
//                         return bookBox[i];
//         }
//         Book error;
//         return error;
// }