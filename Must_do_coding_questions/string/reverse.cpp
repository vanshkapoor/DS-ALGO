#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void reverseWords(string &s)
{
    // Reversing individual words as
    // explained in the first step

    int start = 0;
    for (int end = 0; end < s.length(); end++)
    {

        // If we see a space, we reverse the previous
        // word (word between the indexes start and end-1
        // i.e., s[start..end-1]
        if (s[end] == ' ')
        {
            reverse(s.begin() + start, s.begin() + end);
            start = end + 1;
        }
    }

    // Reverse the last word
    reverse(s.begin() + start, s.end());

    // Reverse the entire string
    // reverse(s.begin(), s.end());
}

int main()
{
    string s = "i love programming";
    reverseWords(s);
    cout << s;

    return 0;
}