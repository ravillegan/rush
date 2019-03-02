/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdean <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 12:41:48 by hdean             #+#    #+#             */
/*   Updated: 2019/03/02 15:29:33 by hdean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int len;
	int wid;

	len = 0;
	wid = 0;
	while (wid < y)
	{
		len = 0;
		while (len < x)
		{
			if (len == 0 && (wid == 0 || wid == (y - 1)))
				ft_putchar('A');
			else if ((wid == 0 || wid == (y - 1)) && len == (x - 1))
				ft_putchar('C');
			else if (len == (x - 1) || len == 0 || wid == 0 || wid == (y - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			len++;
		}
		ft_putchar('\n');
		wid++;
	}
}
