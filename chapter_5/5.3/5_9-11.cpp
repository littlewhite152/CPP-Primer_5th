// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;
//     int yycnt = 0;
//     int spacecnt = 0;
//     int tcnt = 0;
//     int lcnt = 0;
//     int ffcnt = 0;
//     int flcnt = 0;
//     int ficnt = 0;
//     while(getline(cin, s)){
//         for(auto iter = s.begin() ; iter != s.end() ; ++ iter){
//             if(*iter == 'a' || *iter == 'e' || *iter == 'i' || *iter == 'o' || *iter == 'u' || 
//             *iter == 'A' || *iter == 'E' || *iter == 'I' || *iter == 'O' || *iter == 'U')
//                 ++ yycnt;
//             else if(*iter == ' ')
//                 ++ spacecnt;
//             else if(*iter == '\t')
//                 ++ tcnt;
//             else if(*iter == '\n')
//                 ++ lcnt;
//             else if(*iter == 'f'){
//                 ++ iter;
//                 if(*iter == 'f'){
//                     ffcnt ++;
//                     continue;
//                 }
//                 if(*iter == 'l'){
//                     flcnt ++;
//                     continue;
//                 }
//                 if(*iter == 'i'){
//                     ficnt ++;
//                     continue;
//                 }
//             }            
//         }
//         cout << "Ԫ����ĸ��" << yycnt << endl << "�ո�����" << spacecnt << endl << "�Ʊ��������" << tcnt << endl 
//             << "���з�����:" << lcnt << endl << "ff�ַ����е�������" << ffcnt << endl << "fl�ַ����е�������" << flcnt << endl 
//             << "fi�ַ����е�������" << ficnt << endl;
//     }
// }



#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int yycnt = 0;
    int spacecnt = 0;
    int tcnt = 0;
    int lcnt = 0;
    int ffcnt = 0;
    int flcnt = 0;
    int ficnt = 0;
    while(getline(cin, s)){
        for(auto iter = s.begin() ; iter != s.end() ; ++ iter){
            switch (*iter)
            {
            case 'a': case 'e': case 'i': case 'o': case 'u': case 'A': case 'E': case 'I': case 'O': case 'U':
                yycnt ++;
                break;
            case ' ':
                spacecnt ++;
                break;
            case '\t':
                tcnt ++;
                break;
            case '\n':
                lcnt ++;
                break;
            case 'f':
                ++ iter;
                switch(*iter){
                    case 'f':
                        ffcnt ++;
                        break;
                    case 'l':
                        flcnt ++;
                        break;
                    case 'i':
                        ficnt ++;
                        break;
                }
                break;
            default:
                break;
            }
        }
        cout << "Ԫ����ĸ��" << yycnt << endl << "�ո�����" << spacecnt << endl << "�Ʊ��������" << tcnt << endl 
            << "���з�����:" << lcnt << endl << "ff�ַ����е�������" << ffcnt << endl << "fl�ַ����е�������" << flcnt << endl 
            << "fi�ַ����е�������" << ficnt << endl;
    }
}