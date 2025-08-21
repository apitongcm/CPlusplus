#include <iostream> 
#include <string>
using namespace std;


void myFunc(string fname, int age =18)
{
	cout << fname << "West. " << age << " years old. \n";
}

int areaSquare(int width, int length)
{
	return width * length;
}

void swapNums(int &num1, int &num2)
{
	int num3 = num1;
	num1 = num2;
	num2 = num3;
}

struct Car {
	string brand;
	int year;
};

void updateYear (Car& c){
	c.year++;
	cout << "The " << c.brand << " is now from year " << c.year << " .\n";
}


int main(){
	myFunc("Thalia", 3);
	myFunc("Jenny", 21);
	myFunc("Anya");

	cout << "\n the area of the square: " << areaSquare(25,4);

	int firstNo = 2; 
	int secondNo = 6;

	cout << "Before swap: " << "\n";
	cout << firstNo << " " << secondNo << "\n";

	swapNums(firstNo,secondNo);

	cout << "After swap: " << "\n";
	cout << firstNo << " " << secondNo << "\n";

	Car car1 = {"Toyota", 2020};
	updateYear(car1);


	return 0;
}

