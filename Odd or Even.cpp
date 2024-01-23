#include <iostream>
using namespace std;

string oddOrEven(int num) {
    if (num % 2 == 0 ){
    return "Even";
} else {
    return"Odd";
}

}


int main () {
    int inputNumber = 10;
    string result = oddOrEven(inputNumber);
    cout << result;
    
    return 0;
}
