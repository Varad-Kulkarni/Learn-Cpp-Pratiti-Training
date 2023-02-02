#include <assert.h>
#include <iostream>
using namespace std;

enum DayNumber {
    Sun,
    Mon,
    Tue,
    Wed,
    Thr,
    Fri,
    Sat
};

DayNumber dow(int day, int month, int year, DayNumber str = Sun) {
    year = year % 400;
    year = year - 1;

    int ans = 0;
    for (int i = 1; i <= year; i++) {
        if (i % 4 == 0) {
            ans += 2;
        }
        else {
            ans++;
        }
    }

    int a[] = { 3, 0, 3, 2, 3, 2, 3, 3, 2, 3, 2, 3 };
    int mo = 0;
    for (int i = 0; i < month - 1; i++) {
        mo += a[i];
    }
    ans += mo;

    year++;
    if (year % 4 == 0) {
        ans++;
    }
    ans += day % 7;

    if (str == Mon) {
        ans--;
        if (ans == 6) {
            return Sun;
        }
    }

    //cout << ans;
    ans = ans % 7;

    switch (ans) {
    case 0:
        return Sun;

    case 1:
        return Mon;

    case 2:
        return Tue;

    case 3:
        return Wed;

    case 4:
        return Thr;

    case 5:
        return Fri;

    case 6:
        return Sat;
    }
}

int main() {
    DayNumber result = Sun;
    result = dow(12, 9, 2020);
    assert(result == 6);
    result = dow(12, 9, 2020, Mon); // Mon as start of the week
    assert(result == 5); // Note change in the day number
}
