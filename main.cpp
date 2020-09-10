/* Program name: InClass6.cpp
*  Author: Brandon VanDyke
*  Date last updated: 03/12/2019
* Purpose: determine number of real roots in a discriminant in the quadratic forumula
*/
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    double a; //declare three variables for numerical input
    double b;
    double c;
    
    cout << "Please enter a value for 'a', 'b', and 'c' for a discriminant:" << endl; //prompt for input
    cin >> a >> b >> c; //store input into each of the three variables
    
    double discriminant = (pow (b, 2)) - (4 * a * c); //calculate discriminant
    
    if (discriminant > 0) //beginning of if statement to determine appropriate output
            cout << "When a = " << a << ", b = " << b << ", and c = " << c << ", there two real roots.";
            //if discriminant is greater than 0, then display that there are two real roots
            
    else if (discriminant < 0)
            cout << "When a = " << a << ", b = " << b << ", and c = " << c << ", there are no real roots.";
            //if discriminant is not greater than 0, but is less than 0, output there are no real roots
    else 
        cout << "When a = " << a << ", b = " << b << ", and c = " << c << ", there is one real root.";
            /*if discriminant is neither greater than nor less than 0, it must be equal and 
            then the program will display that there is one real root */

    return 0;
}




