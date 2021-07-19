// #include<iostream>
// int main(){
//     int sum = 0;
//     for(int i = 50; i <= 100; i ++){
//         sum += i;
//     }
//     std::cout << sum;
// }



// #include<iostream>
// int main(){
//     for(int i = 10; i >= 0; i --)
//         std::cout << i << std::endl;
// }


#include<iostream>
int main(){
    int a,b;
    std::cout << "请输入a和b的值：";
    std::cin >> a >> b;
    if (a <= b){
        for(int temp = a; temp <= b; temp ++){
            std::cout << temp << std::endl;
        }
    }
    else{
        for(int temp = b; temp <= a; temp ++){
            std::cout << temp << std::endl;
        }
    }
}