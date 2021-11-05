CC=g++

test_list: test_list.o liste.o
test_list.o: test_list.cc liste.h
liste.o: liste.cc liste.h