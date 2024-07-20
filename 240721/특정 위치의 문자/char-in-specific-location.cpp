#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<char, int> umap;


int main() {

    umap['L'] = 0;
    umap['E'] = 1;
    umap['B'] = 2;
    umap['R'] = 3;
    umap['O'] = 4;
    umap['S'] = 5;

    char c;
    cin >> c;
    if(umap.find(c) != umap.end()){
        cout << umap[c];
    }
    else cout << "None";

    return 0;
}