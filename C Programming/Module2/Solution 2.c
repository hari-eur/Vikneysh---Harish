#include <stdio.h>
#include <string.h>

struct Account 
{
    char type[20];
    char interest[20];
    char min_balance[20];
    char maintenance_fee[20];
    char annual_fee[20];
};


struct Bank 
{
    char name[50];
    struct Account savings;
    struct Account current;
    struct Account demat;
};

int main() 
{
    struct Bank banks[3] = {
        {"State Bank of India",
         {"Savings", "3%", "1000", "0", "0"},
         {"Current", "0%", "10000", "500", "0"},
         {"Demat", "-", "-", "-", "500"}
        },
        {"HDFC Bank",
         {"Savings", "4%", "5000", "150", "0"},
         {"Current", "0%", "10000", "750", "0"},
         {"Demat", "-", "-", "-", "500"}
        },
        {"ICICI Bank",
         {"Savings", "3.5%", "2000", "0", "0"},
         {"Current", "0%", "15000", "500", "0"},
         {"Demat", "-", "-", "-", "300"}
        }
    };

    printf("List of Banks:\n");
    printf("1. State Bank of India\n");
    printf("2. HDFC Bank\n");
    printf("3. ICICI Bank\n");
    printf("4.Exit\n");

    int bank_choice;
    printf("\nChoose a bank: ");
    scanf("%d", &bank_choice);
    
    do
    {
        switch (bank_choice) {
            case 1:
                printf("\n%s\n",banks[0].name);
                printf("1. Savings Account\n");
                printf("2. Current Account\n");
                printf("3. Demat Account\n");
                printf("4. Exit\n");
                
                int account_choice;
                printf("\nChoose an account: ");
                scanf("%d", &account_choice);
    
                switch(account_choice) {
                    case 1:
                        printf("\nSavings Account\n");
                        printf("Interest Rate: %s\n", banks[0].savings.interest);
                        printf("Minimum Balance: %s\n", banks[0].savings.min_balance);
                        printf("Monthly Maintenance Fee: %s\n", banks[0].savings.maintenance_fee);
                        break;
                    case 2:
                        printf("\nCurrent Account\n");
                        printf("Interest Rate: %s\n", banks[0].current.interest);
                        printf("Minimum Balance: %s\n", banks[0].current.min_balance);
                        printf("Monthly Maintenance Fee: %s\n", banks[0].current.maintenance_fee);
                        break;
                    case 3:
                        printf("\nDemat Account\n");
                        printf("Annual Maintenance Fee: %s\n", banks[0].demat.annual_fee);
                        break;
                    case 4:
                        exit(0);
                    default:
                        printf("\nInvalid account choice.\n");
                        break;
                }
                break;
            case 2:
                printf("\n%s\n",banks[1].name);
                printf("1. Savings Account\n");
                printf("2. Current Account\n");
                printf("3. Demat Account\n");
    
                printf("\nEnter the number of the account you want to choose: ");
                scanf("%d", &account_choice);
    
                switch(account_choice) {
                    case 1:
                        printf("\nSavings Account\n");
                        printf("Interest Rate: %s\n", banks[1].savings.interest);
                        printf("Minimum Balance: %s\n", banks[1].savings.min_balance);
                        printf("Monthly Maintenance Fee: %s\n", banks[1].savings.maintenance_fee);
                        break;
                    case 2:
                        printf("\nCurrent Account\n");
                        printf("Interest Rate: %s\n", banks[1].current.interest);
                        printf("Minimum Balance: %s\n", banks[1].current.min_balance);
                        printf("Monthly Maintenance Fee: %s\n", banks[1].current.maintenance_fee);
                        break;
                    case 3:
                        printf("\nDemat Account\n");
                        printf("Annual Maintenance Fee: %s\n", banks[1].demat.annual_fee);
                        break;
                    case 4:
                        exit(0);
                    default:
                        printf("\nInvalid account choice.\n");
                        break;
                }
                break;
                
                case 3:
                printf("\n%s\n",banks[2].name);
                printf("1. Savings Account\n");
                printf("2. Current Account\n");
                printf("3. Demat Account\n");
    
                printf("\nEnter the number of the account you want to choose: ");
                scanf("%d", &account_choice);
    
                switch (account_choice) {
                    case 1:
                        printf("\nSavings Account\n");
                        printf("Interest Rate: %s\n", banks[2].savings.interest);
                        printf("Minimum Balance: %s\n", banks[2].savings.min_balance);
                        printf("Monthly Maintenance Fee: %s\n", banks[2].savings.maintenance_fee);
                        break;
                    case 2:
                        printf("\nCurrent Account\n");
                        printf("Interest Rate: %s\n", banks[2].current.interest);
                        printf("Minimum Balance: %s\n", banks[2].current.min_balance);
                        printf("Monthly Maintenance Fee: %s\n", banks[2].current.maintenance_fee);
                        break;
                    case 3:
                        printf("\nDemat Account\n");
                        printf("Annual Maintenance Fee: %s\n", banks[2].demat.annual_fee);
                        break;
                    default:
                        printf("\nInvalid account choice.\n");
                        break;
                    case 4:
                        exit(0);
                }
                break;
            case 4:
                exit(0);
        }
    }while(1);
}