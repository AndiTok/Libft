
#include <stdio.h>
#include <stdlib.h>
//#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != 0x00)
		len++;
	return (len);
}

int	word_count(const char *s, char c)
{
	size_t	count;
	size_t	trigger;

	count = 0;
	trigger = 0;
	while (*s)
	{
		if (*s != c && trigger == 0)
		{
			trigger++;
			count++;
		}
		else if (*s == c)
			trigger = 0;
		s++;
	}
	return (count);
}

char	*word_dup(const char *s1, int start, int end)
{
	int		i;
	char	*tmp;

	tmp = (char *)malloc((end - start + 1) * sizeof(char));
	i = 0;
	while (start < end)
		tmp[i++] = s1[start++];
	tmp[i] = 0x00;
	return (tmp);
}

//Steven
size_t	ft_whileloop(char c ,char const *s, char **split)
{
	size_t	j;
	size_t	i;
	int		k;

	j = 0;
	i = 0;
	k = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && k == -1)
			k = i;
		else if ((s[i] == c || i == ft_strlen(s)) && k >= 0)
		{
			split[j++] = word_dup(s, k, i);
			k = -1;
		}
		i++;
	}
	return(j);
}

char	**ft_split(char const *s, char c)
{
	size_t	j;
	char	**split;

	if (!s)
		return (0);
	split = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	j = ft_whileloop(c, s, split);
	split[j] = 0x00;
	return (split);
}


// char	**ft_split(char const *s, char c)
// {
// 	size_t	i;
// 	size_t	j;
// 	int		k;
// 	char	**split;

// 	if (!s)
// 		return (0);
// 	split = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
// 	if (!split)
// 		return (0);
// 	i = 0;
// 	j = 0;
// 	k = -1;
// 	while (i <= ft_strlen(s))
// 	{
// 		if (s[i] != c && k == -1)
// 			k = i;
// 		else if ((s[i] == c || i == ft_strlen(s)) && k >= 0)
// 		{
// 			split[j++] = word_dup(s, k, i);
// 			k = -1;
// 		}
// 		i++;
// 	}
// 	split[j] = 0x00;
// 	return (split);
// }

int	main(void)
{
	// char s[] = "\0";
	char *s = "      split       this for   me  !       ";
	char c = 32; //delimiter character
	char **split;// = malloc(sizeof(ft_split(s, c) + 1));
	int i = 0;
	split = ft_split(s, c); //**memory leak in this allocation**
	while (split[i] != 0x00)
		printf("\n\t%s", split[i++]);
	printf("\n");
	// printf("\n\t%s", split[1]);
	// printf("\n\t%s", split[2]);
	// printf("\n\t%s", split[3]);
	// printf("\n\t%s", split[4]);
	// printf("\n\t%s\n\n", split[5]);
	free (split);
}
