#include <iostream>

#define DAY_NAME_1 "Monday"
#define DAY_NAME_2 "Tuesday"
#define DAY_NAME_3 "Wednesday"
#define DAY_NAME_4 "Thursday"
#define DAY_NAME_5 "Friday"
#define DAY_NAME_6 "Saturday"
#define DAY_NAME_7 "Sunday"

#define DAY_NAME(n) DAY_NAME_##n

int main() {
    int day;

    std::cout << "Enter the number of the day of the week (1-7): ";
    std::cin >> day;

    if (day < 1 || day > 7) {
        std::cout << "Invalid day number." << std::endl;
    }
    else {
        switch (day) {
        case 1:
            std::cout << "Day of the week: " << DAY_NAME(1) << std::endl;
            break;
        case 2:
            std::cout << "Day of the week: " << DAY_NAME(2) << std::endl;
            break;
        case 3:
            std::cout << "Day of the week: " << DAY_NAME(3) << std::endl;
            break;
        case 4:
            std::cout << "Day of the week: " << DAY_NAME(4) << std::endl;
            break;
        case 5:
            std::cout << "Day of the week: " << DAY_NAME(5) << std::endl;
            break;
        case 6:
            std::cout << "Day of the week: " << DAY_NAME(6) << std::endl;
            break;
        case 7:
            std::cout << "Day of the week: " << DAY_NAME(7) << std::endl;
            break;
        }
    }
    return 0;
}
