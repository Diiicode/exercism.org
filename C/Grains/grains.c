/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grains.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 02:47:20 by diserra           #+#    #+#             */
/*   Updated: 2025/08/28 16:54:18 by diserra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grain.h"
#include <stdio.h>
#include <inttypes.h>

uint64_t square(uint8_t index)
{
	uint64_t grains;
    uint8_t i;

    if (index < 1 || index > 64)
        return 0;

    grains = 1;
    i = 1;
    while (i < index)
    {
        grains *= 2;
        i++;
    }
    return (grains);
}

uint64_t total(void)
{
	uint64_t sum;
    uint8_t i;

    sum = 0;
    i = 1;
    while (i <= 64)
    {
        sum += square(i);
        i++;
    }
    return (sum);
}

int	main(void)
{
	uint64_t result = total();
	printf("%" PRIu64 "\n", result);
	return (0);
}
