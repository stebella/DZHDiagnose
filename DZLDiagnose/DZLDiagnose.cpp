#include "DZLDiagnose.h"

#include <vtkPolyData.h>
#include <vtkDICOMImageReader.h>
#include <vtkSmartPointer.h>
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkRenderWindow.h>
#include <vtkRenderer.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkInteractorStyleTrackballCamera.h>
#include <vtkGenericOpenGLRenderWindow.h>
#include <QVTKOpenGLNativeWidget.h>
#include <itkImageFileReader.h>
#include "itkImage.h"
#include "itkImageFileReader.h"
#include "itkImageToVTKImageFilter.h"
#include <itkGDCMImageIO.h>    //此处使用尖括号更好
#include "vtkImageFlip.h"
#include <vtkImageActor.h>


DZLDiagnose::DZLDiagnose(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    
}

void DZLDiagnose::on_pushButton_clicked()
{
    ui.label->setText("ok!");
}