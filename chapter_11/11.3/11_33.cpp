#include<iostream>
#include<map>
#include<string>
#include<fstream>
#include<sstream>
#include<vector>
using namespace std;
int main(){
    fstream fin;
    string word, line, key, value;
    bool flag = false;
    map<string, string> tf_guid;
    int index = 0;
    fin.open("D:\\workspace_vscode\\CPP-Primer_5th\\chapter_11\\11.3\\word_transformation.txt");
    if(!fin){
        cout << "�ļ���ȡʧ��" <<endl;
        exit(1);
    }
    while(fin >> key && getline(fin, value)){
        tf_guid[key] = value.substr(1);//line�ĵ�һ��Ԫ���ǿո�����Ҫsubstrȥ���ո�
    }
    fin.close();

    
    fin.open("D:\\workspace_vscode\\CPP-Primer_5th\\chapter_11\\11.3\\word_transformation_bad.txt");
    if(!fin){
        cout << "�ļ���ȡʧ��" <<endl;
        exit(1);
    }
    while(getline(fin, line)){
        flag = true;
        istringstream in(line);
        while(in >> word){
            if(flag == true)
                flag = false;
            else
                cout << " ";
            auto temp = tf_guid.find(word);
            if(temp != tf_guid.end()){
                word = temp -> second;
            }
            cout << word;
        }
        flag = true;
        cout << endl;
    }
}