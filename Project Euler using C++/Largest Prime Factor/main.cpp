#include <iostream>





long long int largestPrimeFactor(long long int number)
{
    int result = 0;

    while((number % 2) == 0)
    {

        result = number / 2;
        number = result;
    }

    for(int i = 3; i <= number; i = i + 2)
    {

        while(number % i == 0)
        {
            result = i;
            number = number / i;
        }
    }

    return result;

}


int main()
{

    long long int number = 600851475143;

    std::cout << largestPrimeFactor(number);
    return 0;
}





















