int     ft_fibonacci(int index)
{
        if (index < 0)
                return (-1);
        else if (index <= 1)
                return (index);
        else
                return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
