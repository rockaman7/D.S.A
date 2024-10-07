//Increment the large integer(given as array digits, where each digits[i] is the ith digit of the integer) by one and return the resulting array of digits.
/*Example 1: Input:     
digits = [1,2,3]        Output: [1,2,4]

Example 2:
Input: digits = [9]     Output: [1,0]

0 <= digits[i] <= 9
digits does not contain any leading 0's.*/

#include <bits/stdc++.h>
using namespace std;

// Function to add 1 to the number represented by the vector of digits
vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();  // Get the size of the vector
    
    // Traverse the vector from the last digit to the first
    for (int i = n - 1; i >= 0; --i) {
        if (digits[i] < 9) {
            digits[i]++;  // If the digit is less than 9, increment it and return
            return digits;
        }
        digits[i] = 0;  // If the digit is 9, set it to 0 and continue the loop (carry)
    }
    
    // If all digits are 9, add a leading 1
    digits.insert(digits.begin(), 1);
    return digits;
}

int main() {
    int n;
    cout << "Enter the number of digits: ";
    cin >> n;
    
    vector<int> digits(n);  // Create a vector to store the digits , as it can dynamically resize(that can happen in this program) 
    
    cout << "Enter the digits: ";
    for (int i = 0; i < n; ++i) {
        cin >> digits[i];
    }

    vector<int> result = plusOne(digits);
    
    cout << "Result after adding 1: ";
    for (int digit : result) {
        cout << digit << " ";
    }
    cout << endl;
    return 0;
}
