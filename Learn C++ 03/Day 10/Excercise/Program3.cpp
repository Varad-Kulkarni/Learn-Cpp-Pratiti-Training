#include <iostream>
#include <assert.h>
#include <crtdbg.h>
#include <stdexcept>
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

int At(List& ls, int index) {
    if (index >= ls.size) {
        throw invalid_argument("Index hsould be in range...");
    }

    List::Node* temp = ls.head;
    while (index-- > 0) {
        temp = temp->next;
    }
    return temp->data;
}

void DeleteList(List& ls) {
    delete ls.head;
    delete ls.tail;
}

int main() {
    int n[]{ 5, 3, 2, -1, 4, 2, 7, 9, 5, 3 }, result = 0.0;
    List list;
    CreateList(list);
    for (int i = 0; i < sizeof(n) / sizeof(int); ++i) {
        PushBack(list, n[i]);
    }
    try {
        for (int i = 0; i < list.size; ++i) {
            result = At(list, i);
            assert(result == n[i]);
        }
    }
    catch (std::out_of_range& e) {
        std::cout << "Position is out of range." << std::endl;
    }
    DeleteList(list);
    _CrtDumpMemoryLeaks();
}
