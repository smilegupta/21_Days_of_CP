//Find mirror characters in a string from nth position

def findmirror(s, k): 
   
    o = 'abcdefghijklmnopqrstuvwxyz'
    r = 'zyxwvutsrqponmlkjihgfedcba'
    d = dict(zip(o, r)) 
  
    prefix = s[0:k-1] 
    suffix = s[k-1:] 
    m = '' 
 
    for i in range(0,len(suffix)): 
         m = m + d[suffix[i]] 
   
    print (prefix + m) 
           
# Driver program 
if __name__ == "__main__": 
    s = 'paradox'
    k = 3
    findmirror(s ,k) 
