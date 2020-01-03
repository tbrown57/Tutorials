// Use the correct function to read a line of text, input by user. 

#include <iostream>
#include <string>

using namespace std; 

int main() {
	string fullName; 
	cout << "Type your full name: "; 
	getLine (cin, fullName);
	cout << "Your name is: " << fullName;
	return 0; 
}