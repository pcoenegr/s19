int     ft_iterative_power(int nb, int power)
{
        int     t;

        t = 1;
        if (power < 0)
                return (0);
        if (power == 0)
                return (1);
        while (power--)
                t *= nb;
        return (t);
}
