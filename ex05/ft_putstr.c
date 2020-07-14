/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskhomo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:26:02 by oskhomo           #+#    #+#             */
/*   Updated: 2020/07/14 16:39:16 by oskhomo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */#include <unistd.h>
void	putchar(char c);

void	putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
}
