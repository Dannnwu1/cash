#include <cs50.h>
#include <stdio.h>

int get_total(void);

int main(void)
{
    const int quaters = 25;
    const int dimes = 10;
    const int nickels = 5;
    const int pennies = 1;
    int nr_coins = 0;
    int remainder = 0;

    // 1.promt user for the money
    int total = get_total();

    while (total > 0)
    {
        // 2.caculate how many 25 cent needed,
        // substract the total
        // add up the number of coins
        int nr_qua = total / quaters;
        nr_coins += nr_qua;
        total %= quaters;

        // 3.caculate how many 10 cent needed,substract the total
        int nr_di = total / dimes;
        nr_coins += nr_di;
        total %= dimes;

        // 4.cal how many 5 cent needed,sub the total
        int nr_ni = total / nickels;
        nr_coins += nr_ni;
        total %= nickels;

        // 5.cal how many 1 needed
        int nr_pe = total / pennies;
        nr_coins += nr_pe;
        total %= pennies;
    }
    // get the total number of coins
    printf("%i\n", nr_coins);
}

// 1.promt user for the money
int get_total(void)
{
    int total;
    do
    {
        total = get_int("Change owed: ");
    }
    while (total < 0);
    return total;
}
