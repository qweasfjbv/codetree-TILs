#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
vector<int> v;
for(int i=0; i<n;i++){
    int a;
    cin >> a;
    if(a%2==0) v.push_back(a);
}
for(int i=v.size()-1; i>=0; i--){
    cout << v[i] << ' ';
}
    return 0;
}