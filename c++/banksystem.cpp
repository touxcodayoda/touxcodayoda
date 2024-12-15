#include <iostream>

int main(){

    int menuopt;
    std::string firstname;
    std::string lastname;
    double balance = 0;
    double addbalance;
    double minusbalance;

    std::cout << "---------- BANK SYSTEM -----------\n";

    while (true){
            std::cout << "Please choose your option. \n";
            std::cout << "1. Create new account\n";
            std::cout << "2. Check balance\n";
            std::cout << "3. Deposit cash\n";
            std::cout << "4. Withdraw cash\n";
            std::cout << "5. Quit\n";
            std::cout << "Enter your option: ";
            std::cin >> menuopt;

            switch(menuopt){
                case 1:

                    std::cout << "---------- Create New Account ----------\n";

                    std::cout << "Enter first name: ";
                    std::cin >> firstname;

                    std::cout << "Enter last name: ";
                    std::cin >> lastname;

                    std::cout << "Your account name is: " << firstname << " " << lastname << '\n';
                    std::cout << "----------------------------------------\n";
                    break;
                case 2:
                    std::cout << "---------- Check Account Balance ----------\n";
                    std::cout << "Account balance for: " << firstname << " " << lastname << '\n';
                    std::cout << "Account balance: " << balance << '\n';
                    std::cout << "----------------------------------------\n";

                    break;
                case 3:
                    std::cout << "---------- Deposit Money ----------\n";
                    std::cout << "Enter the amount you want to deposit: ";
                    std::cin >> addbalance;

                    balance = balance + addbalance;
                    std::cout << "----------------------------------------\n";

                    break;
                case 4:
                    std::cout << "---------- Withdraw Money ----------\n";
                    std::cout << "Enter the amount you want to withdraw: ";
                    std::cin >> minusbalance;

                    balance = balance - minusbalance;
                    std::cout << "----------------------------------------\n";
                    break;
                case 5:
                    std::cout << "----------------------------------------\n";
                    std::cout << "Thank you for using this system\n";
                    std::cout << "----------------------------------------\n";
                    return 0;
                default:
                    std::cout << "Invalid input. Please enter a valid option (1-5)";
                    return 0;
            }
    
    }


    return 0;
}