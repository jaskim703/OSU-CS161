/*******************************
**Author: Jasmine Kim
**Date: 7/10/17
**Description: This program will ask the user for the name of a file and then open it. The program will add the integers in the file and output the sum into a new file 
***************************/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	ifstream integerList;
	ofstream sumFile;
	int numbers, sum;

	integerList.open("list_of_numbers.txt");
	if(integerList.fail())
	{
	     cout << "Input file opening failed.\n";
	}else{
	     while ( integerList >> numbers)
		{
		     sum += numbers;
		}

	sumFile.open("sum.txt");
	if(sumFile.fail())
	{
	     cout << "Output file opening failed. \n";
	}else{
	     sumFile << sum << endl;
	}
	
	integerList.close();
	sumFile.close();

	return 0;
       }
}
	
	
