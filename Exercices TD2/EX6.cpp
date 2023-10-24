#include <iostream>
using namespace std;

// EX6 

void incrementer(int &num1) {
    num1++;
}

void permuter(int &var1, int &var2) {
    int temp = var1;
    var1 = var2;
    var2 = temp;
}

int main() {
    int num1 = 2;
    int var1 = 5, var2 = 10;


    incrementer(num1);
    cout << num1 << endl;

    permuter(var1,var2);
    cout << var1 << endl;
    cout << var2 << endl;
    return 0;
}