#include <iostream>




int main()
{

    int sum = 0;
    int previous = 1;
    int current = 1;


    //condition to check if the current is less than 4 million
    while(current <= 4000000)
    {
        if(current % 2 == 0)
        {
            sum = sum + current;
        }

        int next = previous + current;  //next is sum of previous and current
        previous = current;
        current = next;

    }

    std::cout << "Sum of even-valued terms in Fibonacci sequence under 4 million: " << sum << std::endl;


    return 0;
}
