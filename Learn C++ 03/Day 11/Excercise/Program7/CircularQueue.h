#pragma once

class CircularQueue {
public:
	CircularQueue();
public:
	bool Empty();
	bool Full();
	void Push(int x);
	void Pop();
	int Peek();
private:
	int m_rear;
	int m_front;
	int m_arr[8];
};
