#include <iostream>
using namespace std;

bool isEqual(int num1, int num2) {
	if (num1 == num2){
		return true;
	}else {
		return false;
	}
}

int main() {
    int num1;
    int num2;
    
    cout << "Enter Num1: "<< endl;
    cout << "Enter Num2: ";
    cin >> num1 >> num2;
    int result = isEqual(num1,num2);
    cout << result;
	return 0;
}
