/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:31:01 by thcarval          #+#    #+#             */
/*   Updated: 2023/03/27 17:58:50 by thcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	i;

	i = 1;
	factorial = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		factorial *= i;
		i++;
	}
	return (factorial);
}
