#include <iostream>
#include <iomanip>
#include <cmath> 

void HW1()
{
    std::cout << "I love C++\n";

    for (int i = 0; i < 7; ++i)
    {
        for (int j = 0; j < 7; ++j)
        {
            if (i > j)
                std::cout << " * ";
            else
                std::cout << "  ";
        }
    std::cout << std::endl;
    }
}

enum class WeekDay {
    Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};
enum class Month {
    January = 1, February, March, April, May, June,
    July, August, September, October, November, December
}; 
void HW2()
{
    int a, b;

    std::cout << "Enter integer 1:\n";
    std::cin >> a;
    std::cout << "Enter integer 2:\n";
    std::cin >> b;
    std::swap(a, b);
    std::cout << "integer 1 = "<<a<<  ", integer 2 = " <<b<<std::endl;


    double myDouble = 155.4277;

    std::cout << "My double: " << myDouble << std::endl;

    std::cout << "Double to int: " << static_cast<int>(myDouble) << std::endl;
    std::cout << "formatet double: " << std::setfill('$') << std::setw(20) << myDouble << std::endl << std::endl;

    std::cout << std::fixed;
    std::cout << "Precision 2 digits: " << std::setprecision(2) << myDouble << std::endl;
    std::cout << "Precision 5 digits: " << std::setprecision(5) << myDouble << std::endl;
    std::cout << "Precision 10 digits: " << std::setprecision(10) << myDouble << std::endl;
    std::cout << "Standard notation: " << std::defaultfloat << myDouble << std::endl;
    std::cout << "E-notation: " << std::scientific << myDouble << std::endl;

    std::cout << std::endl<<"Numeric values of WeekDay enum:" << std::endl;
    std::cout << "Monday: " << static_cast<int>(WeekDay::Monday) << std::endl;
    std::cout << "Tuesday: " << static_cast<int>(WeekDay::Tuesday) << std::endl;
    std::cout << "Wednesday: " << static_cast<int>(WeekDay::Wednesday) << std::endl;
    std::cout << "Thursday: " << static_cast<int>(WeekDay::Thursday) << std::endl;
    std::cout << "Friday: " << static_cast<int>(WeekDay::Friday) << std::endl;
    std::cout << "Saturday: " << static_cast<int>(WeekDay::Saturday) << std::endl;
    std::cout << "Sunday: " << static_cast<int>(WeekDay::Sunday) << std::endl;

    std::cout <<std::endl<< "Enter integer :\n";
    int n;
    std::cin >> n;
    bool value = (n != 0);
    std::cout << std::boolalpha << value << std::endl;
}
void HW3()
{
    int seconds;
    std::cout << "Enter the number of seconds spent playing the game:\n";
    std::cin >> seconds;

    int hours = seconds / 3600;
    seconds %= 3600;

    int minutes = seconds / 60;
    seconds %= 60;

    std::cout << "You spent in the game: " << hours << " hour, " << minutes << " minutes, " << seconds << " seconds\n";

    int a, b, c;
    std::cout << "Enter integer 1:\n";
    std::cin >> a;
    std::cout << "Enter integer 2:\n";
    std::cin >> b;
    std::cout << "Enter integer 2:\n";
    std::cin >> c;

    std::cout << "Sum of these numbers: " << a + b + c << std::endl << "The product of these numbers: " << a * b * c << std::endl << "avg: " << (a + b + c) / 3 << std::endl;

    std::cout << "Enter integer 1:\n";
    std::cin >> a;
    std::cout << "Enter integer 2:\n";
    std::cin >> b;

    bool lessThan = a < b;
    bool equal = a == b;
    bool moreThan = a > b;
    bool lessOrEqual = a <= b;

    std::cout << std::boolalpha;
    std::cout << "first integer lessThan second: " << lessThan << std::endl;
    std::cout << "first integer equal second: " << equal << std::endl;
    std::cout << "first integer moreThan second: " << moreThan << std::endl;
    std::cout << "first integer lessOrEqual second: " << lessOrEqual << std::endl;

    std::cout << "Enter the height of the rectangle: \n";
    std::cin >> a;
    std::cout << "Enter the width of the rectangle: \n";
    std::cin >> b;
    std::cout << "Rectangle area: " << a * b<<std::endl;
    std::cout << "Rectangle perimeter: " << 2*a+2*b<<std::endl;


    int R;
    std::cout << "Enter the radius of the circle:\n";
    std::cin >> R;
    std::cout << "Circle area: " << acos(-1) * R * R;
    std::cout << "Length : " << 2 * acos(-1) * R;
        
}
void HW4()
{
    int a, b,c;

    /*std::cout << "Enter integer 1:\n";
    std::cin >> a;
    std::cout << "Enter integer 2:\n";
    std::cin >> b;
    std::cout << "Enter integer 3:\n";
    std::cin >> c;*/

    //std::cout << "Enter integer:\n";
    //std::cin >> a;
    //if (a % 5 == 0 && a % 11 == 0) 
    //    std::cout << "The number is divisible by both 5 and 11." << std::endl;
    //else 
    //    std::cout << "The number is not divisible by both 5 and 11." << std::endl;


    //std::cout << "\nEnter three angles of a triangle: ";
    //std::cin >> a >> b >> c;
    //if (a > 0 && b > 0 && c > 0 && (a + b + c == 180)) 
    //    std::cout << "The angles form a valid triangle." << std::endl;
    //else 
    //    std::cout << "The angles do not form a valid triangle." << std::endl;

   /* std::cout << "Enter integer:\n";
    std::cin >> a;
    if (a > 2 && a <= 5)
        std::cout << "Spring\n";
    else if (a > 5 && a <= 8)
        std::cout << "Summer\n";
    else if (a > 8 && a <= 11)
        std::cout << "Autumn\n";
    else
        std::cout << "Winter\n";*/

   /* std::cout << "Enter integer 1:\n";
    std::cin >> a;
    std::cout << "Enter integer 2:\n";
    std::cin >> b;
    int min = (a < b) ? a : b;
    std::cout << min ;*/

    std::cout << "Enter a number (1-12) for a month: ";
    std::cin >> a;

    if (a < 1 || a > 12) {
        std::cout << "Error: Invalid month number. Please enter a number between 1 and 12." << std::endl;
    }
    else {
        Month month = static_cast<Month>(a);

        switch (month) {
        case Month::January:
            std::cout << "January" << std::endl;
            break;
        case Month::February:
            std::cout << "February" << std::endl;
            break;
        case Month::March:
            std::cout << "March" << std::endl;
            break;
        case Month::April:
            std::cout << "April" << std::endl;
            break;
        case Month::May:
            std::cout << "May" << std::endl;
            break;
        case Month::June:
            std::cout << "June" << std::endl;
            break;
        case Month::July:
            std::cout << "July" << std::endl;
            break;
        case Month::August:
            std::cout << "August" << std::endl;
            break;
        case Month::September:
            std::cout << "September" << std::endl;
            break;
        case Month::October:
            std::cout << "October" << std::endl;
            break;
        case Month::November:
            std::cout << "November" << std::endl;
            break;
        case Month::December:
            std::cout << "December" << std::endl;
            break;
        default:
            std::cout << "Error: Invalid month." << std::endl;
            break;
        }
    }
}
int main()
{
    HW4();
}

