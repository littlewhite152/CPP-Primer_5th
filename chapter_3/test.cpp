// //ʹ��for��ispunctͳ��string�����б����ŵ�����
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;
//     while(cin >> s){
//         decltype(s.size()) cnt = 0;//cnt��������s.size()���ص�����
//         for(auto a : s){
//             if(ispunct(a))
//                 cnt ++;
//         }
//         cout << "�ַ�����" << s << "�У������ŵĸ���Ϊ��" << cnt << endl;
//     }
// }



// //���ַ����е�Сд��ĸ�ĳɴ�д��ĸ
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;
//     while(cin >> s){
//         for(auto &a : s){
//             a = toupper(a);
//         }
//         cout << s << endl;
//     }
// }


// //���ַ����еĵ�һ�����ʸĳɴ�д��ʽ
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;
//     bool flag = true;
//     while (getline(cin, s)){
//         for(auto &a : s){
//             if(isalpha(a)){
//                 flag = false;
//                 a = toupper(a);
//                 continue;
//             }
//             else if(!isalpha(a) && !flag)
//                 break;
//         }
//         cout << s << endl;     
//     }    
// }
