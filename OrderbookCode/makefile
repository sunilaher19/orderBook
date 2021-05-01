
CC = g++ -std=c++11
CFLAGS  = -g -Wall

LIBS=		-pthread

# To create the executable file count we need the object files
# countwords.o, counter.o, and scanner.o:
#
count:  main.o MarketPrice.o orderbook.o
	$(CC) $(CFLAGS) -o main main.o MarketPrice.o orderbook.o $(LIBS)

# To create the object file countwords.o, we need the source
# files countwords.c, scanner.h, and counter.h:
#
MarketPrice.o:  source/MarketPrice.cpp include/MarketPrice.h
	$(CC) $(CFLAGS) -c source/MarketPrice.cpp source/MarketPrice.cpp include/MarketPrice.h $(LIBS)

orderbook.o:  source/orderbook.cpp include/orderbook.h
	$(CC) $(CFLAGS) -c source/orderbook.cpp source/MarketPrice.cpp include/MarketPrice.h  $(LIBS)

# To create the object file counter.o, we need the source files
# counter.c and counter.h:
#
main.o:  source/main.cpp 
	$(CC) $(CFLAGS) -c source/main.cpp include/orderbook.h include/MarketPrice.h  $(LIBS)

# To start over from scratch, type 'make clean'.  This
# removes the executable file, as well as old .o object
# files and *~ backup files:
#
clean: 
	$(RM) count *.o *~