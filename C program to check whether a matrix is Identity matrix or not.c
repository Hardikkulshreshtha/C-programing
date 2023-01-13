
#include <stdio.h>
int main()
{
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int isIdentity = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j && matrix[i][j] != 1)
            {
                isIdentity = 0;
                break;
            }
            if (i != j && matrix[i][j] != 0)
            {
                isIdentity = 0;
                break;
            }
        }
    }
    if (isIdentity)
    {
        printf("The matrix is an identity matrix.\n");
    }
    else
    {
        printf("The matrix is not an identity matrix.\n");
    }
    return 0;
}
