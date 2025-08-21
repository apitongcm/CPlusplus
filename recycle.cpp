#include <iostream>
#include <string>
using namespace std; 


template <typename Recycle>
class Printme {
	public:
	Recycle value;
	Printme(Recycle val)
	{
		value = val;
	}
	void display(){
		cout << "Value: " << value << "\n";
	}
};

template <typename Arg1, typename Arg2>
class doubleTrouble {
	public:
	Arg1 val1;
	Arg2 val2; 

	doubleTrouble(Arg1 a,Arg2 b){
		val1 = a;
		val2 = b;
	}
	void print()
	{
		cout <<  "The first value is: " << val1 << ", the second value is:  "<< val2 <<  " \n";
	}
};


int main(){

	Printme<double> doubleVal(39.321);
	Printme<string> stringVal("Programming c++");

	doubleVal.display();
	stringVal.display();

	doubleTrouble<double,double> deci(24.55,234.63);
	doubleTrouble<int,int> whole(5,25);

	deci.print();
	whole.print();

return 0;
}

