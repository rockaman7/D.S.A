//An integer divisible by the sum of its digits is said to be a Harshad number.
/*  Input: x = 18        
    Output: 9   
    Explanation:The sum of digits of x is 9. 18 is divisible by 9. So 18 is a Harshad number */

#include <bits/stdc++.h>
using namespace std;

int isHarshad(int x)
{
    int sum = 0;
    int temp = x;
    while (temp != 0)
    {
        sum = sum + temp % 10;
        temp /= 10;
    }
    if (x % sum == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int x;
    cout << "Enter any number: " << endl;
    cin >> x;
    if (isHarshad(x)) {
        cout << x<< " is a Harshad number." << endl;
    } else {
        cout << x << " is not a Harshad number." << endl;
    }
    return 0;
}
