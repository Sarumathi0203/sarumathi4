a=[]
n=int(input("Enter the number of elements:"))
for i in range(1,n+1):
    b=int(input("Enter elements:"))
    a.append(b)
a.sort()
print("largest element is:",a[n+1])
    
