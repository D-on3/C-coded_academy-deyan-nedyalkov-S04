def get_min_of_three_members(x, y, z):
    # finish the function by adding code that would return the minimum of x, y and z
    # Use another function to find the minimum of y and z
    # Do not use the builtin min()

    min_value = 0  # Is this constant?

    if x < y and x < z:  # no need space before :
        min_value = x
    if y < x and y < z:  # space between y and z, no need space before :
        min_value = y
    if z < x and z < x:  # no need space before :
        min_value = z

    return min_value


print(get_min_of_three_members(3, 2, 1))
