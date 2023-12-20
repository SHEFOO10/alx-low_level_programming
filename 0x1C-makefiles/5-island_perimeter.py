#!/usr/bin/python3
""" 5. Island Perimeter """


def largest_arr(arrays):
    """ return largest arr """

    largest_arr = []
    for arr in arrays:
        if len(largest_arr) < len(arr):
            largest_arr = arr
    return largest_arr

def island_perimeter(grid):
    if grid == [] or grid == [[]]:
        return 0

    height = 0
    width = 0
    common_values_width = []
    values = dict()
    for row_index in range(len(grid)):
        values.update({row_index: list()})
        for col_index in range(len(grid[row_index])):
            if grid[row_index][col_index] == 1:
                values[row_index].append(col_index)

    only_island = {index: value for index, value in values.items() if value != []}
    for index in only_island.keys():
       try:
           if not only_island[index+1] and only_island[index] == only_island[index + 1]:
               raise KeyError("")
       except KeyError:
           only_island = dict(list(only_island.items())[:height + 1])
           arr = largest_arr(only_island.values())
           for index in range(len(arr)):
              try:
                  if not (arr[index + 1] and (arr[index] + 1 == arr[index + 1])): 
                     raise KeyError("")
              except (KeyError, IndexError):
                  break
              width += 1
       height += 1

    return (height + width + 1) * 2

