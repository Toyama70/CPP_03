/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:03:43 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/12 13:00:15 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	//ClapTrap pnj("Johnson");
	FragTrap pnj("Johnson");


	for (int i = 0; i < 10 ; i++)
		pnj.attack("Pablo");
	pnj.attack("Bobby");
	std::cout << "energy left is " << pnj.getEnergy() << std::endl;
	pnj.takeDamage(5);
	std::cout << pnj.getName() << " life left is " << pnj.getHitPoints() << std::endl;
	pnj.beRepaired(3);
	std::cout << pnj.getName() << " life left is " << pnj.getHitPoints() << std::endl;
	pnj.highFivesGuys();	
	
}