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
    char flag;
    struct Sales_data current_data;
    struct Sales_data first_data;
    cout << "请输入第一个图书数据：" << endl;
    cout << "isbn:";
    cin >> first_data.bookNo;
    cout << "销售数量：";
    cin >> first_data.units_sold;
    cout << "销售额：";
    cin >> first_data.revenue;
    while(cout << "输入结束？(y/n)"){
        cin >> flag;
        if(flag == 'y')
            break;
        else{
            cout << "请输入接下来的图书数据：" << endl;
            cout << "isbn:";
            cin >> current_data.bookNo;
            cout << "销售数量：";
            cin >> current_data.units_sold;
            cout << "销售额：";
            cin >> current_data.revenue;
            if(current_data.isbn() == first_data.isbn()){
                first_data.combine(current_data);
            }
            else{
                cout << "isbn:" << first_data.bookNo << " 销售数量:" << first_data.units_sold << " 销售额:" << first_data.revenue;
                first_data = current_data;
            }            
        }
    }
    cout << "isbn:" << first_data.bookNo << " 销售数量:" << first_data.units_sold << " 销售额:" << first_data.revenue;
}