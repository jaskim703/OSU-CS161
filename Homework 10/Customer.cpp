/******************************
**Author: Jasmine Kim
**Date: 8-13-17
**Description: This is the implementation file for the
**Customer class file.
*******************************/

#include <iostream>
#include "Customer.hpp"
using namespace std;

/*******************
**This constructor takes as parameters three values with
**which to initialize the Customer's name, account ID,
**and whether the customer is a premium member.
*********************/
Customer::Customer(string n, string a, bool pm)
{
    name = n;
    accountID = a;
    premiumMember = pm;
}

/***********************
**This function returns the value of the account ID number.
***************************/
string Customer::getAccountID()
{
    return accountID;
}


vector<string> Customer::getCart()
{
    return cart;
}

/***********************
**This function will add the product ID code to the
**customers cart.
************************/
void Customer::addProductToCart(string product)
{
    cart.push_back(product);
}

/*********************
**This function returns whether the customer is
**a premium member or not.
***********************/
bool Customer::isPremiumMember()
{
    if (premiumMember)
    {
        return true;
    }else{
        return false;
    }
}

/*************************
**This function will empty the customer's cart.
**************************/
void Customer::emptyCart()
{
    cart.clear();
}

