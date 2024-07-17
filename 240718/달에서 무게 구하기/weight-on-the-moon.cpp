#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int a = 13;
    double b = 0.165;

    cout << a << " * " << fixed << setprecision(6) << b << " = " << a*b;

    return 0;
}