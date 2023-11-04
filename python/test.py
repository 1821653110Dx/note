import sqlite3
import json
from pathlib import Path

with sqlite3.connect('db.sqlite3') as conn :	# create and connect the database: db.sqlite, and save it to 'conn', then close it after the followings are finished
	command = 'SELECT * FROM Movies'	# cmd to execute: retrieve all the data from a database table called: Movies, save it to 'command'
	cursor = conn.execute(command)			# execute the cmd saved in 'command', save the retunred cursor into 'cursor' ; what is cursor? cursor moving line by line in retrieved data

	for row in cursor	# for each row(be reffered to as 'row') in 'cursor'
		print(row)	# print it
	
	# movies = cursor.fetchall()	# fetch all the data in cursor 'cursor', save it to 'movies' ; it's can't be simultanousely with the previouse code block
	# print(movies)
