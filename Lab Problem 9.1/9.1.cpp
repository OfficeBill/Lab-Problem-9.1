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
    cout << endl << "Even indices: ";
    for (int i = 0; i < 10; i++)
    {
        cout << randarray[i] << " ";
        i = i + 1;
    }
    cout << endl << "Even values: ";
    for (int i = 0; i < 10; i++)
    {
        if (randarray[i] % 2 == 0)
        {
            cout << randarray[i] << " ";
        }
    }
    cout << endl << "Reversed order: ";
    int first = 0, last = 9;
    for (int i = 0; i < 5; i++)
    {
        swap(randarray[first], randarray[last]);
        first = first + 1;
        last = last - 1;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << randarray[i] << " ";
    }
    cout << endl << "First and last: " << randarray[9] << " " << randarray[0] << endl;
}

