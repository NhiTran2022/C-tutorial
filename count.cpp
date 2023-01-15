// C++ Program to Count Number of Consecutive Inputs
// Only for consecutive input like 10 10 10 4 4 4 6 6 6 6 5
# include <iostream>
int main()
{
    // currVal is the number we were counting; we'll read new values into val
    int currVal = 0, val = 0;
    // read first number and ensure that we have data to process
    if (std::cin >> currVal)
        {
            int count = 1; //store the count for the current value we were processing
            while (std::cin >> val)
                {//read the remaining numbers
                    if (val == currVal)//if the values are the same
                        {
                            ++count; //add 1 to count
                        }
                    else 
                        {//otherwise, print the count for the previous value
                            std::cout << currVal << " occur " << count << " times " << std::endl;
                            currVal = val; // remember the new value
                            count = 1; // reset the counter
                        }
                } // while loop ends here
        // remember to print the count for the last value in the file
        std::cout << currVal << " occurs " << count << " times " << std::endl;
        } // outermost if statement ends here
    return 0;    
}