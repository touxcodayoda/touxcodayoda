#include <iostream>


void option1(std::string firstname, std::string lastname);
void option2(const double &balance, std::string firstname, std::string lastname);
void option3(double &balance, double addbalance);
void option4(double &balance, double withdraw);

int main(){

    int opt;
    double balance = 0;
    double addbalance;
    double withdraw;
    std::string firstname;
    std::string lastname;

    while (true)
    {
        std::cout << "---------Banking System---------" << '\n';

        std::cout << "Please choose an option" << '\n';

        std::cout << "1. Create an Account" << '\n';
        std::cout << "2. Check balance" << '\n';
        std::cout << "3. Deposit money" << '\n';
        std::cout << "4. Withdraw money" << '\n';
        std::cout << "5. Quit" << '\n';
        std::cout << "Enter an option (1-5): ";
        std::cin >> opt;

        switch(opt){
            case 1:
                option1(firstname, lastname);
                break;
            case 2:
                option2(balance, firstname, lastname);
                break;
            case 3:
                option3(balance, addbalance);
                break;
            case 4:
                option4(balance, withdraw);
                break;
            case 5:
                std::cout << "Thank you for using this system" << '\n';
                std::cout << "---------------------------------------------";
                return 0;
            default:
                std::cout << "Please enter a valid option";
        }
    }

    return 0;
}

void option1(std::string firstname, std::string lastname){

    std::cout << "--------- Create an Account ---------" << '\n';

    std::cout << "Enter first name: ";
    std::cin >> firstname;

    std::cout << "Enter last name: ";
    std::cin >> lastname;

    std::cout << "Account name: " << firstname << ' ' << lastname << '\n';
    std::cout << "---------------------------------------" << '\n';
}

void option2(const double &balance, std::string firstname, std::string lastname){

    std::cout << "--------- Check balance ---------" << '\n';

    std::cout << "Account balance: " << balance << '\n';

}

void option3(double &balance, double addbalance){

    std::cout << "--------- Deposit money ---------" << '\n';

    std::cout << "Enter the amount to deposit: " << '\n';
    std::cin >> addbalance;

    balance = balance + addbalance;

}

void option4(double &balance, double withdraw){

    std::cout << "--------- Withdraw money ---------" << '\n';

    std::cout << "Enter the amount to withdraw: ";
    std::cin >> withdraw;

    balance = balance - withdraw;

}

