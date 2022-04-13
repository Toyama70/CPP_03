/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:43:52 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/12 13:15:19 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Claptrap constructor called" << std::endl;

}

ClapTrap::ClapTrap(std::string name)
: _name(name)
{
	std::cout << "Claptrap constructor called" << std::endl;
	_hitPoints = 10;
	_energy = 10;
	_damage = 0;

}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap destructor called" << std::endl;

}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	*this = copy;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &rhs)
{
	_name = rhs.getName();
	_hitPoints = rhs.getHitPoints();
	_energy = rhs.getEnergy();
	_damage = rhs.getDamage();
	return *this;
}

/********* Getters */

std::string	ClapTrap::getName()const
{
	return(this->_name);
}

int			ClapTrap::getEnergy()const
{
	return(this->_energy);
}

int			ClapTrap::getHitPoints() const
{
	return(this->_hitPoints);	
}

int			ClapTrap::getDamage() const
{
	return(this->_damage);
}

/****** Setters */

	void		ClapTrap::setName(const std::string& name)
	{
			_name = name;
	}

	void		ClapTrap::setEnergy(const int energy)
	{
		_energy = energy;
	}

	void		ClapTrap::setHitPoints(const int hitPoints)
	{
		_hitPoints = hitPoints;
	}

	void		ClapTrap::setDamage(const int damage)
	{
		_damage = damage;
	}

/****** Functions */

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << getName() << " took some damage for an unknown reason : " << amount << std::endl;
	
	_hitPoints -= amount;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energy > 0)
	{
	std::cout << getName() << " attacks " << target;
	std::cout << " causing " << _damage << " points of damage !" << std::endl;
	_energy -= 1;
	}
	else
		std::cout << getName() << "lacks energy." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy > 0)
	{
		_hitPoints += amount;
		std::cout << getName() << " repaired himself for this amount : ";
		std::cout << amount << std::endl;
		_energy -= 1;
	}
	else 
		std::cout << getName() << " lacks energy." << std::endl;
}