//
//  main.cpp
//  PrintFactorial
//
//  Created by Sonia Lopchan on 9/18/24.
//

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the positive numbers: "<< endl;
    cin>>num;
    
    if (num<0){
        cout << "Use the positive numbers other than zero"<<endl;
    }
    else {
        int factorial = 1;
        for (int i=1; i<= num; i++) {
            factorial *=i;
        }
        
        cout << "The factorial of " <<num<< " is "<< factorial << endl;
    }
    return 0;
}
