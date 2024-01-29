#include <iostream>
using namespace std;

int main()
{
    int num, count , sum = 0;
    
    cout << "Enter an positve integer: ";
    cin >> num;
    
    for (count =1 ; count <= num; count++) {
        sum += count;
    }
    
    cout << sum;

    return 0;
}
