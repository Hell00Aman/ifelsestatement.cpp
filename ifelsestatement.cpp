#include <iostream>   // Input-output library
using namespace std; 

int main()
{
    int age;                     // Variable to store age
    cin >> age;                  // Take input from user

    if (age >= 18) {             // Check condition
        cout << "Adult";         // Print if age is 18 or more
    }
    else if(age <= 10){ // age less than 10 only then it will print Not Adult otherwise nothing will be printed.
        cout << "Not Adult";     // Print if age is less than 18
    }

    return 0;                    // End program
}
