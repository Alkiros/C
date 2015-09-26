#include <stdio.h>

int     main()
{
  int var1;
  int var2;
  int var3;
  var1 = 0;
  var2 = 0;
  var3 = 0;


  while(var1 <= 7)
    {
      var2 = var1 + 1;
      while(var2 <= 8)
        {
          var3 = var2 + 1;
          while(var3 <= 9)
            {
              if (var1 != 7 || var2 != 8 || var3 != 9)
                {
                  printf("%d%d%d, ", var1, var2, var3);
                }
              else printf("%d%d%d\n", var1, var2, var3);
              var3++;
            }
          var2++;
        }
        var1++;
    }

 }

/** By tran_- **/
