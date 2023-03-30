/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_parameter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 00:25:50 by thcarval          #+#    #+#             */
/*   Updated: 2023/03/30 00:48:42 by thcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;

	if (argc >=2)
	{
		while (argv[argc - 1][i])
		{
			write (1, &argv[argc - 1][i], 1);
			i++;
		}
	
	}
	write (1, "\n",1);
	return (0);
}