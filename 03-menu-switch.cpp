#include <iostream>

int main()
{
    int choice;
    int quantity;
    float total = 0;

   std::cout << "====== Fast Food Menu ======" << std::endl;
    std::cout << "1. Pizza        Rs 120" << std::endl;
    std::cout << "2. Burger       Rs 80" << std::endl;
    std::cout << "3. French Fries Rs 60" << std::endl;
    std::cout <<"============================" << std::endl;

    std::cout << "Enter your choice: ";
    std::cin >> choice; 

    switch(choice)
    {
        case 1:
            std::cout << "How many Pizzas? ";
            std::cin >> quantity;
            total = quantity * 120;
            std::cout << "Total bill = Rs " << total << std::endl;
            std::cout << "Thank you! Visit again." << std::endl;
            break;

        case 2:
            std::cout << "How many Burgers? ";
            std::cin >> quantity;
            total = quantity * 80;
            std::cout << "Total bill = Rs " << total << std::endl;
            std::cout << "Thank you! Visit again." << std::endl;
            break;

        case 3:
            std::cout << "How many French Fries? ";
            std::cin >> quantity;
            total = quantity * 60;
            std::cout << "Total bill = Rs " << total << std::endl;
            std::cout << "Thank you! Visit again." << std::endl;
            break;

        default:
            std::cout << "Invalid choice!" << std::endl;
    }

    return 0;
}
