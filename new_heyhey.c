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

int fattori(int nb, int nb2){
	int div = 1;
	int div2 = 1;
	int n = count;
	int n2 = count;
	int array[n];
	int array2[n2];
	int i = 0;
	int i2 = 0;
	int nb3 = 0;
	int nb4 = 0;
		while(nb % div == 0 && nb2 % div2 == 0){
			div ++;
			div2 ++;
				while (div < nb && div2 < nb2 && nb3 > 1){
					array[i] = div;
					nb3 = nb / array[i];
					array[i2] = div2;
					nb4 = nb2 / array2[i2];
					i++;
					i2++;
					
				}
		
		}
	printf ("%i", nb3);
	printf ("%i", nb4);
	return 0;
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
	int num2;

	if (ac == 2) {
        printf("Abbiamo due argomenti\n");
		num = ft_atoi(av[1]);
		// printf("ft_atoi: %d", num);
    }
    else if (ac > 2) {
		num = ft_atoi(av[1]);
		num2 = ft_atoi(av[2]);
        printf("Abbiamo più di due argomenti\n");
		fattori(num, num2);
    }
    else
		printf("Abbiamo un solo argomento\n");
	divisori(num, 1);
	isprime(num);
}