#include "Lamp.h";

Lamp::Lamp() {
	m_state = OnState;
}

void Lamp::SwitchOn() {
	m_state = OnState;
}

void Lamp::SwitchOff() {
	m_state = OffState;
}

LampState Lamp::GetState() {
	return m_state;
}