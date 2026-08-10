// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/contests/bca3a-hackathon06-10-8-26/challenges/angry-children/problem?isFullScreen=true
// Problem     Max Min
// Difficulty  Medium
// Subdomain   Algorithms
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-10, 12:49 p.m.
// ──────────────────────────────────────────────────

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'maxMin' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY arr
 */

int maxMin(int k, vector<int> arr) {

    sort(arr.begin(), arr.end());

    int count = 0;
    int mini1 = 0;
    int mini2 = 0;

    vector<int> arr2;

    for(int i = 0; i <= arr.size() - k; i++)
    {
        arr2.clear();

        for(int j = i; j < i + k; j++)
        {
            arr2.push_back(arr[j]);
        }

        count++;

        mini1 = arr2[k - 1] - arr2[0];

        if(count == 1)
        {
            mini2 = mini1;
        }
        else if(mini1 < mini2)
        {
            mini2 = mini1;
        }
    }

    return mini2;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        string arr_item_temp;
        getline(cin, arr_item_temp);

        int arr_item = stoi(ltrim(rtrim(arr_item_temp)));

        arr[i] = arr_item;
    }

    int result = maxMin(k, arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
