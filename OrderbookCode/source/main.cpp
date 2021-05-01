#include "../include/MarketPrice.h"
#include "../include/orderbook.h"

int main()
{
    MarketPrices *mp = new orderbook();
    mp->OnOrderAdd("p1", "o1", 1, 50);
    mp->OnOrderAdd("p1", "o1", 1, 200);
    mp->OnOrderAdd("p1", "o2", 1, 100);

    mp->OnOrderAdd("p2", "o1", 1, 150);
    mp->OnOrderAdd("p2", "o1", 1, 200);
    mp->OnOrderAdd("p2", "o2", 1, 100);
    mp->Print();
}