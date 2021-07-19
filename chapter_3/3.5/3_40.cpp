#include<cstring>
#include<iostream>
using namespace std;
int main(){
    char a[] = "fjkal  ";
    char b[] = " jfkaljdflkaj ";
    char c
    
    [100];
    strcat(a, b);
    strcpy(c, a);
    cout << c;
    for(int i = 0; i < strlen(c); i ++){
        cout << c[i];
    }
}