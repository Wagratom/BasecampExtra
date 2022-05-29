/* 00000000  20 0a 76 6f 75 20 74 65  73 74 61 20 75 6d 20 70  | .vou testa um p|
00000010  72 6f 67 72 61 6d 61 0a  64 61 6e 69 65 6c 20 70  |rograma.daniel p|
00000020  61 72 65 63 65 20 6f 20  63 61 72 69 6e 68 61 20  |arece o carinha |
00000030  64 6f 20 62 61 74 65 73  20 6d 6f 74 65 6c 2e 0a  |do bates motel..|
00000040  6b 61 70 70 61 0a                                 |kappa.|
00000046 */

#include "ft_hexdump.h"
#include <stdio.h>

char	**print_hex(char **str_hex)
{
	size_t	i;

	i = 0;
	while (str_hex[i] && i < 16)
	{
		ft_putstr(str_hex[i]);
		if (i == 7)
			ft_putchar(' ');
		ft_putchar(' ');
		i++;
	}
	while (i < 16)
	{
		ft_putstr("   ");
		i++;
	}
	return (&str_hex[i]);
}

char	*print_str(char *str)
{
	size_t i;

	ft_putchar('|');
	i = 0;
	while (str[i] && i < 16)
	{
		if (str[i] == '\n')
			ft_putchar('.');
		else 
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('|');
	ft_putchar('\n');
	return (&str[i]);
}

int	print_coln_hex(int c) // 
{
	char	*base;
	char	*result;
	int		size;

	base = "0123456789abcdef";
	result = (char *) malloc(9);
	result[9] = '\0';
	size = 8;
	while (c || size >= 0)
	{
		result[size] = base[c % 16];
		size--;
		c /= 16;
	}
	size = 1;
	while (result[size])
	{
		ft_putchar(result[size]);
		size++;
	}
	ft_putstr("  ");
	size = 0;
	return (16);
}

void	printf_output(char *str,char **str_hex)
{

	int		count;
	int		size;

	size = ft_strlen(str);
	count = 1;
	ft_putstr("00000000  ");
	str_hex = print_hex(str_hex);
	str = print_str(str);
	while (*str)
	{
		print_coln_hex(16 * count);
		str_hex = print_hex(str_hex);
		str = print_str(str);
		count++;
	}
	print_coln_hex(size);
	ft_putchar('\n');
}