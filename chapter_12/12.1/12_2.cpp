#include<iostream>
#include<memory>
#include<vector>
#include<string>
using namespace std;
class StrBlob{
    private:
        shared_ptr< vector<string> > s;
        check(int i, const string &msg) const{
            if( i >= s -> size() )
                throw out_of_range(msg);
        }
    public:
        StrBlob();
        StrBlob( initializer_list<string> list);
        string& front() const;
        string& back() const;
        void push_back(const string &str);
        string& pop_back();
};
StrBlob::StrBlob(){
    s = make_shared< vector<string> >();
}
StrBlob::StrBlob(initializer_list<string> list){
    s = make_shared< vector<string> >(list);
}
string& StrBlob::front() const{
    check(0, "front on empty StrBlob");
    return s -> front();
}
string& StrBlob::back() const{
    check(0, "back on empty StrBlob");
    return s -> back();
}
void StrBlob::push_back(const string &str){
    s -> push_back(str);
}
string& StrBlob::pop_back(){
    string& temp = s -> back();
    s -> pop_back();
    return temp;
}

int main(){
    StrBlob s({"jf;ajf", "jfkahg;klaf"});
    cout << s.front() << endl;
    cout << s.back() << endl;
    cout << s.pop_back() << endl;
}