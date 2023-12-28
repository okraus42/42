/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:29:52 by okraus            #+#    #+#             */
/*   Updated: 2023/12/28 16:37:03 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	static int	index[256] = {0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,
		0x2003, 0x2003, 0x2003, 0x2003, 0x2003, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,
		0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x6001,
		0xc005, 0xc005, 0xc005, 0xc005, 0xc005, 0xc005, 0xc005, 0xc005, 0xc005,
		0xc005, 0xc005, 0xc005, 0xc005, 0xc005, 0xc005, 0xd809, 0xd809, 0xd809,
		0xd809, 0xd809, 0xd809, 0xd809, 0xd809, 0xd809, 0xd809, 0xc005, 0xc005,
		0xc005, 0xc005, 0xc005, 0xc005, 0xc005, 0xd509, 0xd509, 0xd509, 0xd509,
		0xd509, 0xd509, 0xc509, 0xc509, 0xc509, 0xc509, 0xc509, 0xc509, 0xc509,
		0xc509, 0xc509, 0xc509, 0xc509, 0xc509, 0xc509, 0xc509, 0xc509, 0xc509,
		0xc509, 0xc509, 0xc509, 0xc509, 0xc005, 0xc005, 0xc005, 0xc005, 0xc005,
		0xc005, 0xd609, 0xd609, 0xd609, 0xd609, 0xd609, 0xd609, 0xc609, 0xc609,
		0xc609, 0xc609, 0xc609, 0xc609, 0xc609, 0xc609, 0xc609, 0xc609, 0xc609,
		0xc609, 0xc609, 0xc609, 0xc609, 0xc609, 0xc609, 0xc609, 0xc609, 0xc609,
		0xc005, 0xc005, 0xc005, 0xc005, 0x3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	if (c & 0xFFFFFF00)
		return (0);
	return (index[c] & 0x8);
}
