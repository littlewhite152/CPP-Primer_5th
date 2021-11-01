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
        virtual void debug(){
            cout << "bookNo:" << bookNo << endl;
            cout << "price:" << price << endl;
        }
        virtual ~Quote() = default;
    private:
        string bookNo;
    protected:
        double price = 0.0;

};

class Bulk_quote : public Quote{
    public:
        Bulk_quote() = default;
        // Bulk_quote(const string &book, double p, int qty, double disc):Quote(book, p), min_qty(qty), discount(disc){};
        Bulk_quote(int qty, double disc):min_qty(qty), discount(disc){};
        double net_price(int) const override;
        void debug() override{
            cout << "price:" << price << endl;
            cout << "min_qty:" << min_qty << endl;
            cout << "discount:" << discount << endl;
        }
    private:
        int min_qty = 0;
        double discount = 0.0;
};


double print_total(const Quote &item, int n){
    double ret = item.net_price(n);
    cout << "isbn: " << item.isbn() << " #sold:" << n << " total due:" << ret << endl;
    return ret;
}

int main(){
    Quote f("dfj", 5);
    Bulk_quote s(1, 2.0);
    // Quote *pf = &f;
    // Quote *ps = &s;
    // pf->debug();
    // ps->debug();
}