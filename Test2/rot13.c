/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:26:31 by thcarval          #+#    #+#             */
/*   Updated: 2023/03/29 16:36:58 by thcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rot13(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] < 'm') || (str[i] >= 'A' && str[i] < 'M'))
		{
			str[i] += 13;
			write (1, str[i], 1);
		}
		else if ((str[i] >= 'm' && str[i] <= 'z') || (str[i] >= 'M' && str[i] <= 'Z'))
		{
			str[i] -= 13;
			write (1, str[i], 1);			
		}
		else 
			write (1, str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	*str [] = "Hello Pisciners";
	rot13(str);
}
