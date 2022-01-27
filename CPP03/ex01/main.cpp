/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerkim <hyerkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:42:54 by hyerkim           #+#    #+#             */
/*   Updated: 2022/01/27 19:32:36 by hyerkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    std::string PlayerA = "42Seoul";
    std::string PlayerB = "Cadet";
    ScavTrap A(PlayerA);
    ScavTrap B;
    B = ScavTrap(PlayerB);

    A.attack(PlayerB);
    B.takeDamage(20);
    B.beRepaired(3);
    B.attack(PlayerA);
    A.takeDamage(20);
    A.beRepaired(10);

    A.guardGate();
    B.guardGate();
    return 0;
}