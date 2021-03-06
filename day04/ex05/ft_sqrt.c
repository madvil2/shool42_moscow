/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcollio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 23:15:26 by pcollio-          #+#    #+#             */
/*   Updated: 2018/08/25 23:15:30 by pcollio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (i * i <= nb && !(i * i < 0) && nb >= 0)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
