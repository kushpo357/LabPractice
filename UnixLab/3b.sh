#!/bin/bash
#cd /home/exam/

filename="rit.txt"

if [ -e $filename ]
	
then 
	echo "Moving the contents of rit.txt to rit.txt_old"
	mv -f $filename $filename"_old"
	touch $filename
elif [ ! -e $filename ]
then
	echo "File doesnot exist .. so creating empty file"
	touch $filename
fi
