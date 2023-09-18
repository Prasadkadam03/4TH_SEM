HT=[[] for _ in range(10)]
print(HT)                                    #hash table

def insert(HT,key,value):
	hpos=hash(key)%10
	print(hpos)
	bucket=HT[hpos]
	
	duplicate=False
	for i,kv in enumerate(bucket):
		k,v=kv
		if(k==key):
			duplicate=True
		else:
			duplicate=False
			
	if(duplicate==False):
		bucket.append((key,value))
		print(bucket)
		print(HT)
	else:
		print("RECORD ID DUBLICATE CAN NOT ADD")


def search(HT,key):
	hpos=hash(key)%10
	bucket=HT[hpos]
	for i,kv in enumerate(bucket):
		k,v=kv
		if(key==k):
			duplicate=True
		else:
			duplicate=False
			
		if(duplicate==True):
			print("Key is present")
		else:
			print("Key is not found")
		
			
		
			
def delt(HT,key):
	hpos=hash(key)%10
	bucket=HT[hpos]
	for i,kv in enumerate(bucket):
		k,v=kv
		if(key==k):
			duplicate=True
		else:
			duplicate=False
			
		if(duplicate==True):
			del bucket[i]
			print("Key is deleted")
			
			

while True:
    	print("*************MENU*************")	
    	print("1.INSERT\n2.SEARCH\n3.DELETE\n4.EXIT")
    	ch=int(input("ENTER YOUR CHOICE "))
    	if(ch==1):
    		key=int(input("ENTER THE KEY = "))
    		value=str(input("ENTER THE VALUE = "))
    		insert(HT,key,value)
    	if(ch==2):
    		key=int(input("ENTER THE KEY TO SEARCH = "))
    		search(HT,key)
    	if(ch==3):
    		key=int(input("ENTER THE KEY TO DELETE = "))
    		delt(HT,key)
    	if(ch==4):
    		exit()
    	
    		
    	
    			
		
		
		
	
	
