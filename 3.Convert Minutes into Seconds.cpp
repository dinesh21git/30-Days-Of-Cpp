#include <iostream>
using namespace std;

int convert(int minutes) {
	int seconds = 60;
	int result;
	result = minutes * seconds;
	
	return result;
}

int main() {
    int userInput;
    cout << "Enter Minutes To Convert Into Seconds: ";
    cin >> userInput;
    int result = convert(userInput);
    cout << result << " Seconds";
	return 0;
}
