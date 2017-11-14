//
//  main.cpp
//  Conditionals
//
//  Created by Chinaemere Ike on 9/6/17.
//  Copyright © 2017 Chinaemere Ike. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    for (int i= 1; i <= 100; i++)
    {
        if ((i % 3 == 0)  && (i % 5 == 0))
        {
            cout << "FizzBuzz" << "\n";
        }
        
        else if ((i % 3 == 0))
        {
            cout << "Fizz" << "\n";
        }
        
        else if ((i % 5 == 0))
        {
            cout << "Buzz" << "\n";
        }
        
        
        else {
            cout << i << "\n";
        }
    }
    //std::cout << "Hello, World!\n";
    return 0;
}
