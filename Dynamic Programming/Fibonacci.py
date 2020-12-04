def fib(n,d):
    #If we already know the value then just return it
    if n in d:
        return d[n]
    else:
        #compute the new value and add it to dictionary
        a= fib(n-1,d)+ fib(n-2,d)
        d[n]= a
        return a

#Defining an empty dictionary
d={}
d[1]=1
d[2]=1

n= int(input('Which Fibonacci term do you want- '))
print(fib(n,d))
