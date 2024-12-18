#include <cstring>
#include <assert.h>
#include "CircularQueue.h"

int main() {
    int data[] = { 3, 9, 3, 2, 4, 8, 7, 0, 1, 8 };
    CircularQueue queue;

    // Following test case checks
    // - Behaviour of Empty and Full member functions
    //   when the queue is empty.
    assert(queue.Empty() == true);
    assert(queue.Full() == false);

    // Following code populates circular queue with data
    int len = sizeof(data) / sizeof(int);
    for (int i = 0; i < len; ++i) {
        queue.Push(data[i]);
    }

    // Following test case checks
    // - Behaviour of Empty and Full member functions
    //   when the queue contains data.
    assert(queue.Empty() == false);
    assert(queue.Full() == true);

    // Following test case checks
    // - Indirectly action of Push member function
    // - Directly action of Pop and Peek member functions
    for (int i = 0; i < len; ++i) {
        int temp = queue.Peek();
        assert(queue.Peek() == data[i]);
        queue.Pop();
    }

    // Following test case checks
    // - Behaviour of Empty and Full member functions
    //   after the queue is made empty.
    assert(queue.Empty() == true);
    assert(queue.Full() == false);
}
