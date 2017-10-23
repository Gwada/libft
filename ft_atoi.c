int		ft_atoi(const char *nptr)
{
	int		i;
	int		num;
	int		pos_num;

	i = 0;
	num = 0;
	pos_num = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 7 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			pos_num = - 1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		num = num * 10 + nptr[i++] - '0';
	return (num * pos_num);
}
