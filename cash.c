#include <stdio.h>

int calculate_coins(int *rupees, int coin_value);

int main(void)
{
    // Prompt the user for change owed, in rupees
    int rupees;
    do
    {
        printf("Change owed (in rupees): ");
        scanf("%d", &rupees);
    } while (rupees < 0);

    // Calculate the number of each type of coin
    int fivehundred_rupee_note = calculate_coins(&rupees, 500);
    int twohundred_rupee_note = calculate_coins(&rupees, 200);
    int hundred_rupee_note = calculate_coins(&rupees, 100);
    int fifty_rupee_note = calculate_coins(&rupees, 50);
    int twenty_rupee_note = calculate_coins(&rupees, 20);
    int ten_rupee_coins = calculate_coins(&rupees, 10);
    int five_rupee_coins = calculate_coins(&rupees, 5);
    int two_rupee_coins = calculate_coins(&rupees, 2);
    int one_rupee_coins = calculate_coins(&rupees, 1);

    // Sum the total number of coins
    int sum = fivehundred_rupee_note + twohundred_rupee_note + hundred_rupee_note + fifty_rupee_note + twenty_rupee_note + ten_rupee_coins + five_rupee_coins + two_rupee_coins + one_rupee_coins;

    // Print the total coins and the breakdown
    printf("Total coins and notes: %d\n", sum);
    if (fivehundred_rupee_note > 0)
        printf("%d five hundred rupee note%s\n", fivehundred_rupee_note, fivehundred_rupee_note > 1 ? "s" : "");
    if (twohundred_rupee_note > 0)
        printf("%d two hundred rupee note%s\n", twohundred_rupee_note, twohundred_rupee_note > 1 ? "s" : "");
    if (hundred_rupee_note > 0)
        printf("%d hundred rupee note%s\n", hundred_rupee_note, hundred_rupee_note > 1 ? "s" : "");
    if (fifty_rupee_note > 0)
        printf("%d fifty rupee note%s\n", fifty_rupee_note, fifty_rupee_note > 1 ? "s" : "");
    if (twenty_rupee_note > 0)
        printf("%d twenty rupee note%s\n", twenty_rupee_note, twenty_rupee_note > 1 ? "s" : "");
    if (ten_rupee_coins > 0)
        printf("%d ten rupee coin%s\n", ten_rupee_coins, ten_rupee_coins > 1 ? "s" : "");
    if (five_rupee_coins > 0)
        printf("%d five rupee coin%s\n", five_rupee_coins, five_rupee_coins > 1 ? "s" : "");
    if (two_rupee_coins > 0)
        printf("%d two rupee coin%s\n", two_rupee_coins, two_rupee_coins > 1 ? "s" : "");
    if (one_rupee_coins > 0)
        printf("%d one rupee coin%s\n", one_rupee_coins, one_rupee_coins > 1 ? "s" : "");

    return 0;
}

int calculate_coins(int *rupees, int coin_value)
{
    int coins = *rupees / coin_value; // Calculate the number of coins
    *rupees %= coin_value;            // Update the remaining rupees
    return coins;
}
