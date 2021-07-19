// #include<iostream>
// int main(){
//     int sum = 0, val = 1;
//     while(val <= 10){
//         sum += val;
//         ++val;
//     }
//     std::cout << "sum of 1 to 10 inclusive is "
//               << sum << std::endl;
//     return 0;
// }


// #include<iostream>
// int main(){
//     int sum = 0;
//     for(int val = 1; val <= 10; ++val)
//         sum += val;
//     std::cout << "sum of 1 to 10 inclusive is "
//               << sum << std::endl;
//     return 0;
// }


#include<iostream>
int main(){
    int sum = 0, value = 0;
    while(std:: cin >> value)
        sum += value;
    std::cout << "sum is: " << sum << std::endl;
    return 0;
}