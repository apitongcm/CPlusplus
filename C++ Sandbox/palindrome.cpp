#include <iostream> 
using namespace std; 


bool isPalindrome(string inWord){
    int left = 0;
    int right =inWord.size() - 1; 
    bool result; 

    while(left < right){
        result = (inWord[left] != inWord[right])? false: true; 
        if (result ==false) {return false;}
        left++; right--; 
    }
    return true; 
}



int main(){ 
    string myString;
    cout << "Please enter a word: "; 
    cin >> myString; 


    isPalindrome(myString) ? cout << "Palindrome!" : cout << "Not Palindrome";
    return 0; 
}