#include "AppClass.h"
void Application::InitVariables(void)
{
	////Change this to your name and email
	m_sProgrammer = "Samar Karnani - srk7473@rit.edu";
	vector3 v3Position(0.0f, 0.0f, 30.0f);
	vector3 v3Target = ZERO_V3;
	vector3 v3Upward = AXIS_Y;
	m_pCameraMngr->SetPositionTargetAndUpward(v3Position, v3Target, v3Upward);
	
	//init the meshes
	for (int i = 0; i < 47; i++) {
		m_pMeshes.push_back(new MyMesh());
		m_pMeshes[i]->GenerateCube(1.0f, C_BLACK);
		m_m4TransformMeshes.push_back(IDENTITY_M4);
		
	}

	//row 4 - top
	m_m4TransformMeshes[0] = glm::translate(vector3(-3.0f, 4.0f, 0.0f));
	m_m4TransformMeshes[1] = glm::translate(vector3(3.0f, 4.0f, 0.0f));
	//row 3 
	m_m4TransformMeshes[2] = glm::translate(vector3(-2.0f, 3.0f, 0.0f));
	m_m4TransformMeshes[3] = glm::translate(vector3(2.0f, 3.0f, 0.0f));
	//row 2
	m_m4TransformMeshes[4] = glm::translate(vector3(-3.0f, 2.0f, 0.0f));
	m_m4TransformMeshes[5] = glm::translate(vector3(-2.0f, 2.0f, 0.0f));
	m_m4TransformMeshes[6] = glm::translate(vector3(-1.0f, 2.0f, 0.0f));
	m_m4TransformMeshes[7] = glm::translate(vector3(0.0f, 2.0f, 0.0f));
	m_m4TransformMeshes[8] = glm::translate(vector3(1.0f, 2.0f, 0.0f));
	m_m4TransformMeshes[9] = glm::translate(vector3(2.0f, 2.0f, 0.0f));
	m_m4TransformMeshes[10] = glm::translate(vector3(3.0f, 2.0f, 0.0f));
	//row 1
	m_m4TransformMeshes[11] = glm::translate(vector3(-4.0f, 1.0f, 0.0f));
	m_m4TransformMeshes[12] = glm::translate(vector3(-3.0f, 1.0f, 0.0f));
	m_m4TransformMeshes[13] = glm::translate(vector3(-1.0f, 1.0f, 0.0f));
	m_m4TransformMeshes[14] = glm::translate(vector3(0.0f, 1.0f, 0.0f));
	m_m4TransformMeshes[15] = glm::translate(vector3(1.0f, 1.0f, 0.0f));
	m_m4TransformMeshes[16] = glm::translate(vector3(3.0f, 1.0f, 0.0f));
	m_m4TransformMeshes[17] = glm::translate(vector3(4.0f, 1.0f, 0.0f));
	//row 0
	m_m4TransformMeshes[18] = glm::translate(vector3(-5.0f, 0.0f, 0.0f));
	m_m4TransformMeshes[19] = glm::translate(vector3(-4.0f, 0.0f, 0.0f));
	m_m4TransformMeshes[20] = glm::translate(vector3(-3.0f, 0.0f, 0.0f));
	m_m4TransformMeshes[21] = glm::translate(vector3(-2.0f, 0.0f, 0.0f));
	m_m4TransformMeshes[22] = glm::translate(vector3(-1.0f, 0.0f, 0.0f));
	m_m4TransformMeshes[23] = glm::translate(vector3(0.0f, 0.0f, 0.0f));
	m_m4TransformMeshes[24] = glm::translate(vector3(1.0f, 0.0f, 0.0f));
	m_m4TransformMeshes[25] = glm::translate(vector3(2.0f, 0.0f, 0.0f));
	m_m4TransformMeshes[26] = glm::translate(vector3(3.0f, 0.0f, 0.0f));
	m_m4TransformMeshes[27] = glm::translate(vector3(4.0f, 0.0f, 0.0f));
	m_m4TransformMeshes[28] = glm::translate(vector3(5.0f, 0.0f, 0.0f));
	//row -1
	m_m4TransformMeshes[29] = glm::translate(vector3(-5.0f, -1.0f, 0.0f));
	m_m4TransformMeshes[30] = glm::translate(vector3(-3.0f, -1.0f, 0.0f));
	m_m4TransformMeshes[31] = glm::translate(vector3(-3.0f, -1.0f, 0.0f));
	m_m4TransformMeshes[32] = glm::translate(vector3(-2.0f, -1.0f, 0.0f));
	m_m4TransformMeshes[33] = glm::translate(vector3(-1.0f, -1.0f, 0.0f));
	m_m4TransformMeshes[34] = glm::translate(vector3(0.0f, -1.0f, 0.0f));
	m_m4TransformMeshes[35] = glm::translate(vector3(1.0f, -1.0f, 0.0f));
	m_m4TransformMeshes[36] = glm::translate(vector3(2.0f, -1.0f, 0.0f));
	m_m4TransformMeshes[37] = glm::translate(vector3(3.0f, -1.0f, 0.0f));
	m_m4TransformMeshes[38] = glm::translate(vector3(5.0f, -1.0f, 0.0f));
	//row -2
	m_m4TransformMeshes[39] = glm::translate(vector3(-5.0f, -2.0f, 0.0f));
	m_m4TransformMeshes[40] = glm::translate(vector3(-3.0f, -2.0f, 0.0f));
	m_m4TransformMeshes[41] = glm::translate(vector3(3.0f, -2.0f, 0.0f));
	m_m4TransformMeshes[42] = glm::translate(vector3(5.0f, -2.0f, 0.0f));
	//row -3
	m_m4TransformMeshes[43] = glm::translate(vector3(-2.0f, -3.0f, 0.0f));
	m_m4TransformMeshes[44] = glm::translate(vector3(-1.0f, -3.0f, 0.0f));
	m_m4TransformMeshes[45] = glm::translate(vector3(1.0f, -3.0f, 0.0f));
	m_m4TransformMeshes[46] = glm::translate(vector3(2.0f, -3.0f, 0.0f));

}
void Application::Update(void)
{
	//Update the system so it knows how much time has passed since the last call
	m_pSystem->Update();

	//Is the arcball active?
	ArcBall();

	//Create a model matrix out of the arcball quaternion
	matrix4 m4Model = ToMatrix4(m_qArcBall);

	//Is the first person camera active?
	CameraRotation();

	//Update Entity Manager
	m_pEntityMngr->Update();

	//Add objects to render list
	m_pEntityMngr->AddEntityToRenderList(-1, true);
}

