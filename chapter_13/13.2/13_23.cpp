#include<iostream>
#include<string>
using namespace std;
class Employee{
    static int index;
    private:
        string *name;
        int no;
    public:
        Employee(){//Ĭ�Ϲ��캯��
            cout << "������Ĭ�ϵĹ��캯��" << endl;
            index ++;
            this->no = index;
        };
        Employee(string *n):name(n), no(index){//�в����Ĺ��캯��
            index ++;
            cout << "�����˹��캯��" << endl;
        };
        Employee(const Employee& e);//�������캯��
        Employee& operator= (const Employee& e);//������ֵ���������
        ~Employee();//��������
        friend print(Employee &t);//��ӡ��Ԫ����
};

int Employee::index = 0;

//�������캯��
Employee::Employee(const Employee& e){
    cout << "�����˿������캯��" << endl;
    *(this -> name) = *(e.name);
    this -> no = e.no;
    cout << index << endl;
    index ++;
}

// //��ֵ�Ŀ�����ֵ���������,�����
// Employee& Employee::operator= (const Employee& e){
//     auto temp = new string(*e.name);
//     delete name;
//     cout << "�����˿�����ֵ����" << endl;
//     this -> name = temp;
//     this -> no = e.no;
//     index ++;
//     return *this;
// }

//������ֵ���������,ֻ��ǳ����
Employee& Employee::operator= (const Employee& e){
    cout << "�����˿�����ֵ����" << endl;
    this -> name = e.name;
    this -> no = e.no;
    cout << index << endl;
    index ++;
    return *this;
}

//��������
Employee::~Employee(){
    cout << "��������������" << endl;
    cout << index << endl;
    index --;
}

//��ӡ��Ԫ����
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