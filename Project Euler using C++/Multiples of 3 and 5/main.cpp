#include <iostream>



int multiples(int number)
{
    int sum = 0;

    for(int i = 1; i <= number; i++)
    {
        if((i % 3 == 0) || (i % 5 == 0))
        {
            sum = sum + i;
        }
    }

    return sum;
}



int main()
{
    int number = 1000;
    std::cout << "Total sum: " << multiples(number);


    return 0;
}




