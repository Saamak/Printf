/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitzini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:55:17 by ppitzini          #+#    #+#             */
/*   Updated: 2023/11/15 22:43:01 by ppitzini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int	count_len(char *s)
{
	int	i;

	i = 0;
	while(s[i] != 0)
		i++;
	return (i);
}
*/
void	print_it(char it, va_list bob)
{
	unsigned char	*ptr;

	if (it == 'c')
		ft_putchar(va_arg(bob, int)); //done
	else if (it == 's')
		ft_putstr(va_arg(bob, char *)); //done
	else if (it == 'p')
	{
		ptr = (va_arg(bob, void*)); // ToDO
	}
	else if (it == 'd')
		ft_putnbr(va_arg(bob, int)); //done
	else if (it == 'i')
		ft_putnbr(va_arg(bob, int)); //done
	else if (it == 'u')
		ft_putnbr(va_arg(bob, unsigned int)); //done
	else if (it == 'x')
		printf("end");
	else if (it == 'X')
		printf("end");
	else if (it == '%')
		ft_putchar('%'); //done
	va_end(bob);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		len;

	len = 0;
	i = 0;
	va_list	bob;
	va_start(bob, s);
	if (s == NULL)
		return (0);
	while (s[i] != 0)
	{
		if (s[i] != '%')
			ft_putchar(s[i]);
		else
		{
			print_it(s[i + 1], bob);
			i++;
		}
		i++;
	}
	return (0);
}

int main()
{
char *p;

p = "ff";

printf("my function :    ");
fflush(stdout);
ft_printf("bob%p", p);
printf("\n");
printf("     -----------------------------------------     \n");
printf("real printf :    ");
printf("bob%p", p);
}
