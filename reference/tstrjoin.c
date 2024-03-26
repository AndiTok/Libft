
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char const *str)
{
	int	len;

	len = 0;
	while (str[len] != 0x00)
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;
	int	j;

	i = 0;
	while (src[i] != 0x00)
		i++;
	{
		j = 0;
		while (src[j] != '\0')
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = 0x00;
	}
	return (dest);
}

char	*ft_strcat(char *dest, const char *src)
{
	int	dl;
	int	sl;

	dl = 0;
	while (dest[dl] != 0x00)
		dl++;
	sl = 0;
	while (src[sl] != 0x00)
	{
		dest[dl] = src[sl];
		dl++;
		sl++;
	}
	dest[dl] = 0x00;
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*join;

	if (!s1 && !s2)
		return (NULL);
	i = 0;
	if (s1)
		i += ft_strlen(s1);
	if (s2)
		i += ft_strlen(s2);
	join = (char *)malloc(sizeof(char) * (i + 1));
	if (!join)
		return (NULL);
	if (s1 && s2)
	{
		ft_strcat(ft_strcpy(join, s1), s2);
		return (join);
	}
	else if (s1 != NULL && s2 == NULL)
		return (ft_strcpy(join, s1));
	else if (s1 == NULL && s2 != NULL)
		return (ft_strcpy(join, s2));
	else
		return (NULL);
}

int main (void)
{
	char s1[] = "front";
	char s2[] = "back";

	printf(":%s:\n",ft_strjoin(s1,s2));

	return (0);
}