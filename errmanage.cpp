#include <iostream>
using namespace std;

int main(){

	try{
		int age =21;
		 (age >=18)? cout << "Access Granted." : throw(age);
	}
	
	catch(int age) {
		cout << "Access Denied";
	}


return 0;
}
