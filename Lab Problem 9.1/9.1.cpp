// File Name:     Lab Problem 9.1
// Author:        William Inkrott
// Date:          11/07/24
// Description:   Reverse, check evens, and swap order of values in an array. 

#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void)
{
    int randarray[10];
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        randarray[i] = rand() % 9000 + 1000;
    }
    cout << "The random integers: ";
    for (int i = 0; i < 10; i++)
    {
        cout << randarray[i] << " ";
    }
    cout << "Even indices: ";
    for (int i = 0; i < 10; i++)
    {
        cout << randarray[i] << " ";
        i = i + 1;
    }
}