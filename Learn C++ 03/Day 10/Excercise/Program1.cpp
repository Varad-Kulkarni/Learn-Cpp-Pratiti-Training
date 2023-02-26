#include <iostream>
#include <crtdbg.h>
using namespace std;

struct List {
    struct Node {
        int data;
        Node* next;
    };
    Node* head;
    Node* tail;
    int size;
};

void CreateList(List& ls) {
    ls.head = nullptr;
    ls.tail = nullptr;
    ls.size = 0;
}

void PushBack(List& ls, int val) {
    List::Node* temp = new List::Node();
    temp->data = val;
    temp->next = nullptr;
    if (ls.head == nullptr) {
        ls.head = temp;
        ls.tail = temp;
        ls.size++;
    }
    else if (ls.head == ls.tail && ls.head != nullptr) {
        ls.head->next = temp;
        ls.tail = temp;
        ls.size++;
    }
    else {
        List::Node* temp1 = ls.head;
        while (temp1->next != nullptr) {
            temp1 = temp1->next;
        }
        temp1->next = temp;
        ls.tail = temp;
        ls.size++;
    }
}

void PrintList(List& ls) {
    List::Node* temp = ls.head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void DeleteList(List& ls) {
    delete ls.head;
    delete ls.tail;
}

int main() {
    int n[]{ 5, 3, 2, -1, 4, 2, 7, 9, 5, 3 };
    List list;
    CreateList(list); // CreateList initializes the list object
    for (int i = 0; i < sizeof(n) / sizeof(int); ++i) {
        PushBack(list, n[i]); // PushBack places item at the of the list
    }
    PrintList(list); // prints items in the list
    DeleteList(list); // DeleteList releases all the node stored in list
    _CrtDumpMemoryLeaks(); // this function shouldn’t report memory leakage
}
