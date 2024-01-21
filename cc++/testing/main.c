#include <stdio.h>
#include <stdlib.h>


struct BankAccount {
    char name[50];
    int accountNumber;
    float balance;
};

void deposit(struct BankAccount * acccount, float amount){
    account->balance += amount;
    printf("Deposited %.2f. New balance: %.2f\n", amount, account->balance);
}

void withdraw(struct BankAccount * account, float ammount){
    if (amount> account-> balance){
        printf("Insuffitient funds. Withdraw not allowed.\n");
    } else{
        account->balance -= amount;
        printf("Withdrawn %.2f. New Balance; %.2f\n", amount, account->balance);

    }
}

void checkBalance(struct BankAccount * account) {
    printf("Account Holder: %s\n", account->name);
    printf("Account Number: %d\n", account->accountNumber);
    printf("Current Balance: %.2f\n", account->balance);
}

int main(){
    struct BankAccount userAccount;

    printf("Enter your name: ");
    fgets(userAccount.name, sizeof(userAccount.name), stdin);

    printf("Enter your Account number: ");
    scanf("%d", &userAccount.accountNumber);

    userAccount.balance = 0.0;

    int choice;
    float amount;

    do {
        printf("\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n");
        printf("Enter Your choice: ");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                printf("Enter the auount to deposit: ");
                scanf("%f", &amount);
                deposit(&userAccount, amount);
                break;
            case 2:
                printf("Enter the amount to withdraw: ");
                scanf("%f", &amount);
                withdraw(&userAccount, amount);
                break;
            case 3:
                checkBalance(&userAccount);
                break;
            case 4:
                printf("Exiting program. goodbye!\n");
                break;
            default:
                printf("Invalid choice. please Enter a valid option.\n");

        }
    } while (choice != 4);
    return 0;
}
