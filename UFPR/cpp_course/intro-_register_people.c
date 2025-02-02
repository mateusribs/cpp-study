/*
- Uma struct para representar uma pessoa, com os seguintes dados: nome, cpf e idade.
- Use o que você aprendeu no texto anterior para implementar o CPF.
- Uma função chamada validarCPF, que recebe um número de cpf, e devolve verdadeiro ou falso, indicando se o cpf é válido ou não.
i. Pesquise na internet sobre como validar um cpf (de um jeito eﬁciente – gravar um cpf em um vetor ou string é absurdo!).
- No main crie um vetor com 3 elementos do tipo da struct de pessoa que você criou. Você deve solicitar os dados de 3 pessoas para o
usuário, e cadastrar nesse vetor. Antes de cadastrar, você deve veriﬁcar se o cpf é válido. Se o cpf for inválido, informe ao usuário, e
solicite para que ele digite outro.
- Depois de preencher o vetor com as 3 pessoas, você deve imprimir os dados na tela.

https://prlalmeida.com.br/cpp/Aula%201%20-%20Introdu%C3%A7%C3%A3o/Aula%201%20-%20Introdu%C3%A7%C3%A3o.pdf
*/

#include "stdio.h"
#include "stdint.h"
#include "stdlib.h"
#include "string.h"
#include "inttypes.h"

struct person
{
    char name [50];
    uint64_t cpf;
    uint8_t age;
};


void get_name(struct person *p);
void get_cpf(struct person *p);
void get_age(struct person *p);
int validate_cpf(uint64_t cpf);
uint8_t compute_digit(uint32_t base_cpf, uint8_t first_digit, uint16_t sum);


void main () {
    struct person people [3];
    uint8_t i;

    for (i = 0; i < 3; i++) {
        printf("Person %d register: \n", i + 1);
        
        get_name(&people[i]);
        get_cpf(&people[i]);
        get_age(&people[i]);
    }

    for (i = 0; i < 3; i++) {
        printf("Registered people:\n");
        printf("Name: %s, CPF: %ld, Age: %d\n", people[i].name, people[i].cpf, people[i].age);
    }
}

void get_name(struct person *p) {
    printf("What's your name?: ");
    fgets(p -> name, sizeof(p -> name), stdin);
    p -> name[strcspn(p -> name, "\n")] = '\0';
}

void get_cpf(struct person *p) {
    printf("What's your CPF?: ");
        
    while (1) {
        scanf("%ld", &p -> cpf);
        if (validate_cpf(p -> cpf)) {
            printf("Valid CPF...\n");
            while (getchar() != '\n');
            break;
        }
        printf("Invalid CPF... Please try again: ");
        while (getchar() != '\n');
    }
}


int validate_cpf(uint64_t cpf) {
    uint8_t digit_1, digit_2;
    uint16_t  sum = 0;
    uint32_t base_cpf = cpf / 100;

    // digit 1 verification
    digit_1 = compute_digit(base_cpf, 1, sum);

    if (((cpf / 10) % 10) != digit_1) {
        return 0;
    }

    // digit 2 verification
    sum = digit_1 * 2;
    digit_2 = compute_digit(base_cpf, 0, sum);

    if ((cpf % 10) != digit_2) {
        return 0;
    }

    return 1;
};

uint8_t compute_digit(uint32_t base_cpf, uint8_t first_digit, uint16_t sum) {
    uint8_t aux, digit, rest;

    if (first_digit) {
        aux = 2;
    } else {
        aux = 3;
    }

    for (uint8_t i = 2; i < 11; i++) {
        sum += (base_cpf % 10) * aux;
        base_cpf /= 10;
        aux++;
    }

    rest = sum % 11;
    if (rest < 2) {
        digit = 0;
    } else {
        digit = 11 - rest;
    }

    return digit;
}


void get_age(struct person *p) {
    printf("How old are you?: ");
    scanf("%hhd", &p -> age);
    while (getchar() != '\n');
}