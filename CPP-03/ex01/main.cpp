/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra < aleferra@student.42lyon.fr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:12:35 by aleferra          #+#    #+#             */
/*   Updated: 2022/06/29 15:58:22 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "Scavtrap.hpp"

int main(void)
{
	ClapTrap A;
	ClapTrap B("Roger");
	ScavTrap E("Jean");

	A.printInfo();
	A.attack("Roger");
	E.printInfo();
	E.guardGate();
	E.attack("Roger");
	E.printInfo();
	A.printInfo();
	B.printInfo();
}