/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:55:31 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/12 13:13:22 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap has been summoned" << std::endl;

}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap has been summoned" << std::endl;
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergy(100);
	this->setDamage(30);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap killed himself" << std::endl;

}

FragTrap::FragTrap(FragTrap const &copy)
{
	*this = copy;
}

FragTrap& FragTrap::operator=(FragTrap const &rhs)
{
	this->setName(rhs.getName());
	this->setHitPoints(rhs.getHitPoints());
	this->setEnergy(rhs.getEnergy());
	this->setDamage(rhs.getDamage());
	return *this;
}


/************* Member functions */

void	FragTrap::highFivesGuys() const
{
	std::cout << this->getName() << " is requesting high fives from everrrryyyyone" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	std::cout << this->getName() << " is proud to attack " << target << std::endl;
	this->setEnergy(getEnergy() - 1);
}