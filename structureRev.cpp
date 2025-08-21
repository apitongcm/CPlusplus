#include <iostream>
using namespace std;

struct student{

	string Name;
	int Age;
	char Grade;

};

enum Level {
	LOW = 1,
	MEDIUM,
	HIGH
};


int main(){

student Student1;
Student1.Name = "Liam";
Student1.Age = 35;
Student1.Grade = 'A';
string food = "Adobo";
string &meal = food;
meal = "Lumpia";

enum Level stats = LOW;


cout << "Name: " <<  Student1.Name << "\n";
cout << "Age: " <<  Student1.Age <<  "\n";
cout << "Grade: " <<  Student1.Grade << "\n";

switch(stats) {
	case 1:
		cout << "Low Level";
		break;
	case 2:
		cout << "Midium Level";
		break;
	case 3:
		cout << "High Level";
		break;
}
cout <<  food << "\n";
cout << meal << "\n";


return 0;

}
