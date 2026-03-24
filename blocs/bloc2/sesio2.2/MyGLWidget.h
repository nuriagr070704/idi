// MyGLWidget.h
#include "BL2GLWidget.h"
#include "Model/model.h"

class MyGLWidget : public BL2GLWidget {
  Q_OBJECT

  public:
    MyGLWidget(QWidget *parent=0) : BL2GLWidget(parent) {}
    ~MyGLWidget();
  
  protected:
    virtual void initializeGL();
    virtual void paintGL();
    virtual void carregaShaders();
    void modelTransformHomer();
    void modelTransformTerra();
    virtual void projectTransform();
    virtual void viewTransform();
    virtual void creaBuffers();

    GLuint projLoc;
    GLuint viewLoc;

    GLuint VAO_Homer;
    GLuint VAO_Terra;

    float angleHomer;

    Model m;
    float fov,ra,zNear,zFar;
    glm::vec3 centreEscena;
    float radiEscena;
    
    glm::vec3 VRP,OBS,UP;

  private:
    int printOglError(const char file[], int line, const char func[]);
    void ini_camera();
    void calculaEscena(glm::vec3 pmin, glm::vec3 pmax);
};
