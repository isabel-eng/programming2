#Find the mean of a group of grades, the maximum and minimum of random grades in a classroom

import numpy as np

#generate random grades and print them
rand_grades = np.random.uniform(7,10, size=(5,5))
rand_grades = np.round(rand_grades,2)
print(rand_grades)
#calculate the mean and print it
mean = np.mean(rand_grades)
print("the mean of the grades is:" + format(mean))
#calculate the minimum and print it
minimum = np.min(rand_grades)
print("the minimum of the grades is:" + format(minimum))
#calculate the maximum and print it
maximum = np.max(rand_grades)
print("the maximum of the grades is:" + format(maximum))
