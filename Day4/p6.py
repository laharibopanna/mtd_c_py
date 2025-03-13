my_name= 'lahari'

print(my_name)
print(my_name.upper())
print(my_name.capitalize())
try:
    print(my_name.index('ha'))
except ValueError:
    print(f'The sub-string \'ha\' not found in {my_name}')
print(my_name.find('a'))
