// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1, j = 2, k = 3;
//     int *p1 = &i;
//     int *p2 = &j;
//     int *p3 = &k;
//     int *b[3] = {p1, p2, p3};//b��һ��ָ�����飬�����ڵ�ÿһ��Ԫ�ض���ָ��
//     for(int i = 0;i < 3; i ++){
//         cout << b[i] << ' ';
//     }
//     cout << endl;
//     int *(&a)[3] = b;//a���õ���b���ָ������
//     for(auto i : a){
//         cout << i << ' ';
//     }
// }

// //ʹ��{}���г�ʼ���Ͳ����г�ʼ��������
// #include<iostream>
// using namespace std;
// int main(){
//     int s[3] = {};
//     int a[3];
//     for(auto i : s)
//         cout << i << ' ';
//     cout << endl;
//     for(auto i : a)
//         cout << i << ' ';
// }


// //����һ��ֵ��ǰ�漸��Ԫ�س�ʼ��������
// #include<iostream>
// using namespace std;
// int main(){
//     int a[4] = {1,2};
//     for(auto i : a)
//         cout << i << ' ';
// }