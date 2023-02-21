#include "CircularQueue.h"
#include <iostream>

CircularQueue::CircularQueue() {
	m_rear = 0;
	m_front = 0;
}

bool CircularQueue::Empty() {
	return m_front == m_rear && m_arr[m_front] <= 0;
}

bool CircularQueue::Full() {
	return m_rear == m_front && m_arr[m_front] > 0;
}

void CircularQueue::Push(int val) {
	if (Full()) {
		std::cout << "Overflow....." << std::endl;
		return;
	}
	m_arr[m_front] = val;
	m_front = ++m_front % 10;
}

void CircularQueue::Pop() {
	if (Empty()) {
		std::cout << "Underflow....." << std::endl;
	}
	m_arr[m_rear] = -1;
	m_rear = ++m_rear % 10;
}

int CircularQueue::Peek() {
	return m_arr[m_front];
}