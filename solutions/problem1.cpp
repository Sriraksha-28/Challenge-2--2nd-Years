#include <iostream>
using namespace std;

string rotateLeft(string s)
{
    char first = s[0];
    for (int i = 0; i < s.length() - 1; i++)
    {
        s[i] = s[i + 1];
    }
    s[s.length() - 1] = first;
    return s;
}

string rotateRight(string s)
{
    char last = s[s.length() - 1];
    for (int i = s.length() - 1; i > 0; i--)
    {
        s[i] = s[i - 1];
    }
    s[0] = last;
    return s;
}

int main()
{

    string row1 = "ABCDE", row2 = "FGHIJ", row3 = "KLMNO", row4 = "PQRST", row5 = "UVWXY";

    char d1 = 'R', d2 = 'L', d3 = 'R', d4 = 'L', d5 = 'R';

    if (d1 == 'L')
        row1 = rotateLeft(row1);
    else
        row1 = rotateRight(row1);
    if (d2 == 'L')
        row2 = rotateLeft(row2);
    else
        row2 = rotateRight(row2);
    if (d3 == 'L')
        row3 = rotateLeft(row3);
    else
        row3 = rotateRight(row3);
    if (d4 == 'L')
        row4 = rotateLeft(row4);
    else
        row4 = rotateRight(row4);
    if (d5 == 'L')
        row5 = rotateLeft(row5);
    else
        row5 = rotateRight(row5);

    string center = row3;

    int sum = 0;
    for (int i = 0; i < center.length(); i++)
    {
        sum += int(center[i]);
    }

    cout << sum;

    return 0;
}