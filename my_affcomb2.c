int     my_putchar(char c)
{
  write(1, &c, 1);
}

int     main()
{
  int num1;
  int num2;
  num1 = 0;

  while	(num1 <= 98)
    {
      num2 = num1 + 1;
      while (num2 <= 99)
        {
          my_putchar(num1 / 10  +48);
          my_putchar(num1 % 10 + 48);
          my_putchar(' ');
          my_putchar(num2 / 10 + 48);
          my_putchar(num2 % 10 + 48);
          if ((num1 != 98) || (num2 != 99))
            {
              my_putchar(',');
            }
          num2++;
        }
      num1++;
    }
}

/** By tran_- **/
