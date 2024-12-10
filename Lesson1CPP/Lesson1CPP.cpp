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
int main()
{
    HW3();
}

