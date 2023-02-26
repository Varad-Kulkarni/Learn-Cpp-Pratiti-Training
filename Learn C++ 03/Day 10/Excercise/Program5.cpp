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
    ls.size = 0;
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

void AppendList(List& ls1, List& ls2) {
    List::Node* temp1 = ls1.head;
    List::Node* temp2 = ls2.head;

    while (temp1->next != nullptr) {
        temp1 = temp1->next;
    }
    int tempSize = ls1.size + ls2.size;
    while (temp2 != nullptr) {
        PushBack(ls1, temp2->data);
        temp2 = temp2->next;
    }
    ls1.size = tempSize;
    DeleteList(ls2);
}


int main() {
    int a[]{ 5, 3, 2, -1, 4, 2, 7, 9, 5, 3 };
    List firstList;
    CreateList(firstList);
    for (int i = 0; i < sizeof(a) / sizeof(int); ++i) {
        PushBack(firstList, a[i]);
    }
    int b[]{ 1, 5, 2, 6, 1, 9, 3, 4, 2, 2, 9 };
    List secondList;
    CreateList(secondList);
    for (int i = 0; i < sizeof(b) / sizeof(int); ++i) {
        PushBack(secondList, b[i]);
    }
    AppendList(firstList, secondList);
    assert(firstList.size == 21);
    assert(secondList.size == 0);
    int c[]{ 5, 3, 2, -1, 4, 2, 7, 9, 5, 3, 1, 5, 2,
          6, 1, 9, 3, 4, 2, 2, 9 };
    for (int i = 0; i < sizeof(c) / sizeof(int); ++i) {
        assert(At(firstList, i) == c[i]);
    }
    DeleteList(firstList);
    _CrtDumpMemoryLeaks();
}
