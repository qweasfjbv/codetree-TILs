#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

class Node{
public:
  Node* next;
  Node* prev;
  string value;

  Node(string s){
    value = s;
  } 
    
    void erase(){
        next->prev = prev;
        prev->next = next;    
    }

};

class DLL{
public:
    Node* head;
    Node* tail;

    DLL(){
        head = new Node{""};
        tail = new Node{""};
        head->prev = tail->next =NULL;
        head->next = tail; tail->prev = head;
    }

    void push_back(Node* node){
        tail->prev->next = node;
        node->prev = tail->prev;
        node->next = tail;
        tail->prev = node;
    }

    Node* cur;
    void pprint(){
        cur = head->next;
        while(cur != NULL){
            cout << cur->value << ' ';
            cur = cur->next;
        }
        cout << '\n';
    }
};

int n, m, q;
int com;
string as, bs, cs;
string s;

unordered_map<string, int> umap;
vector<Node *> nodes;
vector<DLL *> lines;

Node* node1;
Node* node2;
Node* node3;

void func_1(int a, int b){
    node1 = nodes[a];
    node2 = nodes[b];

    node1->erase();
    node2->prev->next = node1;
    node1->prev = node2->prev;
    node1->next = node2;
    node2->prev = node1;
}

void func_2(int a){
    nodes[a]->erase();

    delete(nodes[a]);
}

void func_3(int a, int b, int c){
    node1 = nodes[a]; node2 = nodes[b]; node3 = nodes[c];

    node1->prev->next = node2->next;
    node2->next->prev = node1->prev;

    node1->prev = node3->prev;
    node2->next = node3;

    node3->prev->next = node1;
    node3->prev = node2;
}

int x;
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> m >> q;
    x = n/m;

    for(int i=0; i<m; i++){
        lines.push_back(new DLL{});
    }
    for(int i=0; i<n; i++){
        cin >> s;
        nodes.push_back(new Node{s});  umap[s] = i;
        lines[(i)/x]->push_back(nodes[i]);
    }

    for(int i=0; i<m; i++){
        cin >> com;
        switch(com){
            case 1:
                cin >> as >> bs;
                func_1(umap[as], umap[bs]);
            break;
            case 2:
                cin >> as;
                func_2(umap[as]);
            break;
            case 3:
                cin >> as >> bs >> cs;
                func_3(umap[as], umap[bs], umap[cs]);
            break;
        }
    }

    for(int i=0; i<m; i++){
        if(lines[i]->head->next == lines[i]->tail) cout << -1 << '\n';
        else{
            lines[i]->pprint();
        }
    }

    return 0;
}