#include <iostream> 
#include <string> 
using namespace std; 


class Employee {

	private:
	int salary;

	public:
	void setSalary(int s){
		salary = s;
	}

	int getSalary(){
		return salary;
	}

	//using friend
	friend void displaySalary(Employee emp);

	void greeting(){
		cout << "\n  Welcome dear employee! \n";
	}
};

class IT_member : public Employee {
	public:
		string name = "Juan";
};

class IT_support_dept: public IT_member{
	

};



void displaySalary(Employee emp){
	cout << "\n Salary: " << emp.salary << "\n";
}




int main(){
	Employee employee1;
	employee1.setSalary(50000);
	cout << employee1.getSalary();
	displaySalary(employee1);
	

	IT_member member1;
	member1.setSalary(35000);
	member1.greeting();
	cout << "\n "  <<  member1.name <<  "'s Salary is: " << member1.getSalary() << " \n";


	
	IT_support_dept support1;
	support1.setSalary(20000);
	support1.greeting();
	displaySalary(support1);

	return 0;

}
