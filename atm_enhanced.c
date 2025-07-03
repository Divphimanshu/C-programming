#include <stdio.h>
#include <string.h>

#define MAX_TRANSACTIONS 5
#define CORRECT_PIN 1234

float balance = 1000.0;
char transactions[MAX_TRANSACTIONS][50];
int transactionCount = 0;

// Function to record transaction
void recordTransaction(const char *desc) {
    if (transactionCount < MAX_TRANSACTIONS) {
        strcpy(transactions[transactionCount], desc);
        transactionCount++;
    } else {
        // Shift older transactions
        for (int i = 1; i < MAX_TRANSACTIONS; i++) {
            strcpy(transactions[i - 1], transactions[i]);
        }
        strcpy(transactions[MAX_TRANSACTIONS - 1], desc);
    }
}

// Function to display transaction history
void showTransactions() {
    printf("\n--- Last %d Transactions ---\n", transactionCount);
    if (transactionCount == 0) {
        printf("No transactions yet.\n");
    } else {
        for (int i = 0; i < transactionCount; i++) {
            printf("%d. %s\n", i + 1, transactions[i]);
        }
    }
}

// ATM operations
void checkBalance() {
    printf("\n✅ Current Balance: ₹%.2f\n", balance);
    recordTransaction("Checked balance");
}

void depositMoney() {
    float amount;
    printf("\nEnter amount to deposit: ₹");
    scanf("%f", &amount);

    if (amount > 0) {
        balance += amount;
        printf("✅ ₹%.2f deposited.\n", amount);

        char log[50];
        sprintf(log, "Deposited ₹%.2f", amount);
        recordTransaction(log);
    } else {
        printf("❌ Invalid deposit amount.\n");
    }
}

void withdrawMoney() {
    float amount;
    printf("\nEnter amount to withdraw: ₹");
    scanf("%f", &amount);

    if (amount > 0 && amount <= balance) {
        balance -= amount;
        printf("✅ ₹%.2f withdrawn.\n", amount);

        char log[50];
        sprintf(log, "Withdrew ₹%.2f", amount);
        recordTransaction(log);
    } else {
        printf("❌ Insufficient balance or invalid amount.\n");
    }
}

void showMenu() {
    printf("\n--- 🏦 ATM Menu ---\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. View Transactions\n");
    printf("5. Exit\n");
    printf("Choose an option: ");
}

// PIN Verification
int verifyPIN() {
    int pin, attempts = 0;
    while (attempts < 3) {
        printf("Enter 4-digit PIN: ");
        scanf("%d", &pin);
        if (pin == CORRECT_PIN) {
            return 1;
        } else {
            printf("Incorrect PIN. Try again.\n");
            attempts++;
        }
    }
    return 0;
}

// Main function
int main() {
    int choice;

    printf("🔐 Welcome to Secure ATM\n");

    if (!verifyPIN()) {
        printf("❌ Too many incorrect attempts. Exiting.\n");
        return 1;
    }

    while (1) {
        showMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1: checkBalance(); break;
            case 2: depositMoney(); break;
            case 3: withdrawMoney(); break;
            case 4: showTransactions(); break;
            case 5: 
                printf("👋 Thank you for using the ATM. Goodbye!\n");
                return 0;
            default:
                printf("❌ Invalid option. Please choose between 1-5.\n");
        }
    }

    return 0;
}
