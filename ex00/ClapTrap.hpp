/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:03:56 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/12 11:09:01 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

private:
	std::string _name;
	int			_hitPoints;
	int			_energy;
	int			_damage;


};