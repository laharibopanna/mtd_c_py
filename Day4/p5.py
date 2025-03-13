m = int(input('Enter the M value (Start value);'))
n = int(input('Enter the N value (End value);'))
p = int(input('Enter the P value (Increment);'))

i=m
while i <= n:
    print(i, end = ' ')
    i=i+p
else: 
    print('Mostly you gave value to M which is bigger than N')