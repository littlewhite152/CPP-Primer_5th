#include<iostream>
#include<iterator>
#include<fstream>
using namespace std;
void fun(const string in_path, const string out1_path, const string out2_path){
    ifstream inf(in_path);
    ofstream outf1(out1_path);
    ofstream outf2(out2_path);
    istream_iterator<int> in(inf), eof;
    ostream_iterator<int> out1(outf1, " ");
    ostream_iterator<int> out2(outf2, " ");
    while(in != eof){
        if((*in) % 2)
            out1 = *in;
        else
            out2 = *in;
        ++ in;
    }
}
int main(){
    string in_path = "D:\\workspace_vscode\\CPP-Primer_5th\\chapter_10\\10.4\\10_33.txt";
    string out1_path = "D:\\workspace_vscode\\CPP-Primer_5th\\chapter_10\\10.4\\10_33_out1.txt";
    string out2_path = "D:\\workspace_vscode\\CPP-Primer_5th\\chapter_10\\10.4\\10_33_out2.txt";
    fun(in_path, out1_path, out2_path);
}