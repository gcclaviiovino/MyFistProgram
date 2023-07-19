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

int count(int nb){
	int count = 1;
	int div = 1;
	while(div < nb / 2 + 1){
		if (nb % div == 0)
			count++;
		div ++;
	}

return count;
}

int fattori(int nb, int nb2){
	int div = 2;
	int div2 = 2;
	int array[count(nb)];
	int array2[count(nb2)];
	int i = 0;
	int i2 = 0;
				while(div <= nb && div2 <= nb2){
					if(nb % div == 0){
						array[i] = div;
						i ++;
						nb = nb / div;
					}
					else
						div ++;
					
					if(nb2 % div2 == 0){
						array[i2] = div2;
						i2 ++;
						nb2 = nb2 / div2;
					}
					else
						div2 ++;
					}			
	printf ("Fattori del primo numero:\n");
	for(int f = 0; f < i; f++)
		printf("%i\n", array[f]);
	printf ("Fattori del secondo numero:\n");
	for(int f2 = 0; f2 < i2; f2 ++)
		printf("%i\n", array[f2]);
	printf("\n");
	
		
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
		divisori(num, 1);
		isprime(num);
		// printf("ft_atoi: %d", num);
    }
    else if (ac > 2) {
        printf("Abbiamo più di due argomenti\n");
		num = ft_atoi(av[1]);
		num2 = ft_atoi(av[2]);
		fattori(num, num2);
    }
    else{
	
		printf("Abbiamo un solo argomento\n");
	}
	
}