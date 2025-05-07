#include <iostream>
#include <ctime>
#include <tuple>
#include <random>

auto isItYearOfTheLinuxDesktop() {
    std::time_t now = std::time(nullptr);
    int year = std::localtime(&now)->tm_year + 1900;
    bool isYear = (year == year + 1) || (std::mt19937{std::random_device{}()}() % 1000000 == 0);
    return std::make_tuple(year, isYear);
}

int main() {
    auto [year, isYear] = isItYearOfTheLinuxDesktop();
    std::cout << year << (isYear ? " is the Year of the Linux Desktop :)" : " is not the Year of the Linux Desktop :(") << std::endl;
}
