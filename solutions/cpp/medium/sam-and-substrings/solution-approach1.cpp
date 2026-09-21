// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/contests/bca3a-hackathon12-21-9-26/challenges/sam-and-substrings/problem?isFullScreen=true
// Problem     Sam and substrings
// Difficulty  Medium
// Subdomain   Algorithms
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-21, 11:30 a.m.
// ──────────────────────────────────────────────────

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'substrings' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING n as parameter.
 */

int substrings(string n) {
    const long long MOD = 1000000007;
    
    long long ans = 0;
    long long f = 0;

    for (int i = 0; i < n.length(); i++) {
        int digit = n[i] - '0';

        f = (f * 10 + digit * (i + 1)) % MOD;
        ans = (ans + f) % MOD;
    }

    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n;
    getline(cin, n);

    int result = substrings(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
