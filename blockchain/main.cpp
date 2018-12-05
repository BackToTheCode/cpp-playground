#include <string>
#include <iostream>
 
//***************************************************************
//    	THE MAIN FUNCTION OF THE BLOCKCHAIN PROGRAM
//****************************************************************

using namespace std;

int main()
{
	char ch;
	int num;
	// intro();
	do
	{
		system("clear");
		cout<<"\n\n\tMAIN MENU:";
		cout<<"\n\t01. ADD A NEW TRANSACTION";
		cout<<"\n\t02. MINE A NEW BLOCK";
		cout<<"\n\t03. OUTPUT THE BLOCKCHAIN";
		cout<<"\n\t04. OUTPUT THE PARTICIPANTS";
		cout<<"\n\t05. VERIFY TRANSACTIONS";
		cout<<"\n\t06. MANIPULATE THE BLOCKCHAIN";
		cout<<"\n\t07. EXIT";
		cout<<"\n\tSelect Your Option (1-7) ";
		cin>>ch;
		system("clear");
		switch(ch)
		{
		case '1':
			// write_account();
			// tx_data = get_transaction_value()
			// recipient, amount = tx_data
			// if (add_transaction(recipient, amount=amount)):
			// 	print('Added transaction')
			// else:
			// 	print('Transaction failed - insufficient funds')
			// print(open_transactions)
			cout << "New transaction added" << "\n";
			break;
		case '2':
			// cout<<"\n\n\tEnter The account No. : "; cin>>num;
			// deposit_withdraw(num, 1);
			break;
		case '3':
			// cout<<"\n\n\tEnter The account No. : "; cin>>num;
			// deposit_withdraw(num, 2);
			break;
		case '4': 
			// cout<<"\n\n\tEnter The account No. : "; cin>>num;
			// display_sp(num);
			break;
		case '5':
			// display_all();
			break;
		case '6':
			// cout<<"\n\n\tEnter The account No. : "; cin>>num;
			// delete_account(num);
			break;
		 case '7':
			// cout<<"\n\n\tEnter The account No. : "; cin>>num;
			// modify_account(num);
			break;
		 default :cout<<"\a";
		}
		cin.ignore();
		cin.get();
	}while(ch!='7');
	return 0;
}


// while waiting_for_input:
//     print_spacer()
//     print('Please choose')
//     print('1: Add a new transaction value')
//     print('2: Mine a new block')
//     print('3: Output the blockchain')
//     print('4: Output participants')
//     print('5: Verify transactions')
//     print('h: Manipulate the blockchain')
//     print('q: To quit')

//     user_choice = get_user_choice()

//     print('-' * 20)

//     if user_choice == '1':
//         tx_data = get_transaction_value()
//         recipient, amount = tx_data
//         if (add_transaction(recipient, amount=amount)):
//             print('Added transaction')
//         else:
//             print('Transaction failed - insufficient funds')
//         print(open_transactions)

//     elif user_choice == '2':
//         time = datetime.datetime.now().time()
//         # print(time)
//         if mine_block():
//             open_transactions = []
//             print(time)
//             print(datetime.datetime.now().time())

//     elif user_choice == '3':
//         print_blockchain()

//     elif user_choice == '4':
//         print(participants)

//     elif user_choice == '5':
//         if verify_transactions():
//             print('All transactions are valid')
//         else:
//             print('There are invalid transactions')

//     elif user_choice == 'h':
//         if len(blockchain) >= 1:
//             blockchain[0] = { 
//                 'previous_hash': '',
//                 'index': 0,
//                 'transactions': [{'sender': 'Chris', 'recipient': 'Max', 'amount': 100}]
//             } 
            
//     elif user_choice == 'q':
//         waiting_for_input = False
//     else:
//         print('Input was invalid, please pick a value from the list!')

//     if not verify_chain():
//         print('Invalid blockchain')
//         waiting_for_input = False

//     print('Balance of {}: {:6.2f}'.format('James', get_balance('James')))

// else: 
//     print('User left!')







// class Employee
// {
// private:
//     int m_id;
//     std::string m_name;
 
// public:
//     Employee(int id=0, const std::string &name=""):
//         m_id(id), m_name(name)
//     {
//         std::cout << "Employee " << m_name << " created.\n";
//     }
 
//     // Use a delegating constructors to minimize redundant code
//     Employee(const std::string &name) : Employee(0, name) { }
// };