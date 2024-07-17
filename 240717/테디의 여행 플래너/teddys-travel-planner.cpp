#include <iostream>
#include <string>
using namespace std;

class Node{
public:
    string value;
    Node* prev;
    Node* next;

    Node(string s){
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
    Node* cur = NULL;
    
    DLL(){
        head = new Node("");
        tail = new Node("");
        head->Set(NULL, tail);
        tail->Set(head, NULL);
    }

    void push_back(string s){
        Node* newNode = new Node{s};

        if(cur == NULL) cur = newNode;
        newNode->prev = tail->prev;
        newNode->next = tail;
        tail->prev->next = newNode;
        tail->prev = newNode;
    }

    void func_1(){
        if(cur->prev == head && cur->next == tail) return;
        
        cur = cur->next;
        if(cur == tail) cur = head->next;
    }
    void func_2(){
        if(cur->prev == head && cur->next == tail) return;
        cur = cur->prev;
        if(cur == head) cur = tail->prev;
    }
    void func_3(){
        Node* er = cur->next;
        if(er == tail) er = head->next;
        if(er == cur) return;

        er->next->prev = er->prev;
        er->prev->next = er->next;
        delete(er);
        
    }
    void func_4(string s){
        Node* newNode =new Node{s};
        cur->next->prev = newNode;
        newNode->prev = cur;
        newNode->next = cur->next;
        cur->next = newNode;

    }

    Node* tmp;
    string rem1, rem2; 
    void pprint(){
        tmp = cur->prev; if(tmp == head) tmp = tail->prev;
        rem1 = tmp->value;
        tmp = cur->next; if(tmp == tail) tmp = head->next;
        rem2 = tmp->value;

        if(rem1 == rem2){
            cout << -1 << '\n';
        }
        else cout << rem1 << ' ' << rem2 << '\n';
    }

};

int n, q, com;
string s;
DLL dll;

int main(){

    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> q;

    for(int i=0; i<n; i++){
        cin >> s;
        dll.push_back(s);
    }

    for(int i=0; i<q; i++){
        cin >> com;
        switch(com){
            case 1:
            dll.func_1();
            dll.pprint();
            break;
            case 2:
            dll.func_2();
            dll.pprint();
            break;
            case 3:
            dll.func_3();
            dll.pprint();
            break;
            case 4:
            cin >> s;
            dll.func_4(s);
            dll.pprint();
            break;
        }
    }

}