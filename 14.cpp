
#include <iostream>
using namespace std;


vector<int> multiply(long int n, vector<int> digits)
{

    
    long int carry = 0;

    for (long int i = 0; i < digits.size(); i++) {
        long int result 
          = digits[i] * n + carry;

        
        digits[i] = result % 10;

        
        carry = result / 10;
    }

    
    while (carry) {
        digits.push_back(carry % 10);
        carry = carry / 10;
    }

    return digits;
}


vector<int> factorialRecursiveAlgorithm(
  long int n)
{
    if (n <= 2) {
        return multiply(n, { 1 });
    }

    return multiply(
      n, factorialRecursiveAlgorithm(n - 1));
}


int main()
{
    long int n = 50;

    vector<int> result 
      = factorialRecursiveAlgorithm(n);

    for (long int i = result.size() - 1; i >= 0; i--) {
        cout << result[i];
    }

    cout << "\n";

    return 0;
}