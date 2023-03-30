/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 02:32:29 by thcarval          #+#    #+#             */
/*   Updated: 2023/03/30 02:49:32 by thcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	first_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] && (str[i] == '\t' || str[i] == 32))
	{
		i++;
	}
	while (str[i] && (str[i] != '\t' && str[i] != 32))
	{
		write (1, &str[i], 1);
		i++;
	}
}


int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		first_word(argv[1]);	
	}
	write(1, "\n", 1);
	return (0);
}
