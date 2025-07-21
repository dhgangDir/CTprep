#include <iostream>

using namespace std;

int x, y, date;
string days[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

int main() {
    cin >> x >> y;

    for (int i = 1; i < x; i++) {
        switch (i) { 
            case 1: case 3: case 5: case 7: 
            case 8: case 10: case 12:
                date += 31;
                break;
            case 2:
                date += 28;
                break;
            case 4: case 6: case 9: case 11:
                date += 30;
                break;
        }
    }
    date += y;

    cout << days[date % 7] << '\n';

    return 0;
}