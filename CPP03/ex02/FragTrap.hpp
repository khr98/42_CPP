/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyerkim <hyerkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:45:35 by hyerkim           #+#    #+#             */
/*   Updated: 2022/01/26 14:45:35 by hyerkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap : public ClapTrap
{
private:
public:
    FragTrap();
    FragTrap(std::string &n);
    FragTrap(const FragTrap &obj);
    ~FragTrap();
    FragTrap &operator=(const FragTrap &obj);
    void highFivesGuys(void);
};

#endif
