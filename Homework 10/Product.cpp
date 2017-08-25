/*******************************
**Author: Jasmine Kim
**Date: 8-13-17
**Description: This is the implementation file for the Product class.
********************************/

#include<iostream>
#include "Product.hpp"
using namespace std;


Product::Product(string id, string t, string d, double p, int qa)
{
    idCode = id;
    title = t;
    description = d;
    price = p;
    quantityAvailable = qa;
}


string Product::getIdCode()
{
    return idCode;
}

string Product::getTitle()
{
    return title;
}

string Product::getDescription()
{
    return description;
}

double Product::getPrice()
{
    return price;
}

int Product::getQuantityAvailable()
{
    return quantityAvailable;
}

void Product::decreaseQuantity()
{
    quantityAvailable--;
}

