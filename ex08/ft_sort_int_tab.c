#include<unistd.h>
#include<stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int tmp;

	i = 0;
	while (i < size)
	{
		j = i;
		while (j>0)
		{
			if (tab[j-1] > tab [j])
			{
				tmp = tab[j];
				tab[j] = tab[j-1];
				tab[j-1] = tmp;
				j--;
			}
			else
				break;
		}
		i++;
	}
}

int main(void)
{
	int arr[10] = {9,8,7,1,2,3,6,5,4,3};
	ft_sort_int_tab(arr,10);
	for(int i = 0; i<10; i++)
		printf("%d", arr[i]);
}
