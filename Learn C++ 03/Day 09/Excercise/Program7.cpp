#include <assert.h>
#include <iostream>
#include <set>
using namespace std;

struct Set {
    int size;
    int* values;
};

void Union(Set& s, Set& t, Set* u) {
    /*int max = 0;
    for (int i = 0; i < s.size; i++) {
        if (s.values[i] > max) {
            max = s.values[i];
        }
    }
    for (int i = 0; i < t.size; i++) {
        if (t.values[i] > max) {
            max = t.values[i];
        }
    }
    bool* visited = new bool[max + 1];
    for (int i = 0; i < s.size; i++) {
        visited[s.values[i]] = true;
    }
    for (int i = 0; i < t.size; i++) {
        visited[t.values[i]] = true;
    }
    int count = 0;
    for (int i = 0; i <= max; i++) {
        if (visited[i]) {
            count++;
        }
    }
    u->values = new int[count];
    int k = 0;
    for (int i = 0; i <= max; i++) {
        if (visited[i]) {
            u->values[k++] = i;
        }
    }
    delete[] visited;
    visited = nullptr;*/

    set<int> Set;
    for (int i = 0; i < s.size; i++) {
        Set.insert(s.values[i]);
    }
    for (int i = 0; i < t.size; i++) {
        Set.insert(t.values[i]);
    }
    int n = Set.size();
    u->size = n;
    int k = 0;
    for (int i : Set) {
        u->values[k++] = i;
    }
}

void Intersect(Set& s, Set& t, Set* u) {
    /*int max1 = 0, max2 = 0;
    for (int i = 0; i < s.size; i++) {
        if (max1 > s.values[i]) {
            max1 = s.values[i];
        }
    }
    for (int i = 0; i < t.size; i++) {
        if (max2 > t.values[i]) {
            max2 = t.values[i];
        }
    }

    if (max1 > max2) {
        bool* visited1 = new bool[max1 + 1];
        bool* visited2 = new bool[max2 + 1];
        int count = 0;
        for (int i = 0; i < t.size; i++) {
            visited1[s.values[i]] = true;
            visited2[t.values[i]] = true;
        }
        for (int i = 0; i <= max2; i++) {
            if (visited1[i] && visited2[i]) {
                count++;
            }
        }
        u->values = new int[count];
        int k = 0;
        for (int i = 0; i <= max2; i++) {
            if (visited1[i] && visited2[i]) {
                u->values[k++] = i;
            }
        }
        delete[] visited1;
        visited1 = nullptr;
        delete[] visited2;
        visited2 = nullptr;
    }

    bool* visited1 = new bool[max1 + 1];
    bool* visited2 = new bool[max2 + 1];
    int count = 0;
    for (int i = 0; i < s.size; i++) {
        visited1[s.values[i]] = true;
        visited2[t.values[i]] = true;
    }
    for (int i = 0; i <= max1; i++) {
        if (visited1[i] && visited2[i]) {
            count++;
        }
    }
    u->values = new int[count];
    int k = 0;
    for (int i = 0; i <= max1; i++) {
        if (visited1[i] && visited2[i]) {
            u->values[k++] = i;
        }
    }
    delete[] visited1;
    visited1 = nullptr;
    delete[] visited2;
    visited2 = nullptr;*/

    set<int> Set;

    for (int i = 0; i < s.size; i++) {
        int temp = s.values[i];
        for (int j = 0; j < t.size; j++) {
            if (t.values[i] == temp) {
                Set.insert(temp);
                break;
            }
        }
    }
    int n = Set.size();
    u->size = n;
    int k = 0;
    for (int i : Set) {
        u->values[k++] = i;
    }
}

int main() {
    Set s;
    s.size = 5;
    s.values = new int[s.size] { 1, 2, 3, 3, 4 };
    Set t;
    t.size = 7;
    t.values = new int[t.size] { 1, 3, 4, 5, 5, 5, 9, 0 };
    Set u;
    Union(s, t, &u);
    int union_result[]{ 1, 2, 3, 4, 5, 9, 0 };
    for (size_t i = 0; i < u.size; ++i) {
        assert(i < sizeof(union_result) / sizeof(int));
        assert(u.values[i] == union_result[i]);
    }
    Intersect(s, t, &u);
    int intersect_result[]{ 1, 3, 4 };
    for (size_t i = 0; i < u.size; ++i) {
        assert(i < sizeof(intersect_result) / sizeof(int));
        assert(u.values[i] == intersect_result[i]);
    }
    // write dynamic object release code here
    // Check if dynamically allocated memory is released
    _CrtDumpMemoryLeaks();
}
