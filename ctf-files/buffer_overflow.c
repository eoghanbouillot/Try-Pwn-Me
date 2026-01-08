#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Flag est stocké dans une variable globale
char flag[] = "TPM{buff3r_0v3rfl0w_m4st3r}";
int authenticated = 0;

void print_flag() {
    printf("\n🎉 Félicitations ! Vous avez réussi !\n");
    printf("Flag: %s\n", flag);
}

void vulnerable_function() {
    char buffer[64];
    
    printf("=== BUFFER OVERFLOW CHALLENGE ===\n");
    printf("Entrez votre nom : ");
    
    // Vulnérabilité : gets() ne vérifie pas la taille du buffer
    gets(buffer);
    
    printf("Bonjour %s!\n", buffer);
    
    // Vérification de l'authentification
    if (authenticated == 0xdeadbeef) {
        print_flag();
    } else {
        printf("Accès refusé. authenticated = 0x%x\n", authenticated);
        printf("Vous devez modifier la variable 'authenticated' pour obtenir le flag.\n");
    }
}

int main() {
    // Désactiver le buffering pour faciliter l'exploitation
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stdin, NULL, _IONBF, 0);
    
    printf("Bienvenue dans le challenge Buffer Overflow!\n");
    printf("Adresse de 'authenticated' : %p\n", &authenticated);
    printf("Adresse de 'buffer' dans vulnerable_function : environ %p\n", 
           (void*)((char*)&authenticated - 80));
    
    vulnerable_function();
    
    return 0;
}
