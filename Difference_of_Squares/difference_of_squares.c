/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   difference_of_squares.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 02:07:56 by diserra           #+#    #+#             */
/*   Updated: 2025/08/26 02:39:06 by diserra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	sum_of_squares(unsigned int number)
{
	unsigned int	result;
	unsigned int	count;

	result = 0;
	count = 1;
	while (count <= number)
	{
		result += (count * count);
		count++; 
	}
	return (result);
}

unsigned int	square_of_sum(unsigned int number)
{
	unsigned int	result;
	unsigned int	count;

	result = 0;
	count = 1;
	while (count <= number)
	{
		result += count;
		count++; 
	}
	return (result * result);
}

unsigned int	difference_of_squares(unsigned int number)
{
	int	result;

	result = square_of_sum(number) - sum_of_squares(number);
	return (result);
}

int	main(void)
{
	int result;
	/*result = sum_of_squares(10);
	printf("%d\n", result);
	result = square_of_sum(10);
	printf("%d\n", result);*/
	result = difference_of_squares(10);
	printf("%d\n", result);
	return (0);
}
