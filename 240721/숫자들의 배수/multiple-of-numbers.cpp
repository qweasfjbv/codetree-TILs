#include <iostream>
using namespace std;

int main() {int n;
int cnt =0;
cin >> n;
for(int i=1; i<=20; i++){
    cout<< n * i << ' ';
    if(i*n % 5 ==0){
        cnt++;
        if(cnt==2) return 0;
    }
}
    return 0;
}