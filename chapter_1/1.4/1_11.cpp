#include<iostream>
int main(){
    int a,b,temp;
    std::cout << "����������������";
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