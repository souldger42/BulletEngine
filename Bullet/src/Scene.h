#ifndef SCENE_H
#define SCENE_H

#include "GameObject.h"

union SDL_Event;

class Scene {
public:
	Scene() {}
	~Scene() {}

	virtual bool OnCreate() = 0;
	virtual void OnDestroy() = 0;
	virtual void Update(const float deltaTime) = 0;
	virtual void Render() const = 0;
	virtual void HandleEvents(SDL_Event& sdlEvent) = 0;
};
#endif