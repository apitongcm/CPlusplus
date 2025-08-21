#include <iostream> 
using namespace std;

int main(){

//variables 

//variable type string
string food = "Adobo";

//pointer variable
string* ptr = &food;

//output of value of Food (Adobo) 
cout << food << "\n";

//output memory address of Food in Hex
cout << &food << "\n";

//output memory  address with pointer 
cout << ptr << "\n";

//dereference
cout << *ptr << "\n";

//changing value 
*ptr = "Blueberry Cheesecake";

//check new value 
cout << *ptr << "\n";
cout << ptr << "\n";

//manage memory by yourself 
int* ptr = new int;
*ptr = 35;
cout << *ptr;

delete ptr;


}
