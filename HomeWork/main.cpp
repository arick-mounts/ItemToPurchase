#include "ItemToPurchase.h"

#include <iostream>
#include <string>

using namespace std;

int main() {
    ItemToPurchase itm1;
    ItemToPurchase itm2;


    cout << "Item 1" << endl;
    cout << "Enter the item name:" << endl;
    itm1.setName();
    cout << "Enter the item price:" << endl;
    itm1.setPrice();
    cout << "Enter the item quantity:" << endl;
    itm1.setQuantity();
    cout << endl;

    cout << "Item 2" << endl;
    cout << "Enter the item name:" << endl;
    itm2.setName();
    cout << "Enter the item price:" << endl;
    itm2.setPrice();
    cout << "Enter the item quantity:" << endl;
    itm2.setQuantity();
    cout << endl;

    cout << "TOTAL COST" << endl;
    cout << itm1.getName() << " " << itm1.getQuantity() << " @ $" << itm1.getPrice() << " = $" << itm1.getPrice() * itm1.getQuantity();
    cout << itm2.getName() << " " << itm2.getQuantity() << " @ $" << itm2.getPrice() << " = $" << itm2.getPrice() * itm2.getQuantity();

    return 0;
}