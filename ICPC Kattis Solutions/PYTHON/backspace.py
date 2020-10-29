# -*- coding: utf-8 -*-

def dlt( s ):
    x = ""
    sz = len( s )
    for i in range( 0, sz ):
        if "<" not in s:
            x = s 
        elif s[ i ] == "<":
            x =  x + s[ : i-1 ] + s[ i+1 : ]     
            
    print( x )

string = input( )
dlt( string )





