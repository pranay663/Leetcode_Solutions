#include <stdio.h>

int maxProfit(int prices[], int size)
{
    int minPrice = prices[0];
    int maxProfitValue = 0;

    for (int i = 1; i < size; i++)
    {
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
        else
        {
            int profit = prices[i] - minPrice;

            if (profit > maxProfitValue)
            {
                maxProfitValue = profit;
            }
        }
    }

    return maxProfitValue;
}

int main()
{
    int prices1[] = {7, 1, 5, 3, 6, 4};

    printf("Test Case 1:\n");
    printf("%d\n", maxProfit(prices1, 6));

    int prices2[] = {7, 6, 4, 3, 1};

    printf("Test Case 2:\n");
    printf("%d\n", maxProfit(prices2, 5));

    return 0;
}