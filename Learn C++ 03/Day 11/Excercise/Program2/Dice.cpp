#include <random>
#include "Dice.h"

Dice::Dice() {
	m_facevalue = 1;
}

void Dice::Roll() {
	m_facevalue = rand() % 6 + 1;
}

int Dice::GetFaceValue() const{
	return m_facevalue;
}