#include <iostream>
#include "Ingredient.h"

using namespace std;

void printIngredient( Ingredient );

int main()
{
    Ingredient dough("Dough", 21, 0.75, "lb(s)");
    printIngredient( dough );

    Ingredient sauce;
    sauce.setName( "Sauce" );
    sauce.setQuantity( 3000 );
    sauce.setCostPerUnit( 0.07 );
    sauce.setUnitOfMeasurement( "oz" );
    printIngredient( sauce );

    cout << "\n\nAdding 50 to quantities.\n\n" << endl;
    dough.addUnits( 50 );
    sauce.addUnits( 50 );

    printIngredient( dough );
    printIngredient( sauce );

    cout << "\n\nRemoving 25 from quantities.\n\n" << endl;
    dough.removeUnits( 25 );
    sauce.removeUnits( 25 );

    printIngredient( dough );
    printIngredient( sauce );

    return 0;
}

void printIngredient( Ingredient testIngredient )
{
    cout << "Name:            " << testIngredient.getName() << endl;
    cout << "Quantity:        " << testIngredient.getQuantity() << " " << testIngredient.getUnitOfMeasurement() << endl;
    cout << "Cost per Unit:  $" << testIngredient.getCostPerUnit() << endl;
}
