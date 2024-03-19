#include <iostream>
using namespace std;

int main() {
    int arr[26];
    for(int i=0; i<26; i++) arr[i] = 0;
    char a;
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a;
        if(!(a-'a' >= 0 && a-'a' < 26)) break;
        
        arr[a-'a']++;
    }

    for(int i=0; i<26; i++){
        if(arr[i] == 0) continue;

        cout << (char)(i + 'a') << " : " << arr[i] << '\n';
    }

    return 0;
}