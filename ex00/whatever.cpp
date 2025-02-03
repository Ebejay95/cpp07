void	swap(int a, int b)
{
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
}

int	min(int a, int b)
{
	if (b < a)
		return b;
	return a;
}

int	max(int a, int b)
{
	if (b > a)
		return b;
	return a;
}