#include <iostream>
#include <map>
using namespace std;

map<string, string> mp = {
    {"Algorithm", "204"},
    {"DataAnalysis", "207"},
    {"ArtificialIntelligence", "302"},
    {"CyberSecurity", "B101"},
    {"Network", "303"},
    {"Startup", "501"},
    {"TestStrategy", "105"}
};

int main() {
    int n;
    cin >> n;
    while (n--) {
        string seminar;
        cin >> seminar;
        cout << mp[seminar] << '\n';
    }
    return 0;
}