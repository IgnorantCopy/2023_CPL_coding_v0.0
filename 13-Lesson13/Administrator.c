//
// Created by Ignorant on 2023/12/19.
//


# include <stdio.h>

int main() {
    FILE *file1 = fopen("students.txt", "w");
    char name[20] = {0};
    int id = 0;
    if (file1 != NULL) {
        scanf("%d", &id);
        while (id > 0) {
            scanf("%s", name);
            fprintf(file1, "{%d %s}\n", id, name);
            scanf("%d", &id);
        }
        fclose(file1);
    }
    FILE *file2 = fopen("students.txt", "r");
    if (file2 != NULL) {
        while (fscanf(file2, "%s", name) != EOF) {
            printf("%s\n", name);
        }
        fclose(file2);
    }
    return 0;
}
