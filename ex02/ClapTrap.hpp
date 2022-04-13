/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:03:56 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/12 13:10:30 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

public :
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(ClapTrap const &copy);
	ClapTrap& operator=(ClapTrap const &rhs);
	
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string getName() const;
	int			getEnergy() const;
	int			getHitPoints() const;
	int			getDamage() const;

	void		setName(const std::string& name);
	void		setEnergy(const int energy);
	void		setHitPoints(const int hitPoints);
	void		setDamage(const int damage);

protected:
	std::string _name;
	int			_hitPoints;
	int			_energy;
	int			_damage;
};

#endif