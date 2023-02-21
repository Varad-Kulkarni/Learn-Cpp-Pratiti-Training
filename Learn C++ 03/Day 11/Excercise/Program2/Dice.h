#pragma once

class Dice {
public:
	Dice();
public:
	void Roll();
	int GetFaceValue() const;  // It should be const...
private:
	int m_facevalue;  // It should be m_facevalue
};
