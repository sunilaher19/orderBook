#pragma once
#ifndef COMMON_H
#define COMMON_H

#include <map>
#include "../include/detailorder.h"
#include "OrderBookHandle.h"

class Common
{
    public:
        map<std::string, OrderBookHandle> OrderMap;
        Common()
        {

        }
        void AddOrder(Order O1, std::string &productIdstr)
        {
            OrderBookHandle newOrder;
            auto iter = OrderMap.find(productIdstr);
            if(iter == OrderMap.end())
            {
                newOrder.AddOrder(O1);
                OrderMap.insert({productIdstr,newOrder});
            }
            else
            {
                iter->second.AddOrder(O1);
            }
        }
        void print()
        {
            for(auto iter : OrderMap)
            {
                iter.second.print();
                cout << "-----------------" << endl;
            }
            
        }

};

#endif