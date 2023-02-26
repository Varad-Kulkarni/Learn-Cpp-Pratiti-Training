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

void RemoveElement(List& ls, int index) {
    if (ls.size == 0) {
        throw invalid_argument("Invalid operation");
    }
    if (index == 0) {
        List::Node* temp = ls.head;
        ls.head = temp->next;
        delete temp;
        temp = nullptr;
        ls.size--;
    }
    else if (index == ls.size - 1) {
        List::Node* temp = ls.head;
        int tempSize = ls.size;
        while (tempSize != ls.size - 2) {
            temp = temp->next;
        }
        List::Node* t = temp;
        t = t->next;
        temp->next = nullptr;
        delete t;
        t = nullptr;
        ls.size--;
    }
    else {
        int t = index - 1;
        List::Node* temp = ls.head;
        while (t-- > 0) {
            temp = temp->next;
        }
        List::Node* del = temp;
        del = del->next;
        temp->next = temp->next->next;
        del->next = nullptr;
        delete del;
        del = nullptr;
        ls.size--;
    }
}


int main() {
    int n[]{ 2, 4, 6, -1, 4, 2, 7, 9, 5, 3 }, result = 0.0;
    List list;
    CreateList(list);
    for (int i = 0; i < sizeof(n) / sizeof(int); ++i) {
        PushBack(list, n[i]);
    }
    try {
        for (int i = 0; i < list.size; ++i) {
            result = At(list, i);
            if (result % 2 == 0) {
                RemoveElement(list, i);
            }
            assert(result == n[i]);
        }
    }
    catch (std::out_of_range& e) {
        std::cout << "Position is out of range." << std::endl;
    }
    DeleteList(list);
    _CrtDumpMemoryLeaks();
}
