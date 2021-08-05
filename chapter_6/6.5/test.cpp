// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     while(cin >> i){
//         if(i > 10){
//             cout << "error:" << __FILE__ 
//                  << " : in function " << __func__
//                  << " at line " << __LINE__ << endl
//                  << "      compiled on " << __DATE__
//                  << " at " << __TIME__ << endl
//                  << "      word read was \"" << i
//                  << "\": bigger than 10 " << endl; 
//         }
//     }
// }


#include<iostream>
using namespace std;
int main(){
    bool (*p)(int i, int j);
    bool fun(int i, int j, int k);
    p = fun;
}