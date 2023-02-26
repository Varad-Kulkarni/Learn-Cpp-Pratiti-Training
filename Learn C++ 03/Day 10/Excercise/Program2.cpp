#include <iostream>
#include <crtdbg.h>
#include <assert.h>
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

int Min(List& ls) {
    List::Node* temp = ls.head;
    int min = INT_MAX;
    while (temp != nullptr) {
        if (temp->data < min) {
            min = temp->data;
        }
        temp = temp->next;
    }
    return min;
}

void DeleteList(List& ls) {
    delete ls.head;
    delete ls.tail;
}

int main() {
    int n[]{ 5, 3, 2, -1, 4, 2, 7, 9, 5, 3 };
    List list;
    CreateList(list);
    for (int i = 0; i < sizeof(n) / sizeof(int); ++i) {
        PushBack(list, n[i]);
    }
    int result = Min(list);
    assert(result == -1);
    DeleteList(list);
    _CrtDumpMemoryLeaks();
}
