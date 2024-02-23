{split ( $0, arr, "-" )

if ((arr[1] < 1) || (arr[1] > 31) || (arr[2] < 1) || (arr[2] > 12))
{
	print "invalid date"
	exit 0
}
else
{
	if (arr[2] == 1)
		print "January"
	else if (arr[2] == 2)
		print "February"
	else if (arr[2] == 3)
		print "March"
	else if (arr[2] == 4)
		print "April"
	else if (arr[2] == 5)
		print "May"
	else if (arr[2] == 6)
		print "June"
	else if (arr[2] == 7)
		print "July"
	else if (arr[2] == 8)
		print "August"
	else if (arr[2] == 9)
		print "September"
	else if (arr[2] == 10)
		print "October"
	else if (arr[2] == 11)
		print "November"
	else if (arr[2] == 12)
		print "December"

	print arr[1]
	print arr[3]
	
}
exit 0
}
