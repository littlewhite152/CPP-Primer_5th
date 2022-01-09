#include"Gun.h"
#include<iostream>

void Gun::add_bullet(int bullet_number){
    this -> bullet_count += bullet_number;
}

void Gun::shoot(){
    if(this -> bullet_count <= 0){
        cout << "this Gun have no bullet" << endl;
    }
    this -> bullet_count --;
    cout << "shoot sucessfully!" << endl;
}