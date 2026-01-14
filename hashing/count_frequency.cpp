#include"../stdc++.h"

std::map<int, int> countFrequency(const std::vector<int>& v) {
    std::map<int, int> mp;
    for (int i=0; i<v.size(); i++) {
        mp[v[i]]++;
    }
    return mp;
}

std::pair<int, int> highestAndLowestFreqElems(const std::vector<int>& v) {
    auto mp = countFrequency(v);
    auto highestFreqCount = 0;
    auto highestFreqElem = 0;

    auto lowestFreqCount = INT_MAX;
    auto lowestFreqElem = 0;
    for (const auto& it: mp) {
        if (it.second > highestFreqCount) {
            highestFreqCount = it.second;
            highestFreqElem = it.first;
        }
        if (it.second < lowestFreqCount) {
            lowestFreqCount = it.second;
            lowestFreqElem = it.first;
        }
    }
    return {highestFreqElem, lowestFreqElem};
}

int main() {
    std::vector<int> v = {1, 2, 6, 2, 9, 4};
    auto mp = countFrequency(v);
    for (const auto& it : mp) {
        std::cout << it.first << " " << it.second;
    }
    std::cout << "\n";

    const auto& [highest, lowest] = highestAndLowestFreqElems(v);
    std::cout << highest << " " << lowest;
}