#include<iostream>
#include<string>
using namespace std;
struct Sales_data
{
    std::string bookNo;//isbn
    int units_sold = 0;//��������
    double revenue = 0;//���۶�
};

int main(){
    char flag;
    struct Sales_data current_data;
    struct Sales_data first_data;
    cout << "�������һ��ͼ�����ݣ�" << endl;
    cout << "isbn:";
    cin >> first_data.bookNo;
    cout << "����������";
    cin >> first_data.units_sold;
    cout << "���۶";
    cin >> first_data.revenue;
    while(cout << "���������(y/n)"){
        cin >> flag;
        if(flag == 'y')
            break;
        else{
            cout << "�������������ͼ�����ݣ�" << endl;
            cout << "isbn:";
            cin >> current_data.bookNo;
            cout << "����������";
            cin >> current_data.units_sold;
            cout << "���۶";
            cin >> current_data.revenue;
            if(current_data.bookNo == first_data.bookNo){
                first_data.units_sold += current_data.units_sold;
                first_data.revenue += current_data.revenue;
            }
            else{
                cout << "isbn:" << first_data.bookNo << " ��������:" << first_data.units_sold << " ���۶�:" << first_data.revenue;
                first_data = current_data;
            }            
        }
    }
    cout << "isbn:" << first_data.bookNo << " ��������:" << first_data.units_sold << " ���۶�:" << first_data.revenue;
}