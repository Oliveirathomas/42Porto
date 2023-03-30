/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:19:49 by thcarval          #+#    #+#             */
/*   Updated: 2023/03/29 22:45:19 by thcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	number(char c)
{	
	write (1, &c, 1);
}


void	multiple()
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if ( i % 5 == 0)
			write (1, "buzz", 4);
		else if ( i % 3 == 0)
			write (1, "fizz", 4);
		else if (i < 9)
				number(i + 48);
		else if (i > 9)
			{
				number((i / 10) + 48);
				number((i % 10) + 48);		
			}
		
		write (1, "\n", 1);
		i++;
	}
}

int	main(void)
{
	multiple();
	return (0);
}
