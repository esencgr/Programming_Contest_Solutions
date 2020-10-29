# fibonacci series 
a, b = 1, 1 

sz = int(input( "limit = " ))
lst = [ a, b ]

for i in range( 0, sz - 2  ):
    a, b = b, a+b 
    lst.append( b ) 

print( lst )


a, b = 0, 1
ls = []
while a < 100:
    ls.append( a )
    a, b = b, a+b 
    
print( ls )
ls.clear()
