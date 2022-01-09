#include"Soldier.h"

Soldier::Soldier(string name){
    this -> _name = name;
    this -> _ptr_gun = new Gun("AK47");
}

Soldier::addBulletToGun(int bullet_num){
    this -> _ptr_gun -> add_bullet(bullet_num);
}

Soldier::fire(){
    this -> _ptr_gun -> shoot();
}

Soldier::addGun(Gun *ptr_gun){
    this -> _ptr_gun = ptr_gun;
}

Soldier::~Soldier(){
    if(_ptr_gun == nullptr){
        return;
    }
    delete this -> _ptr_gun;
    this -> _ptr_gun = nullptr;
}