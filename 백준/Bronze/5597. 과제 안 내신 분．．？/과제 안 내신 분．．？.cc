#include <iostream>
#include <algorithm>
using namespace std;

const int students = 30;

int main() {
    bool* arr = new bool[students+1];
    fill(arr, arr + students + 1, false);
    int number_of_students;
    for (int i = 0; i < students - 2; i++) {
        cin >> number_of_students;
        arr[number_of_students] = true;
    }

    for (int i = 1; i <= students; i++)
        if (!arr[i]) cout << i << "\n";

    delete[] arr;

    return 0;
}