#pragma once

class Stack {
public:
	bool Empty();
	void Push(char c);
	void Pop();
	int Top();
private:
	int m_size;
	char* m_arr = new char[m_size];
};
