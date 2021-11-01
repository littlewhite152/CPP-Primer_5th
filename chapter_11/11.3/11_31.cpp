#include<iostream>
#include<map>
using namespace std;
int main(){
    multimap<string, string> authors{
		{ "alan", "DMA" },
		{ "pezy", "LeetCode" },
		{ "alan", "CLRS" },
		{ "wang", "FTP" },
		{ "pezy", "CP5" },
		{ "wang", "CPP-Concurrency" } };

	string author = "pezy";
	string work = "CP5";
    authors.erase(author);
    for (const auto &author : authors)
		std::cout << author.first << " " << author.second << std::endl;
}