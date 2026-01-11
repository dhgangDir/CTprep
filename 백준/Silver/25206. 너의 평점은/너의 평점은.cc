#include <bits/stdc++.h>
using namespace std;

vector<string> split(const string& input, string delimiter) {
    vector<string> rt;
    long long start = 0;
    long long end = input.find(delimiter);

    while (end != string::npos) {
        rt.push_back(input.substr(start,end - start));
        start = end + delimiter.size();
        end = input.find(delimiter, start);
    }
    rt.push_back(input.substr(start));

    return rt;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    map<string, double> mp = {
        {"A+", 4.5}, {"A0", 4.0},
        {"B+", 3.5}, {"B0", 3.0},
        {"C+", 2.5}, {"C0", 2.0},
        {"D+", 1.5}, {"D0", 1.0},
        {"F", 0.0}
    };

    string info;
    double scr = 0, std = 0;
    while (getline(cin, info)) {
        vector<string> vs = split(info, " ");
        if (vs[2] != "P") {
            scr += (mp[vs[2]] * stod(vs[1]));
            std += stod(vs[1]);
        }
    }

    cout << fixed;
    cout.precision(6);
    cout << scr / std << "\n";

    return 0;
}