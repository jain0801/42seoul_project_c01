#include <unistd.h>
#include <stdio.h>
int	ft_strlen(char	*str)
{
	int len;

	len = 0;
	while(str[len])
	{
		len++;
	}
	return len;
}

int main(void)
{
	int i;
	i=0;
	char arr[] = "ABCDE";
	i = ft_strlen(arr);
	printf("%d",i);
}
