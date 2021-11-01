#include<iostream>
using namespace std;
class Base{
    public:
        virtual int fcn(){
            cout << "调用了base的fcn" << endl;
        }
};
class D1 : public Base{
    public:
        // int fcn(int){
        //     cout << "调用了D1的有参数的fcn" << endl;
        // }
        int fcn(){
            cout << "调用了D1的无参数的fcn" << endl;
        }
        virtual void f2(){
            cout << "调阅了D1的f2" << endl;
        }
        
};
class D2 : public D1{
    public:
        int fcn(int){
            cout << "调用了D2的有参数的fcn" << endl;
        }
        int fcn(){
            cout << "调用了D2的无参数的fcn" << endl;
        }
        void f2(){
            cout << "调阅了D2的f2" << endl;
        }
};
int main(){
    Base bobj;
    D1 d1obj;
    D2 d2obj;

    Base *bp1 = &bobj, *bp2 = &d1obj, *bp3 = &d2obj;

    bp1 -> fcn();
    bp2 -> fcn();
    bp3 -> fcn();

    D1 *d1p = &d1obj;
    D2 *d2p = &d2obj;

    // bp2 -> f2();
    d1p -> f2();
    d2p -> f2();

    Base *p1 = &d2obj;
    D1 
    
    
     = &d2obj;
    D2 *p3 = &d2obj;

    // p1 -> fcn(3);
    // p2 -> fcn(3);
    p3 -> fcn(3);
}