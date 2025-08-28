/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diserra <diserra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:51:39 by diserra           #+#    #+#             */
/*   Updated: 2025/08/28 16:52:17 by diserra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "leap.h"

bool leap_year(int year)
{
    if (year % 400 == 0)
        return true;
    if (year % 100 == 0)
        return false;
    if (year % 4 == 0)
        return true;
    return false;
}
