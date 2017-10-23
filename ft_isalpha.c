int		ft_isupper(int c);
int		ft_islower(int c);

int		ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}

int		ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
