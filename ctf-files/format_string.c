#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Variable de contrôle
int access_granted = 0;
char secret_flag[] = "TPM{f0rm4t_str1ng_pwn3d}";

void print_menu() {
    printf("\n=== SYSTÈME DE CONNEXION ===\n");
    printf("1. Se connecter\n");
    printf("2. Afficher les informations\n");
    printf("3. Quitter\n");
    printf("Choix : ");
}

void vulnerable_printf(char *user_input) {
    // VULNÉRABILITÉ : printf avec input utilisateur non sanitisé
    printf("Vous avez entré : ");
    printf(user_input);  // Format string vulnerability!
    printf("\n");
}

void check_access() {
    if (access_granted == 0x1337c0de) {
        printf("\n🎉 ACCÈS ACCORDÉ !\n");
        printf("Flag: %s\n", secret_flag);
    } else {
        printf("Accès refusé. Valeur actuelle: 0x%x (requis: 0x1337c0de)\n", access_granted);
    }
}

int main() {
    char input[256];
    int choice;
    
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stdin, NULL, _IONBF, 0);
    
    printf("=== FORMAT STRING CHALLENGE ===\n");
    printf("Bienvenue dans le système de connexion sécurisé!\n");
    printf("\nAdresses importantes:\n");
    printf("access_granted @ %p (valeur actuelle: 0x%x)\n", &access_granted, access_granted);
    printf("secret_flag @ %p\n", &secret_flag);
    
    while (1) {
        print_menu();
        
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n');
            continue;
        }
        while (getchar() != '\n');  // Clear buffer
        
        switch (choice) {
            case 1:
                printf("Entrez votre identifiant : ");
                if (fgets(input, sizeof(input), stdin) == NULL) break;
                input[strcspn(input, "\n")] = 0;
                vulnerable_printf(input);
                break;
                
            case 2:
                check_access();
                break;
                
            case 3:
                printf("Au revoir!\n");
                return 0;
                
            default:
                printf("Choix invalide!\n");
        }
    }
    
    return 0;
}
