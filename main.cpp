/**
 * Cashion Penha
 * Lab 3
 * Average and standard deviation calculator
 * 03/10/2017
 */

/**< Preprocessor Directive */
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;/** Includes commonly used tools, such as cout, cin, To prevent typing "std" */

int main()

{
    /**< variable declarations e*/
    int n,i;
    double num[10];
    double sum=0;
    double s;
    double average;

    /**< Displaying the title of the calculator */
    cout << "Average and standard deviation calculator\n" << endl;

    /**< For loop to allow user enter each number */
    for(n = 0; n < 10; n++)
    {
        cout << "Please enter number" << n + 1 << ": ";
        cin >> num[n];
        sum = sum + num[n];
    }

    /**< Formula to calculate average */
    average = sum/10;

    s=0;

    /**< For loop to calculate the standard deviation */
    for(i=0; i<10; i++)
    {
        s=s+pow((num[i]-average),2);
    }

    s=sqrt(s/(10-1)); // Formula to calculate the standard deviation

    cout << "\nThe average is: " << average << endl;/**< Printing the average result */

    cout.precision(3);/**< Initializing the result to 3 decimal places */

    cout << fixed << "The standard deviation is: " << s << endl;/**< Displaying the standard deviation result */

    return 0;
}
