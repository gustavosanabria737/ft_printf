/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanabri <gsanabri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:37:53 by gsanabri          #+#    #+#             */
/*   Updated: 2024/12/30 18:48:35 by gsanabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"
#include "libft/libft.h"

static	int ft_putnbr_base(unsigned long num, char *base)
{
	int	base_len;
	int	char_count;

	base_len = ft_strlen(base);
	char_count = 0;
	if (num >= (unsigned long)base_len)
	{
		ft_putnbr_base(num / base_len, base);
		char_count++;
	}
	ft_putchar_fd(base[num % base_len], 1);
	char_count++;
	return (char_count);
}
int ft_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
	int	char_count;

	char_count = 0;
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%' && format[i + 1] != '\0') {
            i++;
			if (format[i] == 'c') {
                char c = (char)va_arg(args, int);
                ft_putchar_fd(c, 1);
				char_count++;
            } else if (format[i] == 's') {
                char *str = va_arg(args, char *);
                ft_putstr_fd(str, 1);
				char_count++;
            } else if (format[i] == 'p')
			{
				void *ptr = va_arg(args, void *);
				if (!ptr)
				{
					ft_putstr_fd("(nil)", 1);
				} else
				{
					ft_putstr_fd("0x", 1);
					ft_putnbr_base((unsigned long)ptr, "0123456789abcdef");
				}
			}
			
			else if (format[i] == 'd') {
                int num = va_arg(args, int);
                ft_putnbr_fd(num, 1);
				char_count++;
            } else if (format[i] == 'i')
			{
				unsigned int int_num = va_arg(args, unsigned int);
				ft_putnbr_fd(int_num, 1);
			}
			 else if (format[i] == 'x')
			{
				//unsigned int num = va_arg(args, unsigned int);
			} else {
                ft_putchar_fd('%', 1);
                ft_putchar_fd(format[i], 1);
				char_count++;
            }
        } else {
            ft_putchar_fd(format[i], 1);
			char_count++;
        }
    }

    va_end(args);
	return (char_count);
}

/* int main() {
    ft_printf("Hello, %s! The number is %d and char is %c.\n", "world", 42, 'A');
    return 0;
} */
