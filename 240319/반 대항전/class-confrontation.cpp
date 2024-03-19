#include <iostream>
#include <cmath>
using namespace std;

int arr[4][101];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n; cin>> n;
    int sum =0;
    int tmp;
    int _max = -1;
    string s;
    char rem;
    for(int i=0; i<4; i++){
        cin >> s;
        sum =0;
        for(int i=0; i<n; i++){
            cin >> tmp;
            sum += tmp;
        }
        cout << (char)(i + 'A') << " - " << sum << '\n';
        if(_max < sum){
            _max = sum;
            rem = (char)(i+'A');
        }
        
    }
    cout << "Class " << rem << " is winner!";

    return 0;
}