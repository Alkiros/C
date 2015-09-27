/*                                                                                                                                                                                            
** my_affcomb.c for my_affcomb in /home/tran_-                                                                                                                                                
**                                                                                                                                                                                            
** Made by guillaume tran                                                                                                                                                                     
** Login   <tran_-@epitech.net>                                                                                                                                                               
**                                                                                                                                                                                            
** Started on  Sun Sep 27 14:45:40 2015 guillaume tran                                                                                                                                        
** Last update Sun Sep 27 14:45:41 2015 guillaume tran                                                                                                                                        
*/

void    my_putchar(char c)
{
  write(1, &c, 1);
}


void    display(int num1, int  num2)
{
  my_putchar(num1 / 10  +48);
  my_putchar(num1 % 10 + 48);
  my_putchar(' ');
  my_putchar(num2 / 10 + 48);
  my_putchar(num2 % 10 + 48);

  if (!(num1 == 98 && num2 == 99))
    {
      my_putchar(',');
    }
}


int     main()
{
  int num1;
  int num2;
  num1 = 0;

  while (num1 <= 98)
    {
      num2 = num1 + 1;
      while (num2 <= 99)
        {
          display(num1, num2);
          num2++;
       	}
      num1++;
    }
}
