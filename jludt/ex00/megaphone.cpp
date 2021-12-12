/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 07:45:47 by julian            #+#    #+#             */
/*   Updated: 2021/11/26 08:33:36 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static char	ft_toupper(char c)
{
	if (c > 96 && c < 123)
		return (c - 32);
	else
		return (c);
}

int	main(int argc, char *argv[])
{	
	int	i;
	int	j;
	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i = 0;
		while (++i < argc)
		{
			j = -1;
			while (argv[i][++j] != '\0')
				std::cout << ft_toupper(argv[i][j]);
		}
	}
	std::cout << std::endl;
	return (0);
}
