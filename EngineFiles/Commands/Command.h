#ifndef AMU_COMMANDS_H
#define AMU_COMMANDS_H

namespace pacman
{

	class Command
	{
	public:
		virtual ~Command() = default;
		virtual void Execute() = 0;
	};

}

#endif //AMU_COMMANDS_H