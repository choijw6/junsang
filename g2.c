#include <stdio.h>
int countDigits(int x, int d);
void testCountDigits(int x, int d,int result, char *msg );

/*
name:junwon choi
number: 214893648
*/
  int main(int argc, char *argv[])
    {
        testCountDigits(123, 1, 1, "single digit test");
        testCountDigits(10, 0, 1, "single 0 test");
        testCountDigits(456456, 4, 2, "two fours");
        testCountDigits(111111, 1, 6, "six 1's");
        return 0;
    }
    int countDigits(int x, int d)
    {
        int count = 0;
        if (x == 0 && d == 0)
        {
           return 1;

        }
        while (x != 0)
        {
            if (x % 10 == d)
            {
                count++;
            }
              x = x/10;
        }
        return count;
    }
    void testCountDigits(int x, int d, int result, char *msg)
    {
        if (countDigits(x, d)!= result) {
            printf("%s - Test Failed\n", msg);
        } else {
            printf("%s - Test Pass\n", msg);
        }
    }

