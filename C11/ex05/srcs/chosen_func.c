/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chosen_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 19:10:10 by alex              #+#    #+#             */
/*   Updated: 2020/07/15 20:24:04 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int	chosen_func(int op)
{
	int	res;

	res = -1;
	if (op == 43)
		res = 0;
	else if (op == 45)
		res = 1;
	else if (op == 42)
		res = 2;
	else if (op == 47)
		res = 3;
	else if (op == 37)
		res = 4;
	return (res);
}