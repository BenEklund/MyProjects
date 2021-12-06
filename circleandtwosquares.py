""" 
Imagine a circle and two squares: a smaller and a bigger one. For the smaller one, the circle is a circumcircle and for the bigger one, an incircle.
Create a function, that takes an integer (radius of the circle) and returns the difference of the areas of the two squares.
"""

import math

def square_areas_difference(radius):
    
    """
    We're starting with the inside square
    The interior square can be broken up into 4 right triangles
    Each of the triangles are 90-45-45 triangles
    We will use the pythagorean theorum to find the side length of the square
    """
    x = 2*(radius**2) # 
    A = math.sqrt(x)
    Area_A = A**2
    """
    The outside triangle does not require the pythagorean theorem
    It's side length can be described by 2r
    """
    Area_B = (2*radius)**2
    result = Area_B-Area_A
    result = round(result,0)
    return result

def main():
    print('Enter "0" to stop.')
    while True:
        radius = float(input('Enter the radius of a circle:'))
        if radius == 0:
            exit()
        result = square_areas_difference(radius)
        print(result)
main()