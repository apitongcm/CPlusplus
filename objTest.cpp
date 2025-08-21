#include <iostream> 
#include <string>
using namespace std;


//using Object and Classes 
class testClass{

	public:
		int myNum;
		string myString;
		void myMethod();
};

void testClass::myMethod() {
	cout << "Hello World!\n ";
}



class Book{
	public:
		string title;
		string author;
		int year;
};

class Dog{
	public:
		string name;
		string owner;
		void bark(){
			cout << "Woof!\n";
		}	
};

class Car{
	//variables 
	public:
		string brand;
		string model;
		int year;
		//Constructor
		Car( string x, string y, int z)
		{
			brand = x;
			model = y;
			year = z;
                 }

		//Overloading
		Car()
		{
			brand="Unknown"; 
			model="Unknown";
			year = 2025;
		}
};



int main(){
	testClass test1;

	test1.myNum = 15;
	test1.myString = "Some text";

	cout << test1.myString << " , " << test1.myNum << "\n";
	test1.myMethod();

	Book book1; 
	book1.title = "Matilda";
	book1.author = "Roald Dahl";
	book1.year = 1988;

	Book book2; 
	book2.title = "The Giving Tree";
	book2.author = "Shel Silverstein";
	book2.year = 1964;

	cout << book1.title << ", " << book1.author << ", " << book1.year << "\n";
	cout << book2.title << ", " << book2.author << ", " << book2.year << "\n";

	Dog dog1;
	dog1.bark();
	dog1.bark();


	Car car1;
	Car car2("Ford", "Mustang", 1969);
	cout << car1.brand << " " << car1.model << " " << car1.year << "\n";
	cout << car2.brand << " " << car2.model << " " << car2.year << "\n";

	return 0;
}
