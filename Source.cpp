#include <iostream>
#include<fstream>
#include<vector>

using namespace std;

int main()
{
	ifstream fin;
	ofstream fout;
	fin.open("input.txt");
	fout.open("output.txt");
	int n;
	fin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; i++) {
		fin >> vec[n - i - 1];
	}
	for (int i = 0; i < n; i++) {
		fout << vec[i] << " ";
	}
	fin.close();
	fout.close();
}