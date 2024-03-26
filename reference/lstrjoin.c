#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*join;

	if (!s1 && !s2)
		return (NULL);
	i = 0;
	if (s1)
		i += strlen(s1); //same as i = i + strlen(s1)
	if (s2)
		i += strlen(s2);
	join = (char *)malloc(sizeof(char) * (i + 1));
	if (!join)
		return (NULL);
	if (s1 && s2)
	{
		strcat(strcpy(join, s1), s2);
		return (join);
	}
	else if (s1 != NULL && s2 == NULL)
		return (strcpy(join, s1));
	else if (s1 == NULL && s2 != NULL)
		return (strcpy(join, s2));
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