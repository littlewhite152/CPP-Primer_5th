// //�Ƚ�����stringֵ
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1, s2;
//     cin >> s1 >> s2;
//     if(s1 != s2){
//         if(s1 > s2)
//             cout << s1 << "��" << s2 << "��" << endl;
//         else
//             cout << s1 << "��" << s2 << "С" << endl;
//     }
//     else
//         cout << s1 << "��" << s2 << "���" << endl;
// }

// //�Ƚ�����c����ַ�����ֵ
// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char a[3], b[3];
//     for(int i = 0; i < 3; i ++)
//         cin >> a[i];
//     for(int i = 0; i < 3; i ++)
//         cin >> b[i];
    
//     for(int i = 0; i < 3; i ++)
//         cout << a[i] << ' ';
//     for(int i = 0; i < 3; i ++)
//         cout << b[i] << ' ';

//     if(strcmp(a, b) == 0)
//         cout << "�����ַ������" << endl;
//     else if(strcmp(a, b) > 0)
//         cout << "ǰ���ַ�����" << endl;
//     else if(strcmp(a, b) < 0)
//         cout << "�����ַ�����" << endl;
// }