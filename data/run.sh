#!/bin/sh
g++ -Wall -Wextra --std=c++17 main_write.cpp -o main_write
g++ -Wall -Wextra --std=c++17 main_read.cpp -o main_read
timeout 10 ./main_write < data/data1.txt > /dev/null && timeout 10 ./main_read > result1.txt
timeout 10 ./main_write < data/data2.txt > /dev/null && timeout 10 ./main_read > result2.txt
timeout 10 ./main_write < data/data3.txt > /dev/null && timeout 10 ./main_read > result3.txt
timeout 10 ./main_write < data/data4.txt > /dev/null && timeout 10 ./main_read > result4.txt

