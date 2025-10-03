#include <iostream> 
using namespace std; 

int main(){

    string val_in;
    int counter = 0;
    cout << "Please enter a word: "; 
    cin >> val_in;


    for (char a: val_in){
        if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'){
            counter++;
        }
    }

    cout << "Number of vowels found: " << counter;

    return 0;
}