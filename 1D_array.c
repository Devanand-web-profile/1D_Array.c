
    // This program is execute the input the
#include <stdio.h>
#include <conio.h>
void main()
{
    int i;
    float x[10], value, total;
    // reading a value Into array ........

    printf("\t\t\t\t\t  \n ENTER 10 FLOATING VALUE : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%f", &value);
        x[i] = value;
    }

    // Total of input value's
    total = 0.0;
    for (i = 0; i < 5; i++)
    {
        total = total + x[i] * x[i];
    }
    printf("\n\n");
    for (i = 0; i < 5; i++)
    {
        printf("  x[%2d] = %.1f \n", i + 1, x[i]);  //x[%2d] = using Space between  braket the number..... 
    }
    printf("\n\n Total = %.1f \n\n ", total);

    getch();
}