#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a>> b;
    if(a.size() > b.size()){

        cout << a << ' '<< a.size();
    }
    else if(a.size() < b.size()){
        cout << b << ' ' << b.size();
    }
    else{
        cout << "same";
    }


    return 0;
}