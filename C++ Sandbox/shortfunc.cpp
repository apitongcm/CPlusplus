#include <iostream>
#include <functional> 
using namespace std; 

void myFunction(function<void()> func)
{
	func();
	func();
}


int main(){
	auto message =[](){
	 	cout << "Hello world!\n";
	};

	myFunction(message);


	for (int i = 1; i <=3; i++)
	{
		auto show = [i]() {
			cout << "Number: " << i << "\n";
		};	
		show();
	}
	return 0;
}


