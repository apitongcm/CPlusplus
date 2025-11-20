#include <iostream>
#include <ctime>
using namespace std;

int main(){
	
//variables
	time_t timestamp = time(NULL);
	struct tm datetime = *localtime(&timestamp);
	char output[50];

	strftime(output,50, "%B %e, %Y", &datetime);
	cout << output << "\n";



return 0;
}
