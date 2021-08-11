#include<iostream>
#include<fstream>
#include"8_6.h"

//�ڵ�ǰ·�����ն������룺8_6.exe D:\workspace_repository\CPP-Primer_5th\chapter_8\8.2\file\8_6.txt
int main(int argc, char *argv[]){
    if(argc != 2){
        cerr << "������ļ���" << endl;
        return -1;
    }
    ifstream in(argv[1]);
    if(!in){
        cerr << "�޷��������ļ�" << endl;
        return -1;
    }
    
    Sales_data total;
    if(read(in, total)){
        Sales_data trans;
        while(read(in, trans)){
            if(total.isbn() == trans.isbn())
                total.combine(trans);
            else{
                print(out, total) << endl;
                total = trans;
            }
        }
        print(out, total) << endl;
    }else{
        cerr << "no data" << endl;
    }
    in.close();
    out.close();
}