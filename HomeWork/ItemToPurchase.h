#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

#include <string>

using namespace std;

class ItemToPurchase{
    public:
        ItemToPurchase();
        void setName();
        string getName();
        void setPrice();
        int getPrice();
        void setQuantity();
        int getQuantity();
    private:
    string itemName;
    int itemPrice;
    int itemQuantity;
};
#endif