#pragma once
#ifndef DETAILEDORDER_H
#define DETAILEDORDER_H

#include <memory>
#include<string>
#include <cstring>
#include <iostream>

using namespace std;

class Order {

public:	
	Order(char *pID, char *oId, int side, int Price) : m_pId(new char[100]), m_oId(new char[100]),
		m_side(side), m_price(Price)
	{	
		strncpy(m_pId.get(), pID,100);
		strncpy(m_oId.get(), oId, 100);
	}

	char* GetOrderID () { return m_oId.get(); }
	int GetPrice() { return m_price;  }
    int GetSide() { return m_side;  }

    void tostring()
    {
        cout << "ProductId = " << m_pId << " OrderId=" << m_oId << " m_price=" << m_price << " side=" << m_side << endl;
    }

private:
	shared_ptr<char> m_pId;
	shared_ptr<char>  m_oId;
	int m_side;
	int m_price;
};
#endif