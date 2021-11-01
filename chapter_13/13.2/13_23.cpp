#include<iostream>
#include<string>
using namespace std;
class Employee{
    static int index;
    private:
        string *name;
        int no;
    public:
        Employee(){//默认构造函数
            cout << "调用了默认的构造函数" << endl;
            index ++;
            this->no = index;
        };
        Employee(string *n):name(n), no(index){//有参数的构造函数
            index ++;
            cout << "调用了构造函数" << endl;
        };
        Employee(const Employee& e);//拷贝构造函数
        Employee& operator= (const Employee& e);//拷贝赋值运算符重载
        ~Employee();//析构函数
        friend print(Employee &t);//打印友元函数
};

int Employee::index = 0;

//拷贝构造函数
Employee::Employee(const Employee& e){
    cout << "调用了拷贝构造函数" << endl;
    *(this -> name) = *(e.name);
    this -> no = e.no;
    cout << index << endl;
    index ++;
}

// //类值的拷贝赋值运算符重载,是深拷贝
// Employee& Employee::operator= (const Employee& e){
//     auto temp = new string(*e.name);
//     delete name;
//     cout << "调用了拷贝赋值函数" << endl;
//     this -> name = temp;
//     this -> no = e.no;
//     index ++;
//     return *this;
// }

//拷贝赋值运算符重载,只是浅拷贝
Employee& Employee::operator= (const Employee& e){
    cout << "调用了拷贝赋值函数" << endl;
    this -> name = e.name;
    this -> no = e.no;
    cout << index << endl;
    index ++;
    return *this;
}

//析构函数
Employee::~Employee(){
    cout << "调用了析构函数" << endl;
    cout << index << endl;
    index --;
}

//打印友元函数
print(Employee &t){
    cout << t.name << endl << t.no << endl;
}

int main(){
    string name1 = "dfj";
    string name2 = "dt";
    Employee e1(&name1);
    print(e1);
    Employee e2;
    print(e2);
    e2 = e1;
    print(e1);
    print(e2);
}