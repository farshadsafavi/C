#include <iostream>

using namespace std;
class LNode{
public:
    int data;
    LNode* next;

    LNode(int data, LNode *next){
        this->data = data;
        this->next = next;
    }
};

class LinkedList{
private:
    LNode *head = nullptr;
    LNode *tail = nullptr;
public:
    void add(int data){
        LNode *n = new LNode(data, head);
        head = n;
    }

    void print(){
        LNode *p = head;
        while(p != nullptr){
            cout << p->data<< endl;
            p = p->next;
        }
    }

    void printQ(){
        LNode *p = head;
        while(p != nullptr){
            cout << p->data<< endl;
            p = p->next;
        }
    }

};
int main()
{
    cout << "Linked List:" << endl;
    LinkedList ls;
    ls.add(5);
    ls.add(15);
    ls.add(10);
    ls.add(12);
    ls.print();

    return 0;
}
