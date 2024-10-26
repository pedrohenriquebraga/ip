#include <stdio.h>

int main()
{

  char texto[5000], chAnt;
  int i, achouSeq = 0, countSeq = 0;
  while (scanf("%[^\n]%*c", texto) != EOF)
  {
    countSeq = 0;
    achouSeq = 0;

    for (i = 0; texto[i] != '\0'; i++)
    {
      if (i == 0 || texto[i - 1] == ' ')
      {
        if (texto[i] >= 'A' && texto[i] <= 'Z')
        {
          texto[i] = texto[i] + 32;
        }

        if (i == 0)
        {
          chAnt = texto[i];
        }
        else
        {
          if (texto[i] == chAnt)
          {
            if (!achouSeq)
            {
              achouSeq = 1;
              countSeq++;
            }
          }
          else
          {
            achouSeq = 0;
          }

          chAnt = texto[i];
        }
      }
    }

    printf("%d\n", countSeq);
  }

  return 0;
}