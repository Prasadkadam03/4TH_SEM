set_A=set()
set_B=set()
set_AintB=set()
set_AunionB=set()
set_AdiffB=set()
set_AsubsetB=set()
n=int(input("Enter limit for set A="))
m=int(input("Enter the limit for set B="))
def addA():
	for i in range(n):
    		ele=int(input("Enter Element="))
    		set_A.add(ele)
	print(set_A)
def addB():
	for i in range(m):
    		ele=int(input("Enter Element="))
    		set_B.add(ele)
	print(set_B)

def remove():
	flag=0
	key=int(input("Enter Element to be remove="))
	for i in range(n):
		if key in set_A:
			set_A.remove(key)
			break
		else:
			flag=1

	if(flag==1):
		print("key not found")

	print(set_A)
def contain():
	key=int(input("Enter Element to be contain="))
	print(key in set_A)
def size():
	print("The size of set s is:",len(set_A))
def inter():
	flag=0
	for key in (set_A):
		if key in set_B:
			set_AintB.add(key)
			flag=0
		else:
			flag=1
	if(flag==1):
		print("key is not common")
	print(set_A)
	print(set_B)
	print(set_AintB)
def union():
	for key in set_A:
		set_AunionB.add(key)
	for key in set_B:
		set_AunionB.add(key)
	print(set_AunionB)
def diff():
	for key in set_A:
		set_AdiffB.add(key)
	for key in set_A:
		if key in set_B:
			set_AdiffB.remove(key)
	print(set_AdiffB)
def subset():
	print(set_A)
	print(set_B)
	for key in set_B:
		if key in set_A:
			set_AsubsetB.add(key)
	if(set_B==set_AsubsetB):
		print("set B is the subset of set A")
	else:
		print("Set B is not the subset of set A")
		
	
while True:
	print("1.ADD IN A")
	print("2.ADD IN B")
	print("3.REMOVE")
	print("4.CONTAIN")
	print("5.SIZE")
	print("6.UNION")
	print("7.INTERSECTION")
	print("8.DIFFRENCE")
	print("9.SUBSET")
	
	ch=int(input("Enter the choice:"))
	if(ch==1):
		addA()
	if(ch==2):
		addB()
	if(ch==3):
		remove()
	if(ch==4):
		contain()
	if(ch==5):
		size()
	if(ch==6):
		union()
	if(ch==7):
		inter()
	if(ch==8):
		diff()
	if(ch==9):
		subset()
	
	
	


