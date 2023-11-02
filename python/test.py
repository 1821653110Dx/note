import csv

with open('data.csv') as file : 	# open 'data.csv' and link it to 'file', then close it after the followings are finished
	reader = csv.reader(file)	# create a reader and read data of 'file' into the reader, and link the reader to 'reader'()
	# print(list(reader))	# convert the data of 'reader' into a list, and print it;  this code can't be used simultaneously with the following, because objects to print is all from 'reader': a reader object

	for row in reader :	# for every item(be reffered to as 'row') in 'reader' 
		print(row)	# print it
