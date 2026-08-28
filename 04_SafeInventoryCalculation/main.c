#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int quantity,price,shippingCost,discount;
    int productCost,withShipping,finalCost;

    printf("Please Enter Quantity: ");
    if(scanf("%d",&quantity)!=1)
    {
        printf("Error: You entered a letter (Quantity)");
        return 1;
    }


    printf("Please Enter price: ");
    if(scanf("%d",&price)!=1)
    {
        printf("Error: You entered a letter (Price)");
        return 1;
    }


    printf("Please Enter ShippingCost: ");
    if(scanf("%d",&shippingCost)!=1)
    {
        printf("Error: You entered a letter (shippingCost)");
        return 1;
    }


    printf("Please Enter discount: ");
    if(scanf("%d",&discount)!=1)
    {
        printf("Error: You entered a letter (discount)");
        return 1;
    }

    if(quantity > 0 && price > 0 && quantity>INT_MAX/price)
    {
        printf("Quantity * Price INT_MAX Exceeded");
        return 2;
    }
    if(quantity > 0 && price < 0 && price < INT_MIN/quantity)
    {
        printf("Quantity * Price INT_MIN Exceeded");
        return 2;
    }
    if(quantity < 0 && price > 0 && quantity < INT_MIN/price)
    {
        printf("Quantity * Price INT_MIN Exceeded");
        return 2;
    }
    if(quantity < 0 && price < 0 && quantity<INT_MAX/price)
    {
        printf("Quantity * Price INT_MAX Exceeded");
        return 2;
    }

    productCost=quantity*price;

    if(shippingCost>0 && productCost>INT_MAX-shippingCost)
    {
        printf("ProductCost + ShippingCost INT_MAX Exceeded");
        return 3;
    }
    if(shippingCost<0 && productCost<INT_MIN+shippingCost)
    {
        printf("ProductCost - ShippingCost INT_MIN Exceeded");
        return 3;
    }

    withShipping=productCost+shippingCost;

    if(discount>0 && withShipping<INT_MIN+discount)
    {
        printf("withShipping - discount INT_MIN Exceeded");
        return 4;
    }
    if(discount<0 && withShipping>INT_MAX+discount)
    {
         printf("withShipping - discount INT_MAX Exceeded");
        return 4;
    }

    finalCost = withShipping - discount;

    printf("Cost: %d\n",finalCost);
    return 0;
}
