#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string a, b, c;
    cin >> a>> b >> c;
    int i, j, k;
    i = a.size();
    j = b.size();
    k = c.size();

    int x = abs(i-j);
    int y = abs(j-k);
    int z = abs(k-i);

    cout << max(x, max(y, z));

    return 0;
}