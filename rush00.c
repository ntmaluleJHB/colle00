#include <unistd.h>


void ft_putchar(c)
{	
	write(1, &c, 1);
}

void rush (h, v)
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
			if(((hor==1)|| (hor == h))&&((ver == 1)||(v = ver)))
			{
				ft_putchar(corner);
			}	
			else 
			{
				ft_putchar(space);
			}
			hor++;

		}
		write(1, "\n", 1);
		hor = 1;
		ver ++;
	}


}



int main()
	{
		rush(10,4);
		return(0);

	}
