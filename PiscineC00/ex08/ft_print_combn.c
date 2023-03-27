/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:20:03 by thcarval          #+#    #+#             */
/*   Updated: 2023/03/13 11:20:23 by thcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	initialize_array(char *nums, int length)
{
	int		i;

	i = 0;
	while (i < length)
	{
		nums[i] = '0';
		i++;
	}
}

int	increase_check(char *nums, int length)
{
	int	i;

	i = 0;
	while (i < length)
	{
		if (nums[i++] != '9')
		{
			i = length - 1;
			while (i >= 0)
			{
				if (++nums[i] > '9')
				{
					nums[i--] = '0';
				}
				else
				{
					break ;
				}
			}
			return (1);
		}
	}
	return (0);
}

int	check_unique(char *nums, int length)
{
	int	i;
	int	j;

	i = 0;
	while (i < length - 1)
	{
		j = i + 1;
		while (j < length)
		{
			if (nums[i] >= nums[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_print_combn(int n)
{
	char	nums[99];
	int		first;

	first = 1;
	initialize_array(nums, n);
	while (increase_check(nums, n))
	{
		if (check_unique(nums, n))
		{
			if (first)
			{
				first = 0;
			}
			else
			{
				write(1, ", ", 2);
			}
			write(1, &nums, n);
		}
	}
}
