/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 00:51:27 by thcarval          #+#    #+#             */
/*   Updated: 2023/03/30 01:00:29 by thcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ulstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 97)
		{
			str[i] += 32;
			write (1, &str[i], 1);
		}
		else if (str[i] >= 97 && str[i] <= 120)
		{
			str[i] -= 32;
			write (1, &str[i], 1);		
		}
		else 
			write (1, &str[i], 1);
		i++;	
	}
}



int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ulstr(argv[1]);	
	}
	write (1, "\n", 1);
	return (0);
}
