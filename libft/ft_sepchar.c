/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sepchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhorker <dhorker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 21:24:08 by dhorker           #+#    #+#             */
/*   Updated: 2018/12/12 21:25:43 by dhorker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sepchar(char const *s, unsigned char c)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (*s++)
		if (*s == c && *(s + 1) != c)
			i++;
	return (i);
}
