// #include<iostream>
// using namespace std;
// class A{
//     friend class B;
//     public:
//         using i_type = string::size_type;
// };
// class B{
//     public:
//         A::i_type fun(); 
// };

// A::i_type B::fun(){
//     cout << "test";
//     return 1;
// }

// int main(){
//     B b;
//     b.fun();
// }


// 将pos声明放在最后
// #include<iostream>
// using namespace std;
// class Screen{
//     public:
//         void fun(pos height){
//             cursor = width * height;
//         }
//     private:
//         pos cursor = 0;
//         pos height = 0, widtf = 0;
//     public:
//         typedef std::string::size_type pos;
// };

// int main(){
//     A Screen;
// }

#include<iostream>
using namespace std;
class A{
    public:
        A(int i, int j):b(i), a(b % j){}
        int a, b;
};
int main(){
    A a(1, 2);
    cout << a.a << endl << a.b << endl;
}