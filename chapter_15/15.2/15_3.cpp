#include<iostream>
using namespace std;
class Quote{
    public:
        Quote() = default;
        Quote(const string &book, double sales_price):bookNo(book), price(sales_price){}
        string isbn() const{return bookNo;}
        virtual double net_price(int n) const{
            return n * price;
        }
        virtual ~Quote() = default;
    private:
        string bookNo;
    protected:
        double price = 0.0;

};
double print_total(const Quote &item, int n){
    double ret = item.net_price(n);
    cout << "isbn: " << item.isbn() << " #sold:" << n << " total due:" << ret << endl;
    return ret;
}

int main(){
    cout << "jjj";
}