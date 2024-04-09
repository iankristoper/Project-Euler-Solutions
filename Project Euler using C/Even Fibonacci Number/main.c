#include <stdio.h>
#include <stdlib.h>



int evenValuedTerms(int number)
{
    int previous = 0;
    int current = 1;
    int sum = 0;


    for(int i = 1; i <= number; ++i)
    {
        int next = previous + current;
        previous = current;
        current = next;


        //check the even number and put to sum
        if((current % 2) == 0)
        {
            sum = sum + current;
        }


        //check if sum is greater than 4000000, if yes then break or exit the loop
        if(sum > number)
        {
            break;
        }
    }

    return sum;
}





int main()
{
    int number = 4000000;
    int result = evenValuedTerms(number);

    printf("Sum of even numbers in fibonacci sequence of %d: %d", number, result);



    return 0;
}








