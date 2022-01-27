/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerkim <hyerkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:45:47 by hyerkim           #+#    #+#             */
/*   Updated: 2022/01/27 19:32:46 by hyerkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    std::string PlayerA = "42Seoul";
    std::string PlayerB = "Cadet";
    ScavTrap A(PlayerA);
    FragTrap B;
    B = FragTrap(PlayerB);

    A.attack(PlayerB);
    B.takeDamage(20);
    B.beRepaired(3);
    B.attack(PlayerA);
    A.takeDamage(30);
    A.beRepaired(10);

    A.guardGate();
    B.highFivesGuys();

    return 0;
}