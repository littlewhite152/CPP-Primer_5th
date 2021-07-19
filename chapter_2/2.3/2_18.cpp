#include<iostream>
int main(){
    int a = 2, *p = &a;
    int b = 4, *q = &b;
    int c = 6;
    std::cout << *p << *q << std::endl;
    p = &c;//更改指针的值
    std::cout << *p << *q << std::endl;
    *p = b;//更改指针所指对象的值
    std::cout << *p << *q << std::endl;
}