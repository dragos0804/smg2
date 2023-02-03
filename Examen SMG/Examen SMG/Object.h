#pragma once
#include "Shader.h"
#include "Camera.h"

enum Action
{
	K_FORWARD,
	K_BACKWARD,
	K_LEFT,
	K_RIGHT,
	ROTATE_OX,
	ROTATE_OY,
	ROTATE_OZ,
	SCALE_UP,
	SCALE_DOWN
};

class Object
{
public:
	Object(Shader& shader);
	void ProcessKeyboard(Action action, float deltaTime);
	void RenderObject();
	void Render(const Shader& shader);
	void DoubleScaleOY();
	void DevideScaleOY();
private:
	unsigned int cubeVAO;
	unsigned int cubeVBO;
	glm::mat4 model;

	glm::vec3 position;
	glm::vec3 rotation;
	glm::vec3 scale;

	float angleX;
	float angleY;
	float angleZ;

	float size;
};

