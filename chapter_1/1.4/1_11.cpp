#include<iostream>
int main(){
    int a,b,temp;
    std::cout << "请输入两个整数：";
    std::cin >> a >> b;    
    if (a <= b){
        temp = a;
        while(temp <= b)
            std::cout << temp ++ << std::endl;
    }
    else{
        temp = b;
        while(temp <= a)
            std::cout<< temp ++ << std::endl;
    }
}