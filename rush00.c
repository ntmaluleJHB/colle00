#include <unistd.h>


void ft_putchar(c)
{	
	write(1, &c, 1);
}

void rush(int h, int v)
{
	int hor;
	int ver;
	hor = 1;
	ver = 1;
	char corner;
	corner = 'o';
	char sidesv;
	char space;
	char sidesh;
	sidesv = '-';
	sidesh = '|';
	space = ' ';

	while(ver <= v)
	{
		while(hor <=  h)
		{
			if(((hor==1)|| (hor == h))&&((ver == 1)||(v == ver)))
			{
				ft_putchar(corner);
			}
			else if (((hor != 1)||(hor != h))&&( (ver == 1)||(ver == v)))
			{
				ft_putchar(sidesv);
			}
			else if (((hor == 1)||(hor == h))&&((ver != 1)||(ver != v)))
			{
				ft_putchar(sidesh);
			}
			else 
			{
				ft_putchar(space);
			}
			hor++;

		}
		write(1, "\n", 1);
		hor = 1;
		ver = ver +1;
	}


}



int main()
{
	int v;
	int h;
	v = 8;
	h = 8;
	rush(h , v);
	return(0);

}
