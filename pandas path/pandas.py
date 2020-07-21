import pandas as pd 

df= pd.read_csv ("pandas.csv")
print("This is the Data Frame:")
print (df) #print the Data Frame
print ("\nData frame form:")
print (df.shape) #print the shape of the data frame
print ("\nNo. of elements in the Data frame:")
print (df.size)
print ("\nData type:")
print (df.dtypes)
#print the mean per column
print ("\nData frame mean per column:")
print (df.mean())
#print the smallest value per column
print ("\nData frame smallest value per column:")
print (df.min())
#print the highest value per column
print ("\nData frame highest value per column:")
print (df.max())
#print the median per column
print ("\nData frame median per column:")
print (df.median())
#print the standard deviation per column
print ("\nData frame standard deviation per column:")
print (df.std())