void Application::Release(void)
{
	for (int i = 0; i < m_pMeshes.size(); i++)
	{
		SafeDelete(m_pMeshes[i]);
	}
	//release GUI
	ShutdownGUI();
}

void Application::Display(void)
{
	// Clear the screen
	ClearScreen();

	matrix4 m4View = m_pCameraMngr->GetViewMatrix();
	matrix4 m4Projection = m_pCameraMngr->GetProjectionMatrix();

	
	clock_t time = clock()/CLOCKS_PER_SEC;

	//flaoting plz
	static float f1transX = 0.00f;
	static float f1transY = 0.00f;
	matrix4 m4trans = glm::translate(vector3(f1transX, f1transY, 0.0f));
	for (size_t i = 0; i < 47; i++)
	{
		m_pMeshes[i]->Render(m4Projection, m4View, m_m4TransformMeshes[i] * m4trans);
	}
	
	f1transX += cos(time)/25;
	f1transY += sin(time)/25;

	// draw a skybox
	m_pModelMngr->AddSkyboxToRenderList();

	//render list call
	m_uRenderCallCount = m_pModelMngr->Render();

	//clear the render list
	m_pModelMngr->ClearRenderList();

	//draw gui
	DrawGUI();

	//end the current frame (internally swaps the front and back buffers)
	m_pWindow->display();
}