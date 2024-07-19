#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int t = (i%2!=0 ? n-(i-1)/2 : 1+(i/2));
        for(int j=0; j<t; j++){
            cout << "* ";
        }
        cout << "\n";
    }
    for(int i=n-1; i>=0; i--){
        int t = (i%2!=0 ? n-(i-1)/2 : 1+(i/2));
        for(int j=0; j<t; j++){
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}