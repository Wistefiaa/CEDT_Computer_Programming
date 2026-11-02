#include <bits/stdc++.h>
using namespace std;

void print_set(const string& label, const set<int>& values) {
    cout << label << ": ";
    if (values.empty()) {
        cout << "empty set";
    } else {
        bool first = true;
        for (int value : values) {
            if (!first) cout << ' ';
            cout << value;
            first = false;
        }
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<set<int>> sets;
    string line;
    while (getline(cin, line)) {
        stringstream input(line);
        set<int> current_set;
        int value;
        while (input >> value) current_set.insert(value);
        if (!current_set.empty()) sets.push_back(current_set);
    }

    if (sets.empty()) return 0;

    set<int> result_union = sets[0];
    set<int> result_intersection = sets[0];
    set<int> result_difference = sets[0];

    for (size_t i = 1; i < sets.size(); ++i) {
        set<int> next_union, next_intersection, next_difference;

        set_union(result_union.begin(), result_union.end(),
                  sets[i].begin(), sets[i].end(),
                  inserter(next_union, next_union.end()));
        set_intersection(result_intersection.begin(), result_intersection.end(),
                         sets[i].begin(), sets[i].end(),
                         inserter(next_intersection, next_intersection.end()));
        set_difference(result_difference.begin(), result_difference.end(),
                       sets[i].begin(), sets[i].end(),
                       inserter(next_difference, next_difference.end()));

        result_union = move(next_union);
        result_intersection = move(next_intersection);
        result_difference = move(next_difference);
    }

    print_set("U", result_union);
    print_set("I", result_intersection);
    print_set("D", result_difference);

    return 0;
}
