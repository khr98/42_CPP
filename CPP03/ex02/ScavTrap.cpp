/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerkim <hyerkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:46:14 by hyerkim           #+#    #+#             */
/*   Updated: 2022/01/26 14:46:15 by hyerkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(100, 50, 20)
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string &n) : ClapTrap(n, 100, 50, 20)
{
    std::cout << "ScavTrap constructor called with string" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = obj;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name;
    std::cout << " destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
    ClapTrap::operator=(obj);
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap <" << name
              << "> have enterred in Gate kepper mode." << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
    if (HP == 0)
    {
        std::cout << "ScavTrap <" << name << "> can't attack, because it's already destroy" << std::endl;
    }
    std::cout << "ScavTrap <" << name
              << "> attack <" << target << ">, causing <"
              << AD << "> points of damage !" << std::endl;
}