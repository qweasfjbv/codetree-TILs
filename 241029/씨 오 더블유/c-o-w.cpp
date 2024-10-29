#include <iostream>
using namespace std;
typedef long long int ll;

ll arr[3] = {0,0,0};

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);

    int n; cin>>n;
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        switch(s[i]){
            case 'C':
            arr[0]++;
            break;
            case 'O':
            arr[1] += arr[0];
            break;
            case 'W':
            arr[2] += arr[1];
            break;
        }
    }

    cout << arr[2];
    return 0;
}