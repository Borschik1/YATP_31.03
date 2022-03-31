#include <iostream>
#include<fstream>
#include<vector>
#include <algorithm>

using namespace std;

int main()
{
	ifstream fin;
	ofstream fout;
	fin.open("input.txt");
	fout.open("output.txt");
	vector<int> a(3);
	vector<int> b(3);
	fin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2];
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	fout << a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
	fin.close();
	fout.close();
}
