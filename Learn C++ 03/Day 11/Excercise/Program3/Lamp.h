#pragma once

enum LampState {
    OffState,
    OnState
};

class Lamp {
private:
    LampState m_state;
public:
    Lamp();
public:
    void SwitchOn();
    void SwitchOff();
    LampState GetState();
};