#include <vtkAutoInit.h>
VTK_MODULE_INIT(vtkRenderingOpenGL2)
VTK_MODULE_INIT(vtkInteractionStyle)
VTK_MODULE_INIT(vtkRenderingFreeType)
VTK_MODULE_INIT(vtkRenderingVolumeOpenGL2)

#include <QtWidgets/QMainWindow>
#include "ui_DZLDiagnose.h"

class DZLDiagnose : public QMainWindow
{
    Q_OBJECT

public:
    DZLDiagnose(QWidget *parent = Q_NULLPTR);

private:
    Ui::DZLDiagnoseClass ui;

private slots:
    void on_pushButton_clicked();
};
