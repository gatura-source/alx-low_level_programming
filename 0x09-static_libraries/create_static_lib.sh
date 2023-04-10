#!/bin/bash
for file in `ls | grep *.c`
do
	gcc -c $file
done
for file in `ls | grep *.o`
do
	ar -rc liball.a $file
done
