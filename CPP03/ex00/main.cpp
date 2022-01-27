/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerkim <hyerkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:39:18 by hyerkim           #+#    #+#             */
/*   Updated: 2022/01/27 19:32:23 by hyerkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    std::string PlayerA = "42Seoul";
    std::string PlayerB = "Cadet";
    ClapTrap A(PlayerA);
    ClapTrap B;
    B = ClapTrap(PlayerB);

    A.attack(PlayerB);
    B.takeDamage(5);
    B.beRepaired(3);
    B.attack(PlayerA);
    A.takeDamage(3);
    A.beRepaired(10);
    return 0;
}