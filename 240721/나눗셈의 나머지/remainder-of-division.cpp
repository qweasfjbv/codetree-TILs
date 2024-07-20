#include <iostream>
using namespace std;

int arr[10]= {0,0,0,0,0,0,0,0,0,0};

int main() {
    int a, b;
    cin >> a>> b;

    while(a > 1){
        arr[a%b]++;
        a = a/b;
    }

    int sum = 0;
    for(int i=0; i<10; i++){
        sum += arr[i] * arr[i];
    }
    cout << sum;
    return 0;
}