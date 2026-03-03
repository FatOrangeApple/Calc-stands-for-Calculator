#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
#include <sstream>

double add(double a, double b){
    return (a + b);
}

double subtract(double a, double b){
    return (a - b);
}

double multiply(double a, double b){
    return (a * b);
}

double divide(double a, double b){
    return (a / b);
}


double num1, num2;
char op;

int main(){

    std::cout << std::fixed << std::setprecision(2);
    
    std::cout << "Welcome to Regan's elementary school calculator\n" 
    << "Type 'end' to terminate the program\n" 
    << "Please enter your equation" << std::endl;

    while (true){

        std::string line;

        std::getline(std::cin, line);
        std::cout << std::endl;

        if (line == "end") break;

        std::stringstream ss(line);
        ss >> num1 >> op >> num2;

        if (ss.fail()) {
            std::cout << "Only add numbers bud this isn't highschool" << std::endl;
            continue;
        }

        switch (op) {

            case '+':
                std::cout << add(num1, num2) << "\n" << std::endl;
                break;

            case '-':
                std::cout << subtract(num1, num2) << "\n" << std::endl;
                break;
            
            case 'x':
            case '*':
                std::cout << multiply(num1, num2) << "\n" << std::endl;
                break;
            
            case '/':
                if (num2 != 0) {
                    std::cout << divide(num1, num2) << "\n" << std::endl;
                }
                else {
                    std::cout << "What are you, Epstein?" << "\n" << std::endl;
                }
                break;

            default:
                std::cout << "Simple operations only bud, I ain't Einstein" << "\n" << std::endl;
                break;

        }

    }
    std::cout << "Remember,\n" << "Calc stands for calculator" << std::endl;
}