/********************************
**Author: Jasmine Kim
**Date: 8-13-17
**Description: This is the class implementation file for the Store class.
*********************************/

#include<iostream>
#include "Store.hpp"
using namespace std;

/**********************
**This function will add a product to the inventory.
***************************/
void Store::addProduct(Product* p)
{
    inventory.push_back(p);
}


/***********************************
**This function will add a customer to the list of members.
***************************************/
void Store::addMember(Customer* c)
{
    members.push_back(c);
}


/**************************************
**This function returns a pointer to the product with a matching
**ID and will return NULL if a matching ID is not found.
******************************************/
Product* Store::getProductFromID(string item)
{
    for (int i=0; i<inventory.size(); i++)
    {
        if(item==inventory[i]-> getIdCode())
            {
                return inventory[i];
            }
    }
    return NULL;
}


/**************************************
**This function returns a pointer to a customer with a matching
**ID and will return NULL if a matching ID is not found.
*****************************************/
Customer* Store::getMemberFromID(string mem)
{
    for(int i=0; i<members.size(); i++)
    {
        if(mem==members[i]-> getAccountID())
        {
            return members[i];
        }
    }
    return NULL;
}

/*******************************************
**This function will find every product or description that contains the
**search string and will print out the product title, ID Code, price and
**description. The first letter of the string will be case-insensitive.
***********************************************/
void Store::productSearch(string str)
{
    for (int i=0; i<inventory.size(); i++)
    {
        string productTitle = inventory.at(i)-> getTitle();
        productTitle[0] = tolower(productTitle[0]);

        string productDescription = inventory.at(i) -> getDescription();
        productDescription[0] = tolower(productDescription[0]);

        str[0] = tolower(str[0]);

        if(productTitle.find(str) != string::npos || productDescription.find(str) != string::npos)
        {
            cout << inventory[i]-> getTitle() << endl;
            cout << "ID Code: " << inventory[i]-> getIdCode() << endl;
            cout << "Price: $" << inventory[i]-> getPrice() << endl;
            cout << inventory[i]-> getDescription() << endl;

        }


    }
}


/********************************************
**If the product and the member is found and the product is available,
**the function calls the method. Otherwise it will say the product is 
**out of stock currently.
***********************************************/
void Store::addProductToMemberCart(string pID, string mID)
{
    Product* p = getProductFromID(pID);
    Customer* c = getMemberFromID(mID);

    if(p!= NULL && c!=NULL)
    {
        if(p-> getQuantityAvailable()>0)
        {
            c->addProductToCart(pID);
        }else{
            cout << "Sorry, product #" << pID << " is currently out of stock." << endl;
        }
    }
    else
    {
        if (p==NULL)
        {
            cout << "Product #" << pID << " not found." << endl;
        }
        if (c==NULL)
        {
            cout << "Member #" << mID << " not found." << endl;
        }
    }
}


/******************************************
**If the member is not found, print out that the member account
**is not found. Otherwise the function will print out the title and 
**price for each product in the cart and decrease the quantity of that product by 1. The function should print whether the item is sold out. 
**The function should also print out the subtotal as well as the 
**shipping cost and the total cost of everything. At the end, the 
**members cart should be emptied.
***********************************************/
void Store::checkOutMember(string mID)
{
    Customer* c = getMemberFromID(mID);
    double subtotal = 0.0;
    double shippingCost = 0.0;
    double total = 0.0;

    if (c==NULL)
    {
        cout << "Member #" << mID << " not found." << endl;
    }
    else{
        vector<string> cart = c->getCart();
        int totalNumberItems =0;
        for (int i=0; i<cart.size(); i++)
        {
            Product* p = getProductFromID(cart[i]);

            if(p->getQuantityAvailable()>0)
            {
                cout << p->getTitle() << " - " << p->getPrice() << endl;
                subtotal += p->getPrice();
                p->decreaseQuantity();
            }
            else{
                cout << "Sorry, product #" << p->getIdCode() << ", " << p->getTitle() << " is no longer available." << endl;

            }

            cout << "Subtotal: $" << subtotal << endl;

            if (c->isPremiumMember())
            {
                shippingCost = 0.0;
            }else{
                shippingCost = 0.07*subtotal;
            }

            cout << "Shipping Cost: $" << shippingCost << endl;
            total = subtotal + shippingCost;
            cout << "Total: $" << total << endl;

            c->emptyCart();
        }
    }

}

