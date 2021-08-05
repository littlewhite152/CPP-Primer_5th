#include<iostream>
#include<string>
#include<vector>
using namespace std;
using pos = string::size_type;
class Screen{
    friend class window_mgr;
    private:
        pos cursor = 0;
        pos height = 0;
        pos width = 0;
        string contents;
        void do_display(ostream &os) const{
            os << contents;
        }
    public:        
        Screen() = default;
        Screen(pos h, pos w):height(h), width(w), contents(h*w, ' '){};
        Screen(pos h, pos w, char s):height(h), width(w), contents(h*w, s){};
        char get() const{
            return contents[cursor];
        }
        inline char get(pos ht, pos wd) const;
        Screen & move(pos h, pos w);
        Screen & set(char c);
        Screen & display(ostream &os);
};

char Screen::get(pos ht, pos wd) const{
    pos row = ht * width;
    return contents[row + wd];
}

Screen & Screen::move(pos h, pos w){
    pos row = h * width;
    cursor = row + w;
    return *this;
}

Screen & Screen::set(char c){
    contents[cursor] = c;
    return *this;
}

Screen & Screen::display(ostream &os){
    do_display(os);
    return *this;
}

class window_mgr{
    void clear(int i);
};

void window_mgr::clear(int i){
    cout << "clear";
}

int main(){
}