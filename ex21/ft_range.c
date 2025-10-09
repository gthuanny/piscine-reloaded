/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-cast <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:30:37 by gde-cast          #+#    #+#             */
/*   Updated: 2025/10/09 10:30:39 by gde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	med;
	int	*result;

	if (min >= max)
		return (0);
	med = max - min;
	result = malloc(sizeof(int) * (med));
	if (result == NULL)
		return (NULL);
	med = 0;
	while (max > min)
	{
		result[med] = min;
		min++;
		med++;
	}
	return (result);
}
/*
int main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
    printf("\n");
    return (0);
}
*/
