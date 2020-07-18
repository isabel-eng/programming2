#There is a rectangle whose height is 2cm more than its base and whose perimeter is equal to 24cm.
#Calculate the dimensions of the rectangle.

import numpy as np
A = np.matrix([[1, -1],[2, 2]])
b = np.matrix([[2],[24]])
#show an error if the matrix can't be calculated
if np.linalg.det(A) == 0:
    x = None
    print("Can't be solve")
else:
    #solve the system
    x = (A**-1)*b 
    y= "cm"
    #add another column to show the units 'cm' and print it
    a= np.array([[y], [y]])
    answer= np.append (x,a,axis=1)
    print (answer)
