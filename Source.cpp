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
	switch (n) {
	case 1:
		fout << "Winter";
		break;
	case 2:
		fout << "Winter";
		break;
	case 3:
		fout << "Spring";
		break;
	case 4:
		fout << "Spring";
		break;
	case 5:
		fout << "Spring";
		break;
	case 6:
		fout << "Summer";
		break;
	case 7:
		fout << "Summer";
		break;
	case 8:
		fout << "Summer";
		break;
	case 9:
		fout << "Autumn";
		break;
	case 10:
		fout << "Autumn";
		break;
	case 11:
		fout << "Autumn";
		break;
	case 12:
		fout << "Winter";
		break;
	default:
		fout << "Error";
	}
	fin.close();
	fout.close();
}