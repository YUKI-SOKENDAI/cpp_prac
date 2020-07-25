# Makefile

CC = g++
#CFLAGS = -m64 -g -Wall

ALL: 00_basic_process.o
	#$(CC) $(CFLAGS) -o chapter1_cpp_code 00_hello.o 01_print_test.o 02_variable.o

00: 00_basic_process.cpp
# 2020/07/10: processing result and code check +MEMO
#	$(CC) $(CFLAGS) -o 00_hello.o 00_hello.cpp
#	$(CC) -o 00_hello.o 00_hello.cpp
	g++ -o 00_basic_process.o 00_basic_process.cpp

01: 01_array_pointer.cpp
# 2020/07/13: processing result and code check +MEMO
	g++ -o 01_array_pointer.o 01_array_pointer.cpp

#02

clean:
	rm -f *.o
