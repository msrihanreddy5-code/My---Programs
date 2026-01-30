#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "students.dat"
#define ENC_KEY 0xAA
#define MAX_NAME 50

typedef struct {
    int roll;
    char name[MAX_NAME];
    float marks;
} Student;

// Encrypt/Decrypt buffer
void encrypt_decrypt(void *buf, size_t len) {
    char *p = (char*)buf;
    for (size_t i = 0; i < len; i++)
        p[i] ^= ENC_KEY;
}

// Add student
void add_student() {
    Student s;
    printf("Roll: "); scanf("%d", &s.roll);
    printf("Name: "); scanf(" %[^\n]", s.name);
    printf("Marks: "); scanf("%f", &s.marks);
    FILE *f = fopen(FILENAME, "ab");
    encrypt_decrypt(&s, sizeof(s));
    fwrite(&s, sizeof(s), 1, f);
    fclose(f);
    printf("Student added.\n");
}

// Search student
void search_student() {
    int roll, found = 0;
    Student s;
    printf("Enter roll to search: "); scanf("%d", &roll);
    FILE *f = fopen(FILENAME, "rb");
    while (fread(&s, sizeof(s), 1, f)) {
        encrypt_decrypt(&s, sizeof(s));
        if (s.roll == roll) {
            printf("Roll:%d Name:%s Marks:%.2f\n", s.roll, s.name, s.marks);
            found = 1;
            break;
        }
        encrypt_decrypt(&s, sizeof(s)); // Re-encrypt for next read
    }
    fclose(f);
    if (!found) printf("Not found.\n");
}

// Update student
void update_student() {
    int roll, found = 0;
    Student s;
    printf("Enter roll to update: "); scanf("%d", &roll);
    FILE *f = fopen(FILENAME, "r+b");
    while (fread(&s, sizeof(s), 1, f)) {
        encrypt_decrypt(&s, sizeof(s));
        if (s.roll == roll) {
            printf("New Name: "); scanf(" %[^\n]", s.name);
            printf("New Marks: "); scanf("%f", &s.marks);
            fseek(f, -sizeof(s), SEEK_CUR);
            encrypt_decrypt(&s, sizeof(s));
            fwrite(&s, sizeof(s), 1, f);
            found = 1;
            break;
        }
        encrypt_decrypt(&s, sizeof(s));
    }
    fclose(f);
    if (!found) printf("Not found.\n");
}

// Delete student
void delete_student() {
    int roll, found = 0;
    Student s;
    FILE *f = fopen(FILENAME, "rb");
    FILE *tmp = fopen("tmp.dat", "wb");
    printf("Enter roll to delete: "); scanf("%d", &roll);
    while (fread(&s, sizeof(s), 1, f)) {
        encrypt_decrypt(&s, sizeof(s));
        if (s.roll == roll) {
            found = 1;
        } else {
            encrypt_decrypt(&s, sizeof(s));
            fwrite(&s, sizeof(s), 1, tmp);
        }
        if (!found) encrypt_decrypt(&s, sizeof(s));
    }
    fclose(f); fclose(tmp);
    remove(FILENAME);
    rename("tmp.dat", FILENAME);
    printf(found ? "Deleted.\n" : "Not found.\n");
}

// Display all
void display_students() {
    Student s;
    FILE *f = fopen(FILENAME, "rb");
    printf("Roll\tName\t\tMarks\n");
    while (fread(&s, sizeof(s), 1, f)) {
        encrypt_decrypt(&s, sizeof(s));
        printf("%d\t%s\t\t%.2f\n", s.roll, s.name, s.marks);
        encrypt_decrypt(&s, sizeof(s));
    }
    fclose(f);
}

int main() {
    int choice;
    do {
        printf("\n1.Add 2.Search 3.Update 4.Delete 5.Display 0.Exit\n");
        scanf("%d", &choice);
        switch(choice) {
            case 1: add_student(); break;
            case 2: search_student(); break;
            case 3: update_student(); break;
            case 4: delete_student(); break;
            case 5: display_students(); break;
        }
    } while (choice != 0);
    return 0;
}
