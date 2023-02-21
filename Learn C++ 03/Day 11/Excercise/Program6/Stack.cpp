#include "Stack.h"

bool Stack::Empty() {
	return m_size == 0 ? true : false;
}

void Stack::Push(char ch) {
	m_size++;
	m_arr[m_size - 1] = ch;
}

void Stack::Pop() {
	m_size--;
}

int Stack::Top() {
	return m_arr[m_size - 1];
}