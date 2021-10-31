#ifndef OPENGLWINDOW_HPP_
#define OPENGLWINDOW_HPP_

#include <imgui.h>

#include <random>

#include "abcg.hpp"
#include "ball.hpp"
#include "barLeft.hpp"
#include "barRight.hpp"
#include "scenary.hpp"


class OpenGLWindow : public abcg::OpenGLWindow {
 protected:
  void handleEvent(SDL_Event& event) override;
  void initializeGL() override;
  void paintGL() override;
  void paintUI() override;
  void resizeGL(int width, int height) override;
  void terminateGL() override;

 private:
  GLuint m_objectsProgram{};

  int m_viewportWidth{};
  int m_viewportHeight{};

  GameData m_gameData;

  BarLeft m_barLeft;
  BarRight m_barRight;
  Ball m_ball;
  Scenary m_scenary;

  abcg::ElapsedTimer m_restartWaitTimer;

  ImFont* m_font{};

  std::default_random_engine m_randomEngine;

  
  void checkCollisions();
  void checkWinCondition();
  

  void restart();
  void update();
  abcg::ElapsedTimer m_colisionTimer;
};

#endif