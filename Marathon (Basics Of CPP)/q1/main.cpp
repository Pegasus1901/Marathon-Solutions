#include <iostream>
#include "inventory.h"

void search(Inventory a[], int id)
{
    for (int i = 0; i < 3; i++)
    {
        if (a[i].getProductCode() == id)
        {
            std::cout << "\n Product found !!!" << std::endl;
            a[i].display();
            return;
        }
    }
}

int main()
{
    Inventory *inv1 = new Inventory[3];

    for (int i = 0; i < 3; i++)
    {
        inv1[i].accept();
    }

    search(inv1,102);

    return 0;
}