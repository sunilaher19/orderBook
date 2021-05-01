
#pragma once
#ifndef ORDERBOOKHANDLE_H
#define ORDERBOOKHANDLE_H


#include <map>
#include "detailorder.h"

using namespace std;

class OrderBookHandle
{
private:
    /* data */
public:
    map<int,Order, greater<int>> bidOrderMap;
    map<int,Order, greater<int>> offerOrderMap;

    void AddOrder(Order O1)
    {
        if(O1.GetSide() == 1)
        {
            bidOrderMap.insert({O1.GetPrice(), O1});
        }
        else if(O1.GetSide() == 2)
        {
            offerOrderMap.insert({O1.GetPrice(), O1});
        }
        else
        {
            cout << "Issue with side";
            return;
        }
    }
    
    void print()
    {
        for(auto i : bidOrderMap)
        {
            i.second.tostring();
        }
        for(auto i : offerOrderMap)
        {
            i.second.tostring();
        }
    }
};

#endif