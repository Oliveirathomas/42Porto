/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 23:24:19 by thcarval          #+#    #+#             */
/*   Updated: 2023/03/29 23:44:23 by thcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	alphamax(char *str)
{
	int	i;

	i = 0;
	while ( str[i])
	{
		if (str[i] % 2 == 0)
		{
			if (str[i] <= 'a' && str[i] >= 'z')
			{
				str[i] -= 32;
				write( 1, &str[i], 1);
			}
			else
			     	write (1, &str[i], 1);
		}
		else if (str[i] % 2 != 0)
		{
                        if (str[i] <= 'A' && str[i] >= 'Z')
			{
				str[i] += 32;
				write (1, &str[i], 1);
			}
			else
				write (1, &str[i], 1);
		}
		i++;
	}
}



int	main(void)
{
	char str [] = "HeLLo Pisciners";
	alphamax(str);
	return (0);
}
