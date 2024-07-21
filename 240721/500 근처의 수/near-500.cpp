#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int max1, max2;
    max1=0;
    max2 = 1001;

    int n;
    for(int i=0; i<10; i++){
        cin >> n;
        if(n<500){
            max1 = max(max1, n);
        }
        else if(n>500){
            
            max2 = min(max2, n);
        }
    }
    cout << max1 << ' ' << max2;

    return 0;
}