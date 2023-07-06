#include <stdio.h>

int	divisori(int nb, int flag) {
	int div = 1;
	int	count = 1;

	while ( div < nb / 2 + 1)
	{
		if (nb % div == 0)
		{
			if (flag)
				printf("%i\n", div);
			count++;
		}
		div++;
	}
	if (flag)
		printf("%i\n", nb);
	return (count);
}

void	isprime(int nb) {
	if (divisori(nb, 0) == 2 || nb == 1)
		printf("il numero %i è un numero primo\n", nb);
	else
		printf("il numero %i NON è un numero primo\n", nb);
}

// void    mcm() {

// }

// void    mcd() {

// }

int	ft_atoi(char *str) {

	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] && str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - 48;
		i++;
	}
	return(sign * res);
}

int main(int ac, char **av) {
	int	num;

	num = 0;
	if (ac == 2) {
        printf("Abbiamo due argomenti\n");
		num = ft_atoi(av[1]);
		// printf("ft_atoi: %d", num);
    }
    else if (ac > 2) {
        printf("Abbiamo più di due argomenti\n");
    }
    else
		printf("Abbiamo un solo argomento\n");
	divisori(num, 1);
	isprime(num);
}