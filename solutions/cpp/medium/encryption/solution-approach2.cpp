// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/contests/bca3a-hackathon07-17-8-26/challenges/encryption/problem?isFullScreen=true
// Problem     Encryption
// Difficulty  Medium
// Subdomain   N/A
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-17, 12:04 p.m.
// ──────────────────────────────────────────────────

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'encryption' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string encryption(string s) {

    s.erase(remove(s.begin(), s.end(), ' '), s.end());

    int n = s.size();

    int row = floor(sqrt(n));

    int column = ceil(sqrt(n));

    if(row * column < n)
    {
        row++;
    }

    vector<string> ans;
    
    for(int j = 0; j < column; j++)
    {
        string temp = "";

        for(int i = j; i < n; i = i + column)
        {
            temp += s[i];
        }

        ans.push_back(temp);
    }
    string result = "";

    for(int i = 0; i < ans.size(); i++)
    {
        result += ans[i];

        if(i != ans.size() - 1)
        {
            result += " ";
        }
    }

    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
