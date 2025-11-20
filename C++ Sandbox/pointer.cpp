#include <iostream>
using namespace std; 

int main(){

   int x = 5, y = 12; 
   int *p = &x; 
   int *q = &y;

   
   *p =  *p + 3; //8 
    cout << *p  << "\n";

   // *q = *p + q; //error due to different data type. (*p - int, q - memory address)
    cout << *q << "\n"; // dereference
    cout << q << "\n";

    p = q; 
    *p = *p - 5; //7
    cout << *p << "\n";

    cout << "x = " << x << ", y = " << y; // change value of x & y, based from pointer manipulations.
   return 0;

}