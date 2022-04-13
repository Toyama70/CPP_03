/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:03:43 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/12 11:46:26 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap pnj("Johnson");
	
	for (int i = 0; i < 10 ; i++)
		pnj.attack("Pablo");
	pnj.attack("Bobby");
	std::cout << "energy left is " << pnj.getEnergy() << std::endl;
	pnj.takeDamage(5);
	std::cout << pnj.getName() << " life left is " << pnj.getHitPoints() << std::endl;
	pnj.beRepaired(3);
	std::cout << pnj.getName() << " life left is " << pnj.getHitPoints() << std::endl;
	
	
}