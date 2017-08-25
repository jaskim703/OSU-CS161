/*****************************
 **Author: Jasmine Kim
 **Date : 7/5/17
 **Description: When inputting a value of cents less than a dollar, the program will return the change in the fewest amount of coins possible
 ******************************/

#include <iostream>
using namespace std;

int main()
{
    int cents;
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    
    cout << "Please enter an amount in cents less than a dollar. \n";
    cin >> cents;
    
    int quarterChange = (cents/quarter);
    cents %= quarter;
    int dimeChange = (cents/dime);
    cents %= dime;
    int nickelChange = (cents/nickel);
    cents %= nickel;
    int pennyChange = (cents/penny);
    cents %= penny;
    cout << "Your change will be: \n";
    cout << "Q: " << quarterChange << endl;
    cout << "D: " << dimeChange << endl;
    cout << "N: " << nickelChange << endl;
    cout << "P: " << pennyChange << endl;
    
    return 0;
    
}

