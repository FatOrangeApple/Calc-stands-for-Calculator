#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

int main() {
    std::cout << std::fixed << std:: setprecision(2);

    double num1, num2;
    char op;
    std::string term;

    std::cout << "Welcome to Regans online Calc\n" 
    << "Remember! Calc stands for calculator\n" 
    << "Enter your operation:" << std::endl;

    while (term != "end"){
    
    std::cin >> num1 >> op >> num2;

    switch (op) {
        case '+':
            std::cout << add(num1, num2) << std::endl;
            break;

        case '-':
            std::cout << subtract(num1, num2) << std::endl;
            break;
        
        case '*':
        case 'x': 
            std::cout << multiply(num1, num2) << std::endl;
            break;

        case '/':
            std::cout << divide(num1, num2) << std::endl;
            break;
        
        default:
            std::cout << "Maths only bud, try again." << std::endl;
            break;
    }

    std::cout << "Would you like to terminate the program?" << std::endl;
    std::cin >> term;
    }

    return 0;
}