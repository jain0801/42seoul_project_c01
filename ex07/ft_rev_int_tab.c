#include <unistd.h>
#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = size-1;
	while (i < j)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;
	}
}

int main(void)
{
	int arr[10] = {0, 1,2,3,4,5,6,7,8,9};
	
	for (int i=0; i<10; i++){
		printf("%d",arr[i]);
	}

	ft_rev_int_tab(arr, 10);
	
	printf("\n");
	for (int i=0; i<10; i++){
		printf("%d",arr[i]);
	}
}
