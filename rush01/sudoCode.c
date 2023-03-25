int main()
{
    char *col_up[4];
    char *col_down[4];
    char *col_left[4];
    char *col_right[4];

    //fixme: sorting function for column paramaters
    void    sort_column(col_up, col_down, col_left, col_right);

    //fixme: function for atoi
    void    ft_atoi(col_up);
        //while loop using array of arrays?
        //harcoad run for each array?

    /*operations todo:
        - any array element with value of 4 change to 1
        - any array element with value of 1 change to 4
        - if operations
            - if last digit of col_left == 1 && first digit of col_right == 4
                col_up = 1, 2, 3, 4
            - switch scenario of ^
                col_up = 4, 3, 2, 1
            ... all sides need to be checked for corresponding 1's and 4's (fill rows and just single column)

            -Column 'clues' / potential values
                - 2 = 1, 2 or 3
                - 3 = 1 or 2
                - elimination of potentials with row checking
        - array of pointers maybe to keep track of rows?
            - Fill in missing value of rows with one remaining column
        - if start of row either side it should only see 3 and 4, etc...
            - ex:
                3 > | ? | 3 | ? | 4 | < 1
                3 > | ? | 3 | 4 | ? | < 2
                2 > | 3 | 4 | 1 | 2 | < 2
                2 > | 3 | 4 | 2 | 1 | < 3
                2 > | 3 | ? | 4 | ? | < 2
                2 > | 3 | ? | ? | 4 | < 1
                1 > | 1 | 2 | 3 | 4 | < 4
                4 > | 4 | 3 | 2 | 1 | < 1

        -error handling

        - need a system that doesn't check just rows but evaluates based on crossroads
    */
}