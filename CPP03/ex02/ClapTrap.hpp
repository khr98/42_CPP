/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerkim <hyerkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:45:03 by hyerkim           #+#    #+#             */
/*   Updated: 2022/01/26 14:45:04 by hyerkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
protected:
    std::string name;
    int HP;
    int EP;
    int AD;

public:
    ClapTrap();
    ClapTrap(std::string &n);
    ClapTrap(std::string &n, int hp, int ep, int ad);
    ClapTrap(int hp, int ep, int ad);
    ClapTrap(const ClapTrap &obj);
    ~ClapTrap();
    ClapTrap &operator=(const ClapTrap &obj);
    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
