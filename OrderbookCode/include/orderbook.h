#pragma once
#ifndef ORDERBOOK_H
#define ORDERBOOK_H

#include "../include/MarketPrice.h"
#include "../include/detailorder.h"
#include <iostream>
#include <map>
#include "commoncode.h"
using namespace std;

class orderbook : public MarketPrices
{
    public:
        Common c1;
        orderbook()
        {
            
        }
        virtual int OnOrderAdd(char *productId, char *OrderId, int BidOrOffer, int Price)
        {
            cout << "orderbook::OnOrderAdd" << endl;
            Order o1(productId,OrderId,BidOrOffer,Price);
            std::string productIdstr(productId);
            c1.AddOrder(o1,productIdstr);
            return 0;
        }
        virtual int OnOrderDel(char *productId, char *OrderId)
        {
            cout << "orderbook::OnOrderDel" << endl;
            return 0;
        }
        virtual int Print()
        {
            cout << "orderbook::Print" << endl;
            c1.print();
            return 0;
        }
};

#endif