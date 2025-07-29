#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct ScoresRecord {
    string name;
    int kor_socre, eng_score, math_score;
};

vector<ScoresRecord> class_score;
int n;

void input() {
    string name; 
    int kor_socre, eng_score, math_score; 
    cin >> n;
    while(n--) {
        cin >> name >> kor_socre >> eng_score >> math_score;
        class_score.push_back({name, kor_socre, eng_score, math_score});
    }
}

bool cmp(ScoresRecord a, ScoresRecord b) {
    if (a.kor_socre == b.kor_socre &&
        a.eng_score == b.eng_score &&
        a.math_score == b.math_score) {
        return a.name < b.name;
    } else if (a.kor_socre == b.kor_socre &&
                a.eng_score == b.eng_score) {
        return a.math_score > b.math_score;
    } else if (a.kor_socre == b.kor_socre) {
        return a.eng_score < b.eng_score;
    } else {
        return a.kor_socre > b.kor_socre;
    }
}

void solution() {
    sort(class_score.begin(), class_score.end(), cmp);
    for (const auto& p : class_score) 
        cout << p.name << '\n';
}

void solve() {
    input();
    solution();
}

int main() {
    solve();
    return 0;
}