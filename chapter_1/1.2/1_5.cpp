#include<iostream>
int main(){
    std::cout << "请输入两个数：";
    std::cout << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    std::cout << v1 << "和" << v2 << "的乘积是"
        << v1 * v2 << std::endl;
    return 0;
}