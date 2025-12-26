#include <stdio.h>
int main()

{

//to caculate the bill with the input as the type of food and quantity(B,F,P,S Burger French fires, Pizza and sandwhich). it finally displays the total charges for the order according to the following criteria. Price is Burger = 200, French fries = 50, Pizza = 500, Sndwhich = 150 using switch cases

    char Foodtype;
    int Quantity;
    int Totalbill = 0;

    printf("Enter the type of food: ");
    scanf(" %c", &Foodtype);
    printf("Enter the quantity: ");
    scanf("%d", &Quantity);
    switch(Foodtype) 
    {
        case 'B':
            Totalbill = Quantity * 200;
            break;
        case 'F':
            Totalbill = Quantity * 50;
            break;
        case 'P':
            Totalbill = Quantity * 500;
            break;
        case 'S':
            Totalbill = Quantity * 150;
            break;
        default:
            printf("The requested Food Item is not on the menu.");
    }

    printf("Total bill for your order is: %d", Totalbill);

  return 0;
}