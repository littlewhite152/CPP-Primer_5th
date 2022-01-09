#include"Gun.g"
#include"Soldier.h"
#include<iostream>
using namespace std;

void test(){
    Soldier jason("jason");
    jason.addGun(new Gun("AK47"));
    jason.addBulletToGun(20);
    jason.fire()    
}

int main(){

}