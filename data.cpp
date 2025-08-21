#include <iostream>
using namespace std; 

int main(){

//variable
string fullName; 
int numbers;
int revNumbers = 0;
int myArr[10] = {10,20,30,40,50,60,70,80,90,100};


cout << "Type your full name: ";
getline( cin, fullName);
cout << "Your name is : " << fullName << endl;

//Using shorthand if else statement
string greetings = (fullName == "Carl") ? "Name Recognized \n " : "Name not recognized \n ";
cout << greetings;


//Familiarize with using loop in c++
cout << "Enter a number : ";
cin >> numbers;

//Using While 
while(numbers){
	revNumbers = revNumbers * 10 + numbers % 10; 
	numbers /= 10;
}

cout <<  "\n  Revesersed numbers: " << revNumbers << "\n";


//Using for 
for(int i = 1; i <=3; i++){
	for(int j = 1; j <=3; j++){
		cout << i * j << " ";
	} 
	cout << "\n";
}

//Using for each
for(int i: myArr){
	cout << i << "\n";
}

//Using for each in a string (since string is an array of Characters)
for(char c: fullName){
	cout << c << "\n";
}



return 0;
}
