#include <iostream>
#include <string>
#include <deque>

using namespace std;

enum CommandType
{
	MoveLeft,
	MoveRight,
	MoveForward,
	MoveBackward
};

string CommandTypeToString(CommandType cmdType)
{
	string str = "";
	switch(cmdType)
	{
		case MoveLeft: str = "Moving left"; break;
		case MoveRight: str = "Moving right"; break;
		case MoveForward: str = "Moving forward"; break;
		case MoveBackward: str = "Moving backward"; break;
	}
	return str;
}

class RoboCommander
{
private:
	deque<CommandType> d1;
public:
	void AddCommand(CommandType cmdType)
	{
		d1.push_back(cmdType);
	}
	void UndoCommand()
	{
		if(d1.size() != 0)
			d1.pop_back();
	}
	void Execute()
	{
		for (CommandType d: d1)
		{
			cout << CommandTypeToString(d) << endl;
		}
		cout << "Ready" << endl;
	}
};

int main()
{
	RoboCommander commander;
	commander.AddCommand(MoveLeft);
	commander.AddCommand(MoveRight);
	commander.UndoCommand();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.AddCommand(MoveLeft);
	commander.AddCommand(MoveForward);
	commander.AddCommand(MoveLeft);
	commander.AddCommand(MoveForward);
	commander.AddCommand(MoveRight);
	commander.AddCommand(MoveBackward);
	commander.Execute();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.UndoCommand();
	commander.AddCommand(MoveForward);
	commander.Execute();
	system("pause");
	return 0;
}