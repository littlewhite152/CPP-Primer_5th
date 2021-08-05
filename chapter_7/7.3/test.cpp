#include<iostream>
using namespace std;
void f(){
    cout << "kkk";
}
struct X{
    friend void f();
    x(){
        f();
    }
    void g();
    void h();
};
void X::g(){
    return f();
}

void X::h(){
    return f();
}
int main(){

}