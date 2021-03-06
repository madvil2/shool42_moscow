/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcollio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 06:04:40 by pcollio-          #+#    #+#             */
/*   Updated: 2018/08/28 06:14:41 by pcollio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i] || (s1[i] ^ 32) == s2[i])
			continue;
		else
			break ;
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	if ((s1[i] | 32) < (s2[i] | 32))
		return (-1);
	return (1);
}
