// //�Ƚ����������Ƿ����
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int a[3], b[3];
//     int i;

//     cout << "������a�����3������";
//     for(int i = 0; i < 3; i ++){
//         cin >> a[i];
//     }
//     cout << "������b�����3������";
//     for(int i = 0; i < 3; i ++){
//         cin >> b[i];
//     }
//     for(i = 0; i < 3; i ++){//����ʹ��int i = 0
//         if(a[i] != b[i])
//             break;
//     }
//     if(i == 3)
//         cout << "�����������";
//     else
//         cout << "�������鲻���";
// }


//�Ƚ����������Ƿ����
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a(3), b(3);

    cout << "������a��3������";
    for(int i = 0;i < 3; i ++)
        cin >> a[i];
        
    cout << "������b��3������";
    for(int i = 0;i < 3; i ++)
        cin >> b[i];

    auto it1 = a.cbegin();
    auto it2 = b.cbegin();
    while(it1 < a.cend() && it2 < b.cend()){
        if(*it1 != *it2){            
            cout << "����vector�����";
            break;
        }
        it1 ++;
        it2 ++;
    }
    if(it1 == a.cend() && it2 == b.cend())
        cout << "����vecto���";
}