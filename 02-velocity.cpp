#include <iostream>
int main()
{
    int u,v,t;

    std::cout << "Enter initial velocity: ";
    std::cin >> u;

    std::cout << "Enter final velocity: ";
    std::cin >> v;

    std::cout << "Enter time: ";
    std::cin >> t;
    if (t<=0)
    {
        std::cout << "Time cannot be zero or negative." << std::endl;
        return 0;
    }
    
    float avg_acceleration = static_cast<float>(v - u) / t;
    std::cout << "Average acceleration is :" << avg_acceleration << std::endl;

    return 0;
}
