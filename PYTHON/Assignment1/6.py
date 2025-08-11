def show():
	var = 10
	def show1():
		nonlocal var
		print(f"var by nonlocal:{var}")
	show1()

show()