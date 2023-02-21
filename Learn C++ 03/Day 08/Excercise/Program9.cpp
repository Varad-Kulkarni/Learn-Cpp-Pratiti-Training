#include <assert.h>
#include <iostream>

void convert(int& h, int& m, int& s) {
    int seconds = s;
    s = s % 3600;
    h = seconds / 3600;
    s = s % 60;
    m = seconds / 60;
}

int main() {
    int hh = 0, mm = 0, ss = 1432;
    convert(hh, mm, ss);
    //std::cout << hh << " " << mm << " " << ss;
    assert(hh == 0 && mm == 23 && ss == 52);
}
