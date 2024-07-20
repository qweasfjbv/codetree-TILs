#include <iostream>
using namespace std;

int main() {
    int a;
    int sum =0;
    for(int i=1; i<=10; i++)
    {
        cin >> a;
        if(i==3 || i==5 || i==10){
            sum += a;
        }
    }
    cout << sum;
    return 0;
}