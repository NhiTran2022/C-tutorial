// #include <iostream>
// int main()
// {
//     int num = 0;
//     std::cout << "Enter any number." << std::endl;
//     std::cin >> num;
//     if (num > 10) //test if num is greater than 10
//         {
//             std::cout << "The number is greater than 10.";
//         }
    
//     else if (num < 10)
//         {
//             std::cout << "The number is less than 10.";
//         }
//     else 
//         {
//             std::cout << "The number is equal to 10.";
//         }
//     return 0;
// }
/*Write the program to let user enter their option to drink coffee or tea*/
#include <iostream>
int main()
{
    int choice = 0;
    std::cout << "Enter: " << std::endl << "1 - for Coffee." << std::endl << "2 - for Tea" << std::endl;
    std::cin >> choice;
    if (choice == 1)
        {
            std::cout << "Your coffee is on its way. Thank you.";
        }
    else if (choice == 2)
        {
            std::cout << "Your tea is on its way. Thank you.";
        }
    else 
        {
            std::cout << "You have entered a wrong option.";
        }
    return 0;
}