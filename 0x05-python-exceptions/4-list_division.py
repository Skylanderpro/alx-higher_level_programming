#!/usr/bin/python3

def list_division(my_list_1, my_list_2, list_length):
    new_list = []
    for i in range(list_length):
        try:
            result = 0
            if i >= len(my_list_1) or i >= len(my_list_2):
                raise IndexError("out of range")
            check_1 = my_list_1[i], (int, float)
            check_2 = my_list_2[i], (int, float)

            if isinstance(check_1) and isinstance(check_2):
                if my_list_2[i] == 0:
                    raise ZeroDivisionError("division by 0")
                result = my_list_1[i] / my_list_2[i]
            else:
                raise TypeError("wrong type")
        except ZeroDivisionError:
            print("division by 0")
        except TypeError:
            print("wrong type")
        except IndexError:
            print("out of range")
        finally:
            new_list.append(result)
    return new_list
