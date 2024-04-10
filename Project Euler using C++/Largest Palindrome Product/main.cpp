#include <iostream>


/*
    Largest Palindrome Product

    A palindromic number reads the same both ways.
    The largest palindrome made from the product of two $2$-digit numbers is $9009 = 91 \times 99$.
    Find the largest palindrome made from the product of two $3$-digit numbers.

*/

//return if the product is equal to its reverse form
bool isPalindrome(int num)
{

    int originalNum = num;
    int reversedNum = 0;

    // Reverse the number
    while (num > 0)
    {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num = num / 10;
    }

    // Check if the original number is equal to its reverse
    return originalNum == reversedNum;
}


int largestPalindrome()
{
    int largestPalindrome = 0;

    for (int i = 100; i <= 999; ++i)
    {
        for (int j = i; j <= 999; ++j)
        {
            int product = i * j;

            if (isPalindrome(product) && product > largestPalindrome)
            {
                largestPalindrome = product;
            }
        }
    }

    return largestPalindrome;
}




int main()
{
    std::cout << "Largest palindrome product of two 3-digit numbers: " << largestPalindrome() << std::endl;

    return 0;
}







