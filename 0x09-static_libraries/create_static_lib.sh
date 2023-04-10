#!/bin/bash
for file in `ls $search_path | grep *.c`
do
	echo $file
	gcc -c $file
done
for file in `ls $search_path | grep *.o`
do
	ar -rc liball.a $file
done
