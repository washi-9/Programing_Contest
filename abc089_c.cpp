#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    int N;
    cin >> N;
    unordered_map<char, int> count = {{'M', 0}, {'A', 0}, {'R', 0}, {'C', 0}, {'H', 0}};

    vector<string> S(N);

    for (int i = 0; i < N; i++) {
        cin >> S[i];
        char initial = S[i].at(0);
        if (count.find(initial) != count.end()) {
            count[initial]++;
        }
    }

    vector<long long> values;
    for (auto& pair : count) {
        values.push_back(pair.second);
    }

    long long ans = 0;
    int size = values.size();
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            for (int k = j + 1; k < size; k++) {
                ans += values[i] * values[j] * values[k];
            }
        }
    }

    cout << ans << endl;
    return 0;
}