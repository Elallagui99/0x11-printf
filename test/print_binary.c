int _printf_binary(unsigned int num)
{
	int binary[64] = {0};
	int j, i = 0;
            int count =0;

	if (num == 0)
	{
		count += print_char('0');
		return (count);
	}
	while (num > 0)
	{
		binary[i] = num & 1;
		num = num >> 1;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		count += print_ char(binary[j] + '0');
	}
	return (count);
}
