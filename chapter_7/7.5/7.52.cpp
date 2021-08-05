#include<iostream>
#include<string>
using namespace std;
struct Sales_data
{
    friend struct Sales_data add(const struct Sales_data &s1, const struct Sales_data &s2);
    friend ostream &print(ostream &cout, const struct Sales_data &s);
    friend istream &read(istream &cin, struct Sales_data &s);
    //构造函数
    Sales_data(const string b, const int u, const double r):bookNo(b), units_sold(u), revenue(r){cout << "使用了三个参数的构造函数" << endl;};

    //委托构造函数
    Sales_data(): Sales_data("abcd", 4, 5){};
    Sales_data(string b, int u = 5) : Sales_data(b, u, 0){cout << "使用了委托的一个参数和一个默认参数的构造函数" << endl;};
    Sales_data(istream &cin) : Sales_data() {read(cin, *this);
                                            cout << "使用了委托的输入流作为参数的构造函数" << endl;};

    private:
        std::string bookNo;//isbn
        int units_sold = 0;//销售数量
        double revenue = 0;//销售额
    
    public:
        struct Sales_data & combine(const struct Sales_data & s);
        string isbn() const;
};

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
    Sales_data item = {"978-050", 25, 15.99};
}