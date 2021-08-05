#include<iostream>
#include<string>
using namespace std;
struct Sales_data
{
    std::string bookNo;//isbn
    int units_sold = 0;//销售数量
    double revenue = 0;//销售额
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

int main(){
    unsigned num = 0, sum_revenue, total_units, mean_revenue;
    Sales_data item1, item2;
    std::cout << "请输入两个ISBN相同的sales_data对象：";
    std::cin >> item1.bookNo >> item1.units_sold >> num;
    item1.revenue = num * item1.units_sold;
    std::cin >> item2.bookNo >> item2.units_sold >> num;
    item2.revenue = num * item2.units_sold;

    if(item1.bookNo == item2.bookNo){
        total_units = item1.units_sold + item2.units_sold;
        sum_revenue = item1.revenue + item2.revenue;
        mean_revenue = sum_revenue / total_units;
        std::cout << item1.bookNo << ' ' << total_units << ' ' << sum_revenue << ' ' << mean_revenue;        
    }
    else
        std::cout << "输入的两个sales_data对象的ISBN不相同！";
}