#include <iostream>
#include <vector>
using namespace std;

class Node{
public:
    int value;
    Node* prev;
    Node* next;

    Node(int s){
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
    int count = 0;
    
    DLL(){
        head = new Node(-1);
        tail = new Node(-1);
        head->Set(NULL, tail);
        tail->Set(head, NULL);
    }

    void push_front(Node* node){
        head->next->prev = node;
        node->prev = head;
        node->next = head->next;
        head->next = node;

        count++;
    }

    void push_back(Node* node){
        tail->prev->next = node;
        node->next = tail;
        node->prev = tail->prev;
        tail->prev = node;

        count++;

    }

    Node* pop_front(){
        if(head->next == tail) return NULL;

        Node* ret = head->next;

        head->next = ret->next;
        ret->next->prev = head;
        
        count--;
        return ret;
    }

    Node* pop_back(){
        if(head->next == tail) return NULL;

        Node* ret = tail->prev;

        tail->prev = ret->prev;
        ret->prev->next = tail;

        count--;
        return ret;
    }

    void move_all_front(DLL* dll){
        Node* front = dll->head->next;
        Node* back = dll->tail->prev;

        if(front == dll->tail) return;

        head->next->prev = back;
        back->next = head->next;
        front->prev = head;
        head->next = front;
        
        count += dll->count;
        dll->erase_all();
    }

    void move_all_back(DLL* dll){
        Node* front = dll->head->next;
        Node* back = dll->tail->prev;

        if(front == dll->tail) return;

        tail->prev->next = front;
        front->prev = tail->prev;
        back->next = tail;
        tail->prev = back;

        count += dll->count;
        dll->erase_all();
    }

    void erase_all(){
        head->next = tail;
        tail->prev = head;
        count = 0;
    }

    void pprint(){
        cout << count << ' ';
        if(count == 0) 
        {
            cout << '\n';
            return;
        }

        Node* cur = head->next;
        while(cur != tail){
            cout << cur -> value << ' ';
            cur = cur->next;
        }
        cout << '\n';
    }


};


int n, k, q, a, b, com;
vector<DLL*> dlls;

int main() {
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> k >> q;
    dlls.resize(k+1);
    for(int i=1; i<=k; i++){
        dlls[i] = new DLL{};
    }
    for(int i=1; i<=n; i++){
        dlls[1]->push_back(new Node(i));
    }

    Node* tmpNode;
    for(int i=0; i<q; i++){
        cin >> com;
        switch(com){
            case 1:
                cin >> a >> b;
                tmpNode = dlls[a]->pop_front();
                if(tmpNode != NULL){
                    dlls[b]->push_back(tmpNode);
                }
                break;
            case 2:
                cin >> a >> b;
                tmpNode = dlls[a]->pop_back();
                if(tmpNode != NULL){
                    dlls[b]->push_front(tmpNode);
                }
                break;
            case 3:
                cin >> a >> b;
                if(a==b) break;
                dlls[b]->move_all_front(dlls[a]);
                break;
            case 4:
                cin >> a >> b;
                if(a==b) break;
                dlls[b]->move_all_back(dlls[a]);
                break;
        }
    }

    for(int i=1; i<=k; i++){
        dlls[i]->pprint();
    }
    return 0;
}