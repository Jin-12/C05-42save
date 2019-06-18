/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 14:56:05 by jcoutura          #+#    #+#             */
/*   Updated: 2019/06/18 18:21:43 by jcoutura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int res;

	if (nb == 0 || nb == 1)
		return (1);
	else
		res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}
