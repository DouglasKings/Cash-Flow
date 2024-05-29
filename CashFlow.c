#include <stdio.h>

// Function prototypes
double calculateCashOutflows(double Rent, double Salaries, double Wages, double Licences, double Transport);
double calculateCashInflows(double Donations, double Contributions);

int main(){

    // Variables to store user inputs
    double Rent, Salaries, Wages, Licences, Transport, Donations, Contributions, cashFlow, cashOutFlows,
    cashInFlows;

    // Prompt user for inputs
    printf("Enter the rent: ");
    scanf("%lf", &Rent);
    printf("Enter the salaries: ");
    scanf("%lf", &Salaries);
    printf("Enter the wages: ");
    scanf("%lf", &Wages);
    printf("Enter the licences: ");
    scanf("%lf", &Licences);
    printf("Enter the transport: ");
    scanf("%lf", &Transport);
    printf("Enter the donations: ");
    scanf("%lf", &Donations);
    printf("Enter the contributions: ");
    scanf("%lf", &Contributions);

    // Calculate Cash Inflows, Cash Outflows and cash flow
    cashOutFlows = calculateCashOutflows(Rent, Salaries, Wages, Licences, Transport);
    cashInFlows = calculateCashInflows(Donations, Contributions);
    cashFlow = (cashInFlows - cashOutFlows);

    // Display the result
    printf("The rent is: %.2lf \n", Rent);
    printf("The salary is:  %.2lf \n", Salaries);
    printf("The wage is:  %.2lf \n", Wages);
    printf("The licence is:  %.2lf \n", Licences);
    printf("The transport is:  %.2lf \n", Transport);
    printf("The donation is:  %.2lf \n", Donations);
    printf("The contribution is:  %.2lf \n", Contributions);
    printf("The cash outflows are: %.2lf \n", cashOutFlows);
    printf("The cash inflows are: %.2lf \n", cashInFlows);  
    printf("The cash flow is: %.2lf \n", cashFlow);

    return 0;
}

double calculateCashOutflows(double Rent, double Salaries, double Wages, double Licences, double Transport){
    return Rent + Salaries + Wages + Licences + Transport;
}
double calculateCashInflows(double Donations, double Contributions){
    return Donations + Contributions;
}