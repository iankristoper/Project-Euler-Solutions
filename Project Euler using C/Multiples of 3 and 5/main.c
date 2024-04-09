#include <stdio.h>
#include <stdlib.h>



int multiplesOfNumber(int number)
{
    int sum = 0;

    for(int i = 1; i < number; ++i)
    {
        if((i % 3) == 0 || (i % 5) == 0)
        {
            sum = sum + i;
        }

    }


    return sum;
}



int main()
{
    int number = 1000;
    int result = multiplesOfNumber(number);

    printf("Sum of multiples of 3 and 5: %d", result);



    return 0;
}
