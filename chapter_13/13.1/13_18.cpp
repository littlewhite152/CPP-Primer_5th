#include<iostream>
#include<string>
using namespace std;
class Employee{
    static int index;
    private:
        string name;
        int no;
    public:
        Employee(){cout << "������Ĭ�ϵĹ��캯��" << endl;};
        Employee(string n):name(n), no(index ++){cout << "�����˹��캯��" << endl;};
        Employee(const Employee& e);
        Employee& operator= (const Employee& e);
        ~Employee();  
        friend print(Employee &t);
};

int Employee::index = 0;

Employee::Employee(const Employee& e){
    cout << "�����˿������캯��" << endl;
    this -> name = e.name;
    this -> no = e.no;
    cout << index << endl;
    index ++;
}
Employee& Employee::operator= (const Employee& e){
    cout << "�����˿�����ֵ����" << endl;
    this -> name = e.name;
    this -> no = e.no;
    cout << index << endl;
    index ++;
    return *this;
}
Employee::~Employee(){
    cout << "��������������" << endl;
    cout << index << endl;
    index --;
}
print(Employee &t){
    cout << t.name << endl << t.no << endl;
}
int main(){
    Employee e1("dfj");
    Employee e2 = e1;
    print(e1);
    print(e2);
}