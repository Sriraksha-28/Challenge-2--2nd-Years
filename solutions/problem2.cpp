#include <iostream>
using namespace std;

bool isVowel(char c)
{
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

void manualReverse(string &s)
{
    int i = 0, j = s.length() - 1;
    while (i < j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

int main()
{

    string s = "soscchallenge";

    manualReverse(s);

    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if ((i + 1) % 3 != 0)
            temp += s[i];
    }

    for (int i = 0; i < temp.length(); i++)
    {
        temp[i] = temp[i] + 2;
    }

    int count = 0;
    for (int i = 0; i < temp.length(); i++)
    {
        if (isVowel(temp[i]))
            count++;
    }

    cout << count;

    return 0;
}