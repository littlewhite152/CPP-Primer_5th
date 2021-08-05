#include<iostream>
#include<string>
using namespace std;
struct Sales_data
{
    //���캯��
    Sales_data() = default;
    Sales_data(const string b, const int u, const double r):bookNo(b), units_sold(u), revenue(r){};
    Sales_data(const string b):bookNo(b){};
    Sales_data(istream &cin);


    std::string bookNo;//isbn
    int units_sold = 0;//��������
    double revenue = 0;//���۶�
    struct Sales_data & combine(const struct Sales_data & s);
    string isbn() const;
};

struct Sales_data add(const struct Sales_data &s1, const struct Sales_data &s2);
istream &read(istream &cin, struct Sales_data &s);
ostream &print(ostream &cout, const struct Sales_data &s);

Sales_data::Sales_data(istream &cin){
    read(cin, *this);
}

struct Sales_data & Sales_data :: combine(const struct Sales_data & s){
    units_sold += s.units_sold;
    revenue += s.revenue;
    return *this;
}

string Sales_data :: isbn() const{
    return bookNo;
}

struct Sales_data add(const struct Sales_data &s1, const struct Sales_data &s2){
    struct Sales_data sum = s1;
    sum.combine(s2);
    return sum;
}

istream &read(istream &cin, struct Sales_data &s){
    cin >> s.bookNo >> s.units_sold >> s.revenue;
    return cin;
}

ostream &print(ostream &cout, const struct Sales_data &s){
    cout << s.bookNo << " " << s.revenue << " " << s.units_sold;
    return cout;
}


int main(){
    struct Sales_data first_data;
    cout << "���Թ��캯��" << endl;
    
    cout << "Ĭ�Ϲ��캯����" << endl;
    print(cout, first_data);
    cout << endl;

    cout << "���������Ĺ��캯����" << endl;
    struct Sales_data second_data("No.001");
    print(cout, second_data);
    cout << endl;

    cout << "��������Ĺ��캯����" << endl;
    struct Sales_data third_data("No.002", 2, 4);
    print(cout, third_data);
    cout << endl;

    cout << "�ⲿ����Ĺ��캯����" << endl;
    struct Sales_data fourth_data(cin);
    print(cout, fourth_data);
    cout << endl;
}