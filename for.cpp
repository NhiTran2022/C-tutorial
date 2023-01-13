#include <iostream>
int main()
{
    //print Hello there 10 times
    for (int i=1/*initialization*/; i <= 10/*condition*/; i++/*counter updation*/)
    {
        std::cout << "Hello there" << std::endl; /*statement*/
    }
    
    // Sum from 1 to 100
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum += i;
    }
    std::cout << "Sum of 1 to 100 is: " << sum << std::endl;
    

    // Sum of 1 to an input value
    int total = 0, val;
    std::cout << "Enter the number till which the sum has to be calculated: ";
    std::cin >> val;
    for (int i = 1; i <= val; i++)
    {
        total += i;
    }
    std::cout << "Sum of 1 to " << val << " = " << total << std::endl;
    return 0;
}
