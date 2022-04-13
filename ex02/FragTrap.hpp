/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:55:29 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/12 13:14:18 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap{

public :
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(FragTrap const &copy);
	FragTrap& operator=(FragTrap const &rhs);

	void	highFivesGuys() const;
	void	attack(const std::string& target);
};



#endif