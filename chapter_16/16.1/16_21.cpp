#include<iostream>
using namespace std;

template<typename t>
class DebugDelete{
    public:
        DebugDelete(ostream &s = cerr):os(s){}
        void operator()(t *p) const{
            os << "deleting unique_ptr" << endl;
            delete p;
        }
    private:
        ostream &os;
};