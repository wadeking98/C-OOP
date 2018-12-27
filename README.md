# C-OOP: project
experimenting with c as an object oriented programming language

# Point: object
	-data feilds
		-int x, y: stores the x,y coordinates of a point

	-methods
		-char* toString(point *self): returns the coordinates as a formatted string, '(x,y)'

# Stack: object
	-data feilds
		-int size: the size of the stack
		-point items[]: the array holding items in the stack

	-methods
		-void push(stack *self, point item): adds item to items[] and dynamically increases size of object accordingly
		-point pop(stack *self): removes an item from items[], returns item, and dynamically decreases size of object accordingly
		-int isEmpty(stack *self): returns 1 if stack is empty
		-char* toString(stack *self): returns the string representation of the stack. note, this string is dynamically allocated and should be freed after use 
	
