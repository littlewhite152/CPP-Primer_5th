#pragma once
#include<string>
using namespace std;

class Gun{
    public:
        Gun(string t){
            this -> type = t;
            bullet_count = 0;
        }
        void add_bullet(int bullet_number);
        void shoot();

    private:
        int bullet_count;
        string type;
};