#include<iostream>
#include<fstream>
#include<string>

using namespace std;
//				made file 
ofstream file ("Project.txt");

//				 all about players
struct player_football
{
	string players_name;
	string players_pos;
	int number_of_touchdowns;
	int number_of_catches;
	int number_of_passing_yards;
	int number_of_receiving_yards;
	int number_of_rushing_yards;

};

// input data include string and int
void input_data(player_football players[10]) {

	for (int i = 0; i < 10; i++)
	{
		cout << "please enter the player's name :  " << endl;
		cin>> players[i].players_name;


		cout << "please enter the player's poisition  :  " << endl;
		cin >>  players[i].players_pos;


		cout << "please enter the number_of_touchdowns :  " << endl;
		cin >> players[i].number_of_touchdowns;
		
		
		cout << "please enter the number_of_catches  :  " << endl;
		cin >> players[i].number_of_catches;
		
		
		cout << "please enter the number_of_passing_yards :  " << endl;
		cin >> players[i].number_of_passing_yards;
		
		
		cout << "please enter the number_of_receiving_yards  :  " << endl;
		cin >> players[i].number_of_receiving_yards;
		
		
		cout << "please enter the number_of_rushing_yards  :  " << endl;
		cin >> players[i].number_of_rushing_yards;
	}
}
// that is output information about player in console
void output_data(player_football players[10]) {

	cout << " We gave you all your players's data ,Take a look at it .........  " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;

		cout << "name : " << players[i].players_name <<"\n "<<endl;
		cout << "position : " << players[i].players_pos << "\n " << endl;
		cout << " number_of_touchdowns : " << players[i].number_of_touchdowns << "\n " << endl;
		cout << "number_of_catches : " << players[i].number_of_catches << "\n " << endl;
		cout << "number_of_passing_yards : " << players[i].number_of_passing_yards << "\n " << endl;
		cout << "number_of_receiving_yards : " << players[i].number_of_receiving_yards << "\n " << endl;
		cout << "number_of_rushing_yards : " << players[i].number_of_rushing_yards << "\n " << endl;


		cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - \n \n \n " << endl;
		
	}

}

// here update info's about spisific player
void update_player(player_football players[10], int number) {

	cout << "please enter the player's name :  " << endl;
	cin >> players[number].players_name;


	cout << "please enter the player's poisition  :  " << endl;
	cin >> players[number].players_pos;


	cout << "please enter the number_of_touchdowns :  " << endl;
	cin >> players[number].number_of_touchdowns;


	cout << "please enter the number_of_catches  :  " << endl;
	cin >> players[number].number_of_catches;


	cout << "please enter the number_of_passing_yards :  " << endl;
	cin >> players[number].number_of_passing_yards;


	cout << "please enter the number_of_receiving_yards  :  " << endl;
	cin >> players[number].number_of_receiving_yards;


	cout << "please enter the number_of_rushing_yards  :  " << endl;
	cin >> players[number].number_of_rushing_yards;

}

// that for output data on file Project.txt
void output_data_file(player_football players[10]) {

	file << " We gave you all your players's data ,Take a look at it .........  " << endl;
	for (int i = 0; i < 10; i++)
	{
		file << " - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;

		file << "name : " << players[i].players_name << "\n " << endl;
		file << "position : " << players[i].players_pos << "\n " << endl;
		file << " number_of_touchdowns : " << players[i].number_of_touchdowns << "\n " << endl;
		file << "number_of_catches : " << players[i].number_of_catches << "\n " << endl;
		file << "number_of_passing_yards : " << players[i].number_of_passing_yards << "\n " << endl;
		file << "number_of_receiving_yards : " << players[i].number_of_receiving_yards << "\n " << endl;
		file << "number_of_rushing_yards : " << players[i].number_of_rushing_yards << "\n " << endl;


		file << " - - - - - - - - - - - - - - - - - - - - - - - - - - - \n \n \n " << endl;

	}

}
// searching on player's index by name  
void update(player_football players[10] , string name) {
	for (int i = 0; i < 10; i++) {
		if (players[i].players_name == name) {
			update_player(players, i);
		}
	}

	
}



int main() {
	// opject players [10 ] size 10 
	player_football players [10];
	//functions 
	input_data(players);
	output_data(players);
	// options for user
	string Choice;
	string save;

	cout << "Do you want to update informations about players ? " << endl;
	
	cin >> Choice;
	
	cout << "Do you want to save all your informations at file ?   " << endl;
	cin >> save;
	// if user said yes it will update the player , that is mean this if statment for update 
	if (Choice == "yes") {
		string name;
			cout << "insert index of player .." << endl;
		cin >> name;
		update(players , name);
	}
// that if for file print all final data on file 
	if (save == "yes") {
		output_data_file(players);
	}
	file.close();
}