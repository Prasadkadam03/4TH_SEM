HT=[[] for _ in range(10)]
print(HT)

def insert(HT,key,value):
	hpos=hash(key)%10  
	bucket=HT[hpos]
	duplicate=False
    
    
    
	for i,kv in enumerate(bucket):
		k,v=kv 
		if(k==key):
			duplicate=True
			break
		else:
			duplicate=False
            
	if(duplicate==False):
		bucket.append((key,value))
		print(bucket)
		print(HT)
    
	else:
		print("****Duplicate occur cant add****")
        
def find_p(HT,key,value):
	hpos=hash(key)%10  
	bucket=HT[hpos]
	f=False
    	
	for i,kv in enumerate(bucket):
		k,v=kv 
		if(k==key):
			f=True
			break
		
            		
	if(f==True):
		print("****Element found****")
	else:
		print("****Element not found****")
def delete_e(HT,key,value):	
	hpos=hash(key)%10  
	bucket=HT[hpos]
    	
	for i,kv in enumerate(bucket):
		k,v=kv 
		if(k==key):
			bucket.remove(kv)
			print(HT)
			break
		
        
    
    
while True:
	print("1.Insert")
	print("2.Search")
	print("3.Delete")
	print("4.EXIT")
	
	print("*************MENU*************")
	ch=int(input("Enter your choice=="))
	if ch==1:
		key=int(input("Enter key="))
		value=str(input("Enter value="))
		insert(HT,key,value)
	elif ch==2:
		key=int(input("Enter key="))
		value=str(input("Enter value="))
		find_p(HT,key,value)
	elif ch==3:
		key=int(input("Enter key="))
		value=str(input("Enter value="))
		delete_e(HT,key,value)
	elif ch==4:
		break
	else:
		print("invalid Choice ")




















