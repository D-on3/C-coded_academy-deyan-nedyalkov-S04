Let's build a triangle builder!
The builder would like to place a triangle within a defined square, if the size of the square
can hold the triangle.

1. Define a Square class that has at least 4x4 area
   1.1. You should be able to check the area of the Square at any time
   1.2. You should be able to check if your Square can hold a triangle. If it can't you should
   alert the builder that there is no space left in the Square for the triangle that builder wants
   to place in. If there is enough space, you can place it.
   1.3. If the Square is filled, you should immediately alert the Builder and to stop him.

2. Define a class Side, where the purpose of the size is to construct the Triangle.

3. Define a class Triangle - Triangle is build by 3 sides.
   3.1. You should be able to check it's area
   3.2. You should be bale to determine its kind.

4. Define a class Builder
   4.1. Builder must be able to know a Square's state
   4.2. Builder must be able to process a new triangle
   4.3. Builder must be able to receive and process signals from a Square.
   4.4. Builder can build up to 10 triangles!

Provide your solution as a package:
builder/
figures/
square.py
triangle.py
builder.py ---> Code should be executed by here!
