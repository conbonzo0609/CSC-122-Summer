#Input_Protection


Input will be taken as C-Strings

entry bounded at both ends of a range (i.e. grades between 0..100)

entry bounded at the lower end of a range (i.e. time greater than 0)

entry bounded at the upper end of a range (rare, but it does happen)

entry limited to those elements in a particular list of values (i.e. menu choices)


   prompt & read
    while (!valid)
    {
        error message
        prompt & read
    }