import java.util.Scanner;
class Deposit {
    public void depositFunds(double[] balances, int accountIndex, double amount) {
        if (amount > 0) {
            balances[accountIndex] = balances[accountIndex] + amount;
            System.out.println("Deposited " + amount + " to account " + accountIndex);
            System.out.println("Your balance is"+ balances[accountIndex]);
        } else {
            System.out.println("Invalid deposit amount.");
        }
    }
}

class Withdraw {
    public void withdrawFunds(double[] balances, int accountIndex, double amount) {
        if (amount > 0 && balances[accountIndex] >= amount) {
            balances[accountIndex] = balances[accountIndex]- amount;
            System.out.println("Withdrew " + amount + " from account " + accountIndex);
            System.out.println("Your balance is "+ balances[accountIndex]);
        } else if (amount <= 0) {
            System.out.println("Invalid withdrawal amount.");
        } else {
            System.out.println("Insufficient funds in account " + accountIndex);
        }
    }
}

class CheckBalance {
    public void checkBalance(double[] balances, int accountIndex) {
        System.out.println("Account " + accountIndex + " balance: " + balances[accountIndex]);
    }
}

public class BankAccount {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Account details
        String[] accountHolders = {"Naadir", "Joy", "Sally", "Ivanna"};
        double[] balances = {20000.00, 5600.00, 6400.00, 73200.00}; // Initial balances
        String[] pins = {"2222", "3333", "4444", "5555"}; // Initial PINs

        // Create objects for operations
        Deposit deposit = new Deposit();
        Withdraw withdraw = new Withdraw();
        CheckBalance checkBalance = new CheckBalance();

        // Display menu
        while (true) {
            System.out.println("\nWelcome to the Bank! Please select an operation:");
            System.out.println("1. Deposit");
            System.out.println("2. Withdraw");
            System.out.println("3. Check Balance");
            System.out.println("4. Change PIN");
            System.out.println("5. Exit");
            System.out.print("Enter your choice: ");
            int choice = scanner.nextInt();

            System.out.print("Enter your account number (0 to 3): ");
            int accountIndex = scanner.nextInt();

            // Check if account index is valid
            if (accountIndex < 0 || accountIndex >= accountHolders.length) {
                System.out.println("Invalid account number.");
                continue;
            }

            // Ask for PIN verification
            System.out.print("Enter your PIN: ");
            String enteredPin = scanner.next();
            if (!enteredPin.equals(pins[accountIndex])) {
                System.out.println("Invalid PIN. Try again.");
                continue;
            }

            switch (choice) {
                case 1: // Deposit
                    System.out.print("Enter amount to deposit: ");
                    double depositAmount = scanner.nextDouble();
                    deposit.depositFunds(balances, accountIndex, depositAmount);
                    break;
                case 2: // Withdraw
                    System.out.print("Enter amount to withdraw: ");
                    double withdrawAmount = scanner.nextDouble();
                    withdraw.withdrawFunds(balances, accountIndex, withdrawAmount);
                    break;
                case 3: // Check Balance
                    checkBalance.checkBalance(balances, accountIndex);
                    break;
                case 4: // Change PIN
                    System.out.print("Enter new PIN: ");
                    String newPin = scanner.next();
                    pins[accountIndex] = newPin;
                    System.out.println("PIN successfully changed.");
                    break;
                case 5: // Exit
                    System.out.println("Thank you for using our bank! Goodbye.");
                    scanner.close();
                    return;
                default:
                    System.out.println("Invalid choice. Please try again:");
            }
        }
    }
}