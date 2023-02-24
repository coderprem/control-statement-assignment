#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1>num2){
        cout << num1 << " is Greater." << endl;
    }
    else if (num1==num2){
        cout << "Both numbers are equal." << endl;
    }
    else {
        cout << num2 << " is Greater." << endl;
    }
    return 0;
}