#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    if(a<=2) cout << "Winter";
    else if(a<=5) cout << "Spring";
    else if(a<=8) cout << "Summer";
    else if(a<=11) cout << "Fall";
    else cout << "Winter";
    return 0;
}