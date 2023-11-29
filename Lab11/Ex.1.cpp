#include <iostream>
using namespace std;

int main() {
    int day;

    // Введення числа від 1 до 5
    std::cout << "Enter a number from 1 to 5: ";
    std::cin >> day;

    // Використання команди switch
    switch (day) {
    case 1:
        std::cout << "Monday" << std::endl;
        break;
    case 2:
        std::cout << "Tuesday" << std::endl;
        break;
    case 3:
        std::cout << "Wednesday" << std::endl;
        break;
    case 4:
        std::cout << "Thursday" << std::endl;
        break;
    case 5:
        std::cout << "Friday" << std::endl;
        break;
    default:
        std::cout << "Invalid number. Enter a number from 1 to 5." << std::endl;
    }

    // Використання команди if
    if (day >= 1 && day <= 5) {
        if (day == 1) {
            std::cout << "Monday" << std::endl;
        }
        else if (day == 2) {
            std::cout << "Tuesday" << std::endl;
        }
        else if (day == 3) {
            std::cout << "Wednesday" << std::endl;
        }
        else if (day == 4) {
            std::cout << "Thursday" << std::endl;
        }
        else if (day == 5) {
            std::cout << "Friday" << std::endl;
        }
    }
    else {
        std::cout << "Invalid number. Enter a number from 1 to 5." << std::endl;
    }

    return 0;
}