/* #include <iostream>
using namespace std;

int main()
{
    cout << "programming is great fun!";
    cout << "The following items";
    cout << "were top sellers";
    cout << " during the month of June:" << endl; //end of line using endl
    cout << "Computer games" << endl;
    cout << "Coffee, \n" ;                    // end of line using \n inside the quotation mark
    cout << "Aspirin.";
    return 0;
} */

/* # include <iostream>
using namespace std;

int main()
{
    int number;
    number = 5;

    char letter;    // store one character, enclosed in single quotation mark ''
    letter = 'n';
    
    char letterA;
    char letterB;

    letterA  = 65;
    cout << letterA << endl;

    letterB = 66;
    cout << letterB << endl;



    cout << "The value in number is " << number << endl;
    return 0;
} */

// String Class #include <string>

/* // This program calculates hourly wages, including overtime.
#include <iostream>
using namespace std;

int main()
{
    double regularWages,
           basePayRate = 18.25,
           regularHour = 40.0,
           overtimeWages,
           overtimePayRate = 27.78,
           overtimeHours = 10,
           totalWages;
    
    // Calculate the regular wages.
    regularWages = basePayRate * regularHour;

    // Calculate the overtime wages.
    overtimeWages = overtimePayRate * overtimeHours;

    // Calculate the total wages.
    totalWages = regularWages + overtimeWages;

    // Display the total wages.
    cout << "Wages for this week are $" << totalWages << endl;
    return 0;
}
 */

/* // This program converts seconds to minutes and seconds.
#include <iostream>
using namespace std;

int main()
{
    // the total seconds is 125
    int totalSeconds = 125;
    // Constant
    const int CONSTANT = 25;

    // Variables for the minutes and seconds.
    int minutes, seconds;

    // Get the number of minutes.
    minutes = totalSeconds / 60;     // 1 minutes = 60 seconds
                                     // ? minutes = 125 seconds

    // Get the remaining seconds
    seconds = totalSeconds % 60;

    // Display the results.
    cout << totalSeconds << " seconds is equivalent to: \n";
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;
    return 0;

} */

/* // THIS PROGRAM DEMONSTRATES HOW IN CAN READ MULTIPLE VALUES
// OF DIFFERENT DATA TYPES.

#include <iostream>
using namespace std;

int main()
{
    int whole;
    double fractional;
    char letter;

    cout << "Enter an integer, a double, and a character: ";
    cin >> whole >> fractional >> letter;
    cout << "Whole: " << whole << endl;
    cout << "Fractional: " << fractional << endl;
    cout << "Letter: " << letter << endl;
    return 0;
} */

// THIS PROGRAM CALCULATES THE AREA OF A CIRCLE.
// THE FORMULA FOR THE AREA OF A CIRCLE IS PI TIMES
// THE RADIUS SQUARED. PI IS 3.14159

/* #include <iostream>
#include <cmath>   // needed fo pow function
using namespace std;

int main()
{
    const double PI = 3.14159;
    double area, radius;

    cout << 
}
 */

/* // THIS PROGRAM USES NESTED IF/ELSE STATEMENTS TO ASSIGN A
// LETTER GRADE (A, B, C, D, OR F) TO A NUMERIC TEST SCORE.

#include <iostream>
using namespace std;

int main()
{
    // CONSTANTS FOR GRADE THRESHOLDS
    const double A_SCORE = 90,
                 B_SCORE = 80,
                 C_SCORE = 70,
                 D_SCORE = 60;
    
    int testScore; // TO HOLD A NUMERIC TEST SCORE

    // GET THE NUMERIC TEST SCORE
    cout << "Enter your numeric test score and I will\n";
    cout << "tell you the letter grade you earned: ";
    cin >> testScore;

    // DETERMINE THE LETTER GRADE
    if (testScore >= A_SCORE)
    {
        cout << "Your grade is A\n";

    }
    else if (testScore >= B_SCORE)
    {
        cout << "Your grade is B.\n";
    }
    else if (testScore >= C_SCORE)
        cout << "Your grade is C.\n";
    else if (testScore >= D_SCORE)
        cout << "Your grade is D.\n";
    else if (testScore >= 0)
        cout << "Your grade is F.\n";
    else 
        cout << "Invalid test score.\n";
    return 0;
}
 */
/* // THIS PROGRAM DISPLAYS A MENU AND ASKS THE USER TO MAKE A 
// SELECTION. AN IF/ELSE IF STATEMENT DETERMINES WHICH ITEM 
// THE USER HAS CHOSEN.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int choice; // TO HOLD A MENU CHOICE
    int months; // TO HOLD THE NUMBER OF MONTHS
    double charges; // TO HOLD THE MONTHLY CHARGES

    // CONSTANTS FOR MEMBERSHIP RATES
    const double ADULT = 40.0,
                 SENIOR = 30.0,
                 CHILD = 20.0;

    // CONSTANTS FOR THE MENU CHOICES
    const int ADULT_CHOICE = 1,
              CHILD_CHOICE = 2,
              SENIOR_CHOICE = 3,
              QUIT_CHOICE = 4;

    // DISPLAY THE MENU AND GET A CHOICE
    cout << "\tHealth Club Membership Menu\n\n"
         << "1. Standard Adult Membership\n"
         << "2. Child Membership\n"
         << "3. Senior Citizen Membership\n"
         << "4. Quit the program\n\n"
         << "Enter your choice: ";
    cin >> choice;
    // SET THE NUMERIC OUTPUT FORMATTING.
    cout << fixed << showpoint << setprecision(2);

    // RESPOND TO THE USER'S MENU SELECTION
    if (choice == ADULT_CHOICE)
    {
        cout << "For how many months? ";
        cin >> months;
        charges = months * ADULT;
        cout << "The total charges are $" << charges << endl;
    }
    else if (choice == CHILD_CHOICE)
    {
        cout << "For how many months?";
        cin >> months;
        charges = months * CHILD;
        cout << "The total charges are $" << charges << endl;
    }
    else if (choice == SENIOR_CHOICE)
    {
        cout << "For how many months?";
        cin >> months;
        charges = months * SENIOR;
        cout << "The total charges are $" << charges << endl;
    }
    else if (choice == QUIT_CHOICE)
    {
        cout << "Program ending.\n";
    }
    else
    {
        cout << "The valid choice are 1 through 4. Run the \n"
             << "program again and select one of those.\n";
    }
    
    return 0;
} */

