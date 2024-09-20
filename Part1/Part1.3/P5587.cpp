#include <bits/stdc++.h>
using namespace std;

string Fixline(string a)
{
    string b;
    for (auto i : a)
    {
        if (i != '<')
            b += i;
        else
        {
            if (not b.empty())
            {
                b.pop_back();
            }
        }
    }
    return b;
}

// 输入函数
void GetLine(vector<string> &a)
{
    while (true)
    {
        string str;
        getline(cin, str);
        if (str == "EOF")
        {
            break;
        }
        else
        {

            a.push_back(Fixline(str));
        }
    }
}

int main()

{

    vector<string> a, b;
    int time, cnt = 0;
    ;
    GetLine(a);
    GetLine(b);
    for (int i = 0; i < min(a.size(), b.size()); ++i)
    {
        for (int j = 0; j < min(a[i].size(), b[i].size()); ++j)
        {
            if (a[i][j] == b[i][j])
            {
                cnt++;
            }
        }
    }
    cin >> time;
    cout <<  round(cnt / (time / 60.0));

    return 0;
}