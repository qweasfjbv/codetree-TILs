#include <iostream>
#include <iomanip>
using namespace std;

int arr1[2] = {0,0};
int arr2[4] = {0,0,0,0};
int sum =0;

int main() {
    
    int n;

    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            cin >> n;
            arr1[i]+=n;
            arr2[j]+=n;
            sum += n;
        }
    }

    cout << fixed << setprecision(1);
    for(int i=0; i<2; i++){
        cout << (double)arr1[i]/4 << ' ';
    }
    cout << endl;


    for(int i=0; i<4; i++){
        cout << (double)arr2[i]/2 << ' ';
    }


    cout << endl;

    cout << (double)sum/8;

    return 0;
}