#pragma once

#include<string>
#include<iostream>
#include"Gun.h"

class Soldier{
    public:
        Soldier(string name);
        void addBulletToGun();
        bool fire();
        void addGun(Gun *ptr_gun);
        ~Soldier();

    private:
        string _name;
        Gun* _ptr_gun;
};