#!/usr/bin/python3
def update_dictionary(my_dict, key, value):
    my_dict[key] = value
    return my_dict

if __name__ == '__main__':
    print_s = __import__('6-print_sorted_dictionary').print_sorted_dictionary

    a_dictionary = {'language': "C", 'number': 89, 'track': "Low level"}
    new_dict = update_dictionary(a_dictionary, 'language', "Python")
    print_s(new_dict)
    print("--")
    print_s(a_dictionary)

    print("--")
    print("--")

    new_dict = update_dictionary(a_dictionary, 'city', "San Francisco")
    print_s(new_dict)
    print("--")
    print_s(a_dictionary)
