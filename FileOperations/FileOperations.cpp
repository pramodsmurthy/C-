//============================================================================
// Name        : FileOperations.cpp
// Author      : Pramod Krishnamurthy
// Version     : 1.0
// Description : Simple Program to demo the use of file operations in C++.
//               Program compares two sample files.
//============================================================================

#include <iostream>
#include <fstream>
#include <mem.h>

using namespace std;

int get_file_size(fstream *);

int main()
{
	fstream file1;
	fstream file2;

	file1.open("sample.txt", ios::in | ios::out | ios::binary);
	file2.open("sample2.txt", ios::in | ios::out | ios::binary);

	if (file1.is_open() && file2.is_open())
	{
		cout << "Both the files are opened successfully " << endl;
		cout << "Lets compare both the files " << endl;

		int file1Size = get_file_size(&file1);
		int file2Size = get_file_size(&file2);
		int BUFFER_SIZE = file1Size > file2Size ? file1Size : file2Size;

		if (file1Size == file2Size) {

			cout << "Both files are of same size " << endl;
			cout << "Checking if they differ in content " << endl;

			char *file1Buff = new char[BUFFER_SIZE];
			char *file2Buff = new char[BUFFER_SIZE];

			file1.read(file1Buff, BUFFER_SIZE);
			file2.read(file2Buff, BUFFER_SIZE);

			if (memcmp(file1Buff, file2Buff, BUFFER_SIZE) == 0)
			{
				cout << "Both the files are equal "<<endl;
				delete []file1Buff;
				delete []file2Buff;
				return true;
			}
			else
			{
				cout << "Files differ by atleast one byte"<<endl;
			}
			delete []file1Buff;
			delete []file2Buff;
		} else {
			cout <<"Files differ by atleast one byte " << endl;
		}
	}
	else
	{
		cout<< "Problem in opening files ";
	}
	return false;
}

int get_file_size(fstream *file)
{
	file->seekg(0, ios::end);
	int filesize = file->tellg();
	file->seekg(0, ios::beg);
	return filesize;
}
