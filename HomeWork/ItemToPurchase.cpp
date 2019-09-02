
#include "ItemToPurchase.h"

#include <string>
#include <iostream>

using namespace std;


void ItemToPurchase::setName() {cin >> itemName;}

void ItemToPurchase::setPrice() {cin >>itemPrice;}

void ItemToPurchase::setQuantity() {cin >> itemQuantity;}

string ItemToPurchase::getName() {return itemName;}

int ItemToPurchase::getPrice() {return itemPrice;}

int ItemToPurchase::getQuantity() {return itemQuantity;}


ItemToPurchase::ItemToPurchase() {
    itemName = "none";
    itemPrice = 0;
    itemQuantity = 0;
}
