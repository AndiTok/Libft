#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	count_strings(const char *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

int word_count(const char *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i] != 0x00)
	{
		while (s[i] == c && s[i] != 0x00)
			i++;
		if (s[i] != 0x00)
			count++;
		while (s[i] != c && s[i] != 0x00)
			i++;
	}
	return (count);
}

char	*ft_word(const char *str, char c)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = 0;
	while (str[len_word] && str[len_word] != c)
		len_word++;
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(const char *str, char c)
{
	char	**strings;
	int		i;

	if (!str)
		return (0);
	i = 0;
	strings = (char **)malloc(sizeof(char *) * (word_count(str, c)
				+ 1));
	if (!strings)
		return (0);
	while (*str != '\0')
	{
		while (*str && *str == c)
			str++;
		if (*str)
		{
			strings[i] = ft_word(str, c);
			i++;
		}
		while (*str && *str != c)
			str++;
	}
	strings[i] = 0;
	return (strings);
}

int main(void)
{
	char **split;
	size_t	i = 0;
	size_t	j = 0;
	char str[] = "   hello world  123  test   ";
	char delim = ' ';

	split = ft_split(str, delim);

	printf("hy str has %i words", count_strings(str, delim));
	printf("andi str has %i words", word_count(str, delim));

	while (split[i])
	{
		j = 0;
		while (split[i][j])
			write(1, &split[i][j++], 1);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
