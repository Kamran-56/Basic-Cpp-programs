/*Create a menu-based program in c++ where the user can choose between
 "Vegetarian" and "Non Vegetarian" options, then display a sub-menu
  with specific dishes based on the selection.
  Use nested switch statements to handle each menu and sub-menu option. */


    #include <iostream>
    using namespace std;

    int main()
{
    int choice, subChoice;

    cout << "Welcome to the restaurant menu!";
    cout << "Please choose an option:\n 1. Vegetarian\n2. Non-Vegetarian:\t";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "You selected Vegetarian options!\nPlease choose a dish:\n1. Veg Biryani\n2. Paneer Butter Masala\n3. Vegetable Samosa\nEnter your choice (1, 2, or 3)";
            cin >> subChoice;

            switch (subChoice)
            {
                case 1:
                    cout << "You selected Veg Biryani!";
                    break;
                case 2:
                    cout << "You selected Paneer Butter Masala!";
                    break;
                case 3:
                    cout << "You selected Vegetable Samosa!";
                    break;
                default:
                    cout << "Invalid choice! Please select a valid dish.";
                    break;
            }
            break;

        case 2:
            cout << "\nYou selected Non-Vegetarian options!\nPlease choose a dish:\n1. Chicken Biryani\n2. Mutton Rogan Josh\n3. Fish Curry\nEnter your choice (1, 2, or 3):\t";
            cin >> subChoice;

            switch (subChoice)
            {
                case 1:
                    cout << "You selected Chicken Biryani!";
                    break;
                case 2:
                    cout << "You selected Mutton Rogan Josh!";
                    break;
                case 3:
                    cout << "You selected Fish Curry!";
                    break;
                default:
                    cout << "Invalid choice! Please select a valid dish.";
                    break;
            }
            break;

        default:
            cout << "Invalid choice! Please select either 1 (Vegetarian) or 2 (Non-Vegetarian).";
            break;
    }

    return 0;
}