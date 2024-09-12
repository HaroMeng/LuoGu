#include <bits/stdc++.h>
using namespace std;
string words, sentence;
int loca = -1, num = 0;
bool cmp(int l, int r)
{
    if (words.size() != r - l)
        return false;
    for (int i = 0; i < words.size(); i++)
    {
        if (words[i] != sentence[l + i])
            return false;
    }
    return true;
}

int main()
{

    getline(cin, words);
    getline(cin, sentence);
    transform(words.begin(), words.end(), words.begin(), ::tolower);
    transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);

    for (int i = 0; i < sentence.size(); i++)
    {
        if (sentence[i] != ' ')
        // 找到第一个单词的首字母
        {
            int j = i;
            while (j < sentence.size() && sentence[j] != ' ')
                j++; // 找到单词的末尾+1的位置
            if (cmp(i, j))
            {
                num++;
                if (loca == -1)
                    loca = i;
            }
            i = j;
            
        }
    }
    if (num > 0)
    {
        cout << num << " " << loca;
    }
    else
        cout << -1;
}