// #include<iostream>
// #include<vector>
// #include<string>
// #include<list>
// #include<forward_list>
// #include<deque>
// #include<array>
// #include<algorithm>
// #include<numeric>
// using namespace std;
// int main(){
    
// }









// #include<iostream>
// #include<forward_list>
// using namespace std;
// int main(){
//     forward_list<int> fl;
//     int val;
//     while(cin >> val){
//         fl.push_front(val);
//     }
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// struct movie{
//     int starth;
//     int startm;
//     int endh;
//     int endm;
//     int len = fun(starth, startm, endh, endm);

//     int fun(int starth, int startm, int endh, int endm){
//         return (endh - starth) * 60 + endm - startm;
//     }
// }
// int main(){
//     vector<movie> v;
//     int cnt;
//     cin >> cnt;
//     for(auto i : cnt){
//         movie temp;
//         cin >> temp.starth >> ":" >> temp.startm >> "-" >> temp.endh >> temp.endm;
//     }
// }


// #include<iostream>
// #include<vector>
// #include<iterator>
// using namespace std;
// int main(){
//     vector<int> v;
//     int val;
//     istream_iterator<int> in(cin), end;
//     while(in != end){
//         // cout << "val:" << val << endl;
//         cout << "*in:" << *in << endl;
//         v.push_back(*in);
//     }
//     for(auto i : v){
//         cout << i << ' ';
//     }
// }



// #include<iostream>
// #include<vector>
// #include<iterator>
// using namespace std;
// int main(){
//     int val;
//     vector<int> v;
//     while(cin >> val){
//         v.push_back(val);
//     }
//     cout << *(-- v.end());
//     cout << *v.end();
//     cout << *(v.end().base());
// }


// #include<iostream>
// #include<vector>
// #include<list>
// #include<iterator>
// #include<algorithm>
// using namespace std;
// int main(){
//     ostream_iterator<int> o(cout);
//     vector<int> v = {1, 2, 3, 4, 5, 0, 6, 0, 7, 8};
//     vector<int> l;

//     copy(v.begin(), v.end(), back_inserter(l));
//     cout << l.size() << endl;
//     // copy(v.begin(), v.end(), l.begin());
//     // copy(l.begin(), l.end(), o);
//     for(auto val : l){
//         cout << val << endl;
//     }
// }