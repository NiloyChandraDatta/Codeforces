//https://codeforces.com/problemset/problem/4/C
//hash map

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    int n;  cin >> n;

    unordered_map<string, int> db;
    string st;

    for (int i = 0; i < n; ++i)
    {
        cin >> st;

        if (db.find(st) == db.end())
        {
            db[st] = 0;
            cout << "OK" << endl;
        }
        else
        {
            int count = ++db[st]; 
            string new_st = st + to_string(count);

            while (db.find(new_st) != db.end()) 
            {
                count = ++db[st];
                new_st = st + to_string(count);
            }

            db[new_st] = 0;
            cout << new_st << endl;
        }
    }
}
