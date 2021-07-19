#include<iostream>
int main(){
    int a1 = 1, a2 = 1;
    std::cout << "输入a1和a2:";
    std::cin >> a1 >> a2;
    std::cout << a1 << "和" << a2 << "的乘积是" << a1 * a2;
    return 1;
}