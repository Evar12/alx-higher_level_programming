#!/usr/bin/python3

def new_in_list(my_list, idx, element):
    n_list = [x for x in my_list]
    if idx < 0 or idx >= len(n_list):
        return n_list
    n_list[idx] = element
    return n_list
