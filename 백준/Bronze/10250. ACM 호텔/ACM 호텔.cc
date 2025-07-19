#include <iostream>

using namespace std;

int t;

int main() {
    int h, w, n;
    int floor, room;

    cin >> t;
    while (t--) {
        cin >> h >> w >> n;
        floor = n % h ? n % h : h;
        room = n % h ? n / h + 1 : n / h;
        printf("%d%02d\n", floor, room);
    }
    return 0;
}