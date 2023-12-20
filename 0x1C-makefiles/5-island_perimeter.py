#!/usr/bin/python3
""" 5. Island Perimeter """


def max_arr(arrays):
    """ return array have values n + 1 """
    flitered_arrays = []
    last_iterate_index = 0
    idx = 0
    arr_idx = 0
    for arr in arrays:
        idx = 0
        for index in range(len(arr)):
            try:
                if not (arr[index + 1] and arr[index + 1] == arr[index] + 1):
                    raise KeyError()
            except (KeyError, IndexError):
                idx += 1
                break
            idx += 1
        if last_iterate_index < idx:
            last_iterate_index = idx
        arr_idx += 1

    return last_iterate_index

def calc_width(arrays):
    """ return largest arr """
    return max_arr(arrays)


def calc_height(island_dict):
    height = 0
    for key in island_dict.keys():
        try:
            if not (island_dict[key + 1]
                    and (island_dict[key][0] == island_dict[key + 1][0])):
                raise KeyError("")
        except KeyError:
            break
        height += 1
    return height + 1


def island_perimeter(grid):
    """ calculate perimeter of island """
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

    only_island = {index: value
                   for index, value in values.items()
                   if value != []}

    height = calc_height(only_island)
    only_island = dict(list(only_island.items())[:height])
    width = calc_width(only_island.values())

    print(height)
    print(width)
    return (height + width) * 2
