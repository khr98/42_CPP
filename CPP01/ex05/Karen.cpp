#include "Karen.hpp"

void Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::nothing(void)
{
    std::cout << "Input is wrong!" << std::endl;
}

void Karen::complain(std::string level)
{
    void (Karen::*levelFunc)();

    levelFunc = &Karen::nothing;
    (!level.compare("DEBUG") && (levelFunc = &Karen::debug));
    (!level.compare("INFO") && (levelFunc = &Karen::info));
    (!level.compare("WARNING") && (levelFunc = &Karen::warning));
    (!level.compare("ERROR") && (levelFunc = &Karen::error));
    (this->*levelFunc)();
}
