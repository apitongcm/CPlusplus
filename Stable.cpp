#include <iostream> 
#include <string> 
using namespace std; 

int main(){

    //Static participant
    string Boys[4][4] = {
        {"Carla", "Bea", "Denise","Ann"},
        {'Bea','Denise','Carla', 'Ann'},
        {'Bea','Ann', 'Denise','Carla'},
        {'Denise','Ann', 'Carla','Bea'}
    };

    cout << Boys[0][3];

}