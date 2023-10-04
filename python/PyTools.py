# find all even numvbers in range(1,10)

count = 0
for number in range(1,10) :
	if number % 2 == 0 :
		count += 1
		print(number)
print(f'we have {count} even numbers')

# find the most repeated character in 'sentence'
from pprint import pprint	# get tool 'pprint' from 'pprint'

sentence = 'This is a common interview question'

char_frequency = {}	# char_frequency is an empty dictionary to store each character and its freqency

for char in sentence :	# do the following for each 'char' in 'sentence' :
	if char in char_frequency : 	# if current char has been in char_frequency, then
		char_frequency[char] += 1 # the 'char_frrequency' of current 'char' +1
	else:	# otherwise,
		char_frequency[char]	# the 'char_frequency' of current 'char' = 1

pprint(char_frequency, width='1')	# print dictionary 'char-frequency' in a more readable way

char_frequency_sorted = sorted(char_frequency.items(), key=lambda kv:kv[1], reverse=True) # char_frequency_sorted = sorted items of 'char_frequency', sort on reverse order based on the key value of each item 

print(char_frequency_sorted[0])
