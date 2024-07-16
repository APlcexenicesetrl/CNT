#include <bits/stdc++.h>
using namespace std;
class cntnumber
{
    public:
        int lengthBetweenNumbers(const int startNumber, const int endNumber)
        {
            int length = 0;
            for (int i = startNumber; i <= endNumber; i++)
            {
                length++;
            }
            return length;
        }
        bool isInBetweenNumbers(const int number, const int startNumber, const int endNumber)
        {
            if (number >= startNumber && number <= endNumber)
                return true;
            else
                return false;
        }
};