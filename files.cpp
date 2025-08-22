#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
using namespace std; 


int main()
{
	string readText;
	time_t timestamp = time(NULL);
	struct tm datetime =  *localtime(&timestamp);
	char output[50];
	
	strftime(output, 50, "%a %b %e %H:%M:%S %Y", &datetime);

	ofstream testFile("test.txt");
	testFile << output  << "\n Learning C++ read/write files \n It is fun! \n Migrating C to C++ \n Hello World! ";

	testFile.close();


	ifstream  readFile("test.txt");
	//looping to read all data line by line
	while(getline(readFile, readText)){
		cout << readText;
	}
	readFile.close();
}
