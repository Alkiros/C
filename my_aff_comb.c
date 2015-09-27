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

void    display(int var1, int var2, int var3)
{
  my_putchar(var1 + 48);
  my_putchar(var2 + 48);
  my_putchar(var3 + 48);
  if (!(var1 == 7 && var2 == 8 && var3 == 9))
    {
      my_putchar(',');
      my_putchar(' ');
    }
}

int     main()
{
  int var1;
  int var2;
  int var3;
  var1 = 0;


  while (var1 <= 7)
    {
      var2 = var1 + 1;
      while (var2 <= 8)
        {
          var3 = var2 + 1;
          while (var3 <= 9)
            {
              display(var1, var2, var3);
              var3++;
            }
          var2++;
        }
        var1++;
    }
}
