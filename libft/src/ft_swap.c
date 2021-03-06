/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greyrol <greyrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 20:34:47 by greyrol           #+#    #+#             */
/*   Updated: 2014/01/12 19:10:36 by greyrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swapi(int *a, int *b)
{
	int		tmp;

	if (!a || !b)
		return ;
	tmp = *b;
	*b = *a;
	*a = tmp;
}

void	ft_swapc(char *a, char *b)
{
	char	tmp;

	if (!a || !b)
		return ;
	tmp = *b;
	*b = *a;
	*a = tmp;
}

