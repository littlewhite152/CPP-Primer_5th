#include<iostream>
#include<string>
using namespace std;
struct Sales_data
{
    std::string bookNo;//isbn
    int units_sold = 0;//��������
    double revenue = 0;//���۶�
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
    std::cout << "����������ISBN��ͬ��sales_data����";
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
        std::cout << "���������sales_data�����ISBN����ͬ��";
}