/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:56:08 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/12 13:08:12 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
	std::cout << "A wild ScavTrap appears" << std::endl;

}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "A wild ScavTrap appears" << std::endl;
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergy(50);
	this->setDamage(20);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap disappears into oblivion" << std::endl;

}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
	*this = copy;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &rhs)
{
	this->setName(rhs.getName());
	this->setHitPoints(rhs.getHitPoints());
	this->setEnergy(rhs.getEnergy());
	this->setDamage(rhs.getDamage());
	return *this;
}


/************* Member functions */

void	ScavTrap::guardGate() const
{
	std::cout << this->getName() << " entered into guard mode !" << std::endl;
}
	
void	ScavTrap::attack(const std::string& target)
{
	std::cout << this->getName() << " fiercely assaults " << target << std::endl;
	this->setEnergy(getEnergy() - 1);
}