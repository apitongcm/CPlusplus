#include <iostream>
using namespace std; 

class Employee {
	protected:
		int salary;
};

class Programmer: public Employee{
	public:
		int bonus = 10000 ;
		void setSalary(int s)
		{
			salary = s;
		}
		int getSalary()
		{
			return salary;
		}
		int  totalSalary(){
			return salary + bonus;
		}
};


class Animal {
	public:
		virtual void sound()
		{
			cout << "Animal sound\n";
		}
};

class Dog: public Animal {
	public:
		void sound() override {
			cout << "Dog barks\n";
		}
};



int main(){
	Programmer programmer1; 
	programmer1.setSalary(35000);
	programmer1.bonus = 15000;
	cout << "Total take home salary is: " << programmer1.totalSalary() << ".  \n";
	cout << "Bonus: " << programmer1.bonus << ". \n";
	

	Animal* a;
	Dog d;
	a = &d;
	a->sound();

	return 0;
}

