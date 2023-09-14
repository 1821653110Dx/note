items = [
	('product1', 10),
	('product2', 9),
	('product3', 12),
	]

filtered = [item[1] for item in items if item[1] >= 10]
print(filtered)
