// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/contests/bca3a-hackathon17-26-10-26/challenges/countingsort4/problem?isFullScreen=true
// Problem     The Full Counting Sort
// Difficulty  Medium
// Subdomain   N/A
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-10-26, 11:38 a.m.
// ──────────────────────────────────────────────────

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> arr[100];

    for (int i = 0; i < n; i++) {
        int x;
        string s;
        cin >> x >> s;

        if (i < n / 2) {
            arr[x].push_back("-");
        } else {
            arr[x].push_back(s);
        }
    }

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
    }

    cout << endl;
    return 0;
}
