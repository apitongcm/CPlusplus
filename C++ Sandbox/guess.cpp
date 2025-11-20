#include <iostream>
#include <string>
using namespace std; 


int main(){


//variables 
int numGuests;
cout << "How many guests? ";
cin >> numGuests;


//check if input is valid
string valid = (numGuests <= 0) ? "Number of guests must be at least 1. \n" : "";
cout << valid;

//create memory for x guest (array of strings)
string* guests = new string[numGuests];

//ignore leftover newline character after reading numGuests
cin.ignore();

//Enter guess names
for(int i =0; i < numGuests; i++){
	cout << "Enter name for guest " << (i+1) << ": ";
	getline(cin, guests[i]); //Read full name ( including white space)
}




//Show all guests
cout << "\n Guests checked in: \n";
for (int i = 0; i < numGuests; i++){
	cout << guests[i] << "\n";
}

//clean up memory
delete[] guests;
return 0;

}
