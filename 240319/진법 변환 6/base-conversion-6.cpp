#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int A, B;
    string N;
    cin >> A >> N >> B;

    int sum = 0;

    for(int i=0; i<N.length(); i++){
        if(N[N.length() - i - 1] >= '0' && N[N.length() - i - 1] <= '9'){
            sum += (N[N.length() - i - 1] - '0') * pow(A, i); 
        }
        else{
            sum += (N[N.length() - i - 1] - 'a' + 10) * pow(A, i); 
        }
    }

    int b = B;
    vector<int> list;
    while(sum != 0){
        list.push_back(sum % b);
        sum = sum / b;
    }



    for(int i=list.size() - 1; i>= 0; i--){
        if(list[i] >= 10) cout << (char)(list[i] - 10 + 'a');
        else cout << list[i];
    }
    
    return 0;
}