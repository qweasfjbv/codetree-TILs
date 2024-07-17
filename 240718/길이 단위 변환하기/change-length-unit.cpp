#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    double a = 9.2;
    double b = 1.3;

    cout << fixed << setprecision(1);

    cout << a << "ft = " << a * 30.48 <<"cm\n";
    cout << b << "mi = " << b * 160934 << "cm\n";
    return 0;
}