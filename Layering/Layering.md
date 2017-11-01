# Layering
## Good Code
This example uses both a username and password to get access to the data, and it requires a separate password for anyone trying to gain root access to the data.

## Bad Code
This only requires that the user know the username for the data they want to access, and although it uses the idea of *Least Privilege*, it does not use any other measures to protect the data. 
