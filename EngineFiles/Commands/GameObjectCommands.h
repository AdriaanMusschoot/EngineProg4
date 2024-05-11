#pragma once
#include "Command.h"
#include "GameObject.h"

namespace pacman
{

	class GameObjectCommand : public Command
	{
	public:
		GameObjectCommand(GameObject* actorPtr)
			: m_ActorPtr{ actorPtr }
		{}
		virtual ~GameObjectCommand() = default;

		GameObjectCommand(const GameObjectCommand& other) = delete;
		GameObjectCommand(GameObjectCommand&& other) = delete;
		GameObjectCommand& operator=(const GameObjectCommand& other) = delete;
		GameObjectCommand& operator=(GameObjectCommand&& other) = delete;
	protected:
		GameObject* GetGameObject() const { return m_ActorPtr; }
	private:
		GameObject* m_ActorPtr{ nullptr };
	};

}
