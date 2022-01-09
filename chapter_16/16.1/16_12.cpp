#include<iostream>
#include<memory>
#include<vector>
#include<string>
using namespace std;

template<typename t>
class Blob{
    private:
        shared_ptr< vector<t> > s;
        check(int i, const string &msg) const{
            if( i >= s -> size() )
                throw out_of_range(msg);
        }
    public:
        Blob();
        Blob( initializer_list<t> list);
        t& front() const;
        t& back() const;
        void push_back(const t &str);
        t& pop_back();
};

template<typename t>
Blob<t>::Blob(){
    s = make_shared< vector<t> >();
}

template<typename t>
Blob<t>::Blob(initializer_list<t> list){
    s = make_shared< vector<t> >(list);
}

template<typename t>
t& Blob<t>::front() const{
    check(0, "front on empty Blob");
    return s -> front();
}

template<typename t>
t& Blob<t>::back() const{
    check(0, "back on empty Blob");
    return s -> back();
}

template<typename t>
void Blob<t>::push_back(const t &str){
    s -> push_back(str);
}

template<typename t>
t& Blob<t>::pop_back(){
    t& temp = s -> back();
    s -> pop_back();
    return temp;
}

int main(){
    Blob<string> s({"jf;ajf", "jfkahg;klaf"});
    cout << s.front() << endl;
    cout << s.back() << endl;
    cout << s.pop_back() << endl;
}