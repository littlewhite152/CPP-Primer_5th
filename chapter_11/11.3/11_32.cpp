#include<iostream>
#include<map>
#include<set>
using namespace std;
int main(){
    multimap<string, string> authors{
		{ "alan", "DMA" },
		{ "pezy", "LeetCode" },
		{ "alan", "CLRS" },
		{ "wang", "FTP" },
		{ "pezy", "CP5" },
		{ "wang", "CPP-Concurrency" } };

    map< string, set<string> > ordered_authors;
    for(auto i : authors){
        ordered_authors[i.first].insert(i.second);
    }
    for(auto &i : ordered_authors){
        cout << i.first << ": ";
        for(auto j : i.second){
            cout << j << " ";
        }
        cout << endl;
    }
}