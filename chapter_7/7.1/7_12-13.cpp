#include<iostream>
#include<string>
using namespace std;
istream &read(istream &cin, struct Sales_data &s);
struct Sales_data
{
    //构造函数
    Sales_data() = default;
    Sales_data(const string b, const int u, const double r):bookNo(b), units_sold(u), revenue(r){};
    Sales_data(const string b):bookNo(b){};
    Sales_data(istream &cin){
        read(cin, *this);
    };


    std::string bookNo;//isbn
    int units_sold = 0;//销售数量
    double revenue = 0;//销售额
    struct Sales_data & combine(const struct Sales_data & s);
    string isbn() const;
};

struct Sales_data add(const struct Sales_data &s1, const struct Sales_data &s2);

ostream &print(ostream &cout, const struct Sales_data &s);

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
    cout << s.bookNo << " " << s.units_sold << " " << s.revenue;
    return cout;
}


int main(){
    struct Sales_data first_data(cin);
    if(cin){
        struct Sales_data current_data(cin);
        while(cin){
            if(first_data.isbn() == current_data.isbn())
                first_data.combine(current_data);
            else{
                print(cout, first_data);
                first_data = current_data;
            }
        }
        print(cout, first_data);
    }
}