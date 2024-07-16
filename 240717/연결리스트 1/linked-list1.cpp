#include <iostream>
#include <string>
using namespace std;

class Node{
public:
    string value;
    Node* prev;
    Node* next;

    Node(string s = ""){
         value = s;
    }

    void Set(Node* p, Node* n){
        prev = p; next = n;
    }
};

class DLL{
public:
    Node* head;
    Node* tail;
    Node* curNode;
    
    DLL(string s){
        curNode = new Node(s);
        head = new Node("");
        tail = new Node("");
        curNode->Set(head, tail);
        head->Set(NULL, curNode);
        tail->Set(curNode, NULL);
    }

    void func_1(string s){
        Node* newNode = new Node(s);
        newNode->Set(curNode->prev, curNode);
        curNode->prev->next = newNode;
        curNode->prev = newNode;
        printNode();
    }

    void func_2(string s){
        Node* newNode = new Node(s);
        newNode->Set(curNode, curNode->next);
        curNode->next->prev = newNode;
        curNode->next = newNode;
        printNode();
    }

    void func_3(){
        if(curNode->prev != head) curNode = curNode->prev;
        printNode();
    }

    void func_4(){
        if(curNode->next != tail) curNode = curNode->next;
        printNode();
    }

    void printNode(){
        if(curNode->prev != head){
            cout << curNode->prev->value << ' ';
        }
        else cout << "(Null)" << ' ';

        cout << curNode->value << ' ';

        if(curNode->next != tail){
            cout << curNode->next->value << '\n';
        }
        else cout << "(Null)" << '\n';
    }

};


int n, a;
string s;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> s;
    DLL dll{s};

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        switch(a){
            case 1:
                cin >> s;
                dll.func_1(s);
                break;
            case 2:
                cin >> s;
                dll.func_2(s);
                break;
            case 3:
                dll.func_3();
                break;
            case 4:
                dll.func_4();
                break;
        }
    }

    return 0;
}