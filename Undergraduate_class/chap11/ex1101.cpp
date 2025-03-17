#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
	char infilename[40], outfilename[40], ch;
	cout << "请输入一个文件名";
	cin >> infilename;
	fstream infile(infilename, ios::in|ios::binary);
	if (!infile)
	{
		cout << "打不开输入文件" << infilename << endl;
		exit(1);
	}
	cout << "请输入一个输出文件";
	cin >> outfilename;
	fstream outfile(outfilename, ios::out | ios::binary);
	if (!outfile)
	{
		cout << "打不开输出文件" << outfilename << endl;
		exit(2);
	}
	while (infile.get(ch))
	{
		outfile << ch;
		infile.close();
		outfile.close();
		return 0;

	}
}







