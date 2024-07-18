#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char c;
    double a, b;

    cin >> c >> a >> b;
    cout  << fixed << setprecision(2) << c << '\n' << a << '\n' << b;
    return 0;
}