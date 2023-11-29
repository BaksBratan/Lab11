#include <iostream>
#include <cmath>

// Функція для перевірки, чи є число паліндромом
bool isPalindrome(int number) {
    int originalNumber = number;
    int reversedNumber = 0;

    while (number > 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    return originalNumber == reversedNumber;
}

// Функція для знаходження розмірів прямокутників з заданою площею
void findRectanglesWithArea(int area) {
    for (int length = 1; length <= area; ++length) {
        if (area % length == 0) {
            int width = area / length;
            std::cout << "Rectangle: " << length << " x " << width << std::endl;
        }
    }
}

// Функція для знаходження розв'язків рівняння x^2 + y^2 = k^2
void findSolutionsForEquation() {
    for (int x = 1; x <= 30; ++x) {
        for (int y = 1; y <= 30; ++y) {
            for (int k = 1; k <= 30; ++k) {
                if (std::pow(x, 2) + std::pow(y, 2) == std::pow(k, 2)) {
                    std::cout << "Solution: x=" << x << ", y=" << y << ", k=" << k << std::endl;
                }
            }
        }
    }
}

int main() {
    int choice;

    do {
        // Вивід меню
        std::cout << "Choose a task:" << std::endl;
        std::cout << "1. Palindrome" << std::endl;
        std::cout << "2. Dimensions of rectangles" << std::endl;
        std::cout << "3. Equation x^2 + y^2 = k^2" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Your choice: ";
        std::cin >> choice;

        // Виконання обраного завдання
        switch (choice) {
        case 1:
        {
            int number;
            std::cout << "Enter a number: ";
            std::cin >> number;

            if (isPalindrome(number)) {
                std::cout << "The number is a palindrome." << std::endl;
            }
            else {
                std::cout << "The number is not a palindrome." << std::endl;
            }
        }
        break;
        case 2:
        {
            int area;
            std::cout << "Enter the area of the rectangles: ";
            std::cin >> area;
            findRectanglesWithArea(area);
        }
        break;
        case 3:
            findSolutionsForEquation();
            break;
        case 0:
            std::cout << "Thank you for using the program. Goodbye!" << std::endl;
            break;
        default:
            std::cout << "Wrong choice. Try again." << std::endl;
        }

    } while (choice != 0);

    return 0;
}