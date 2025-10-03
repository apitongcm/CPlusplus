#include <iostream>
#include <string> 
using namespace std;

int reverseIt(string myWord){
    
    int counter = myWord.size();
  
    for(int i = counter; i >= 0; i--){
        cout << myWord[i];
    }
    return 0;
}

int main(){
    string myInput;
    cout << "Please input a phrase: ";
    getline(cin,myInput);
    reverseIt(myInput);
    return 0;
}