#ifndef HABRAHABRAND3DMOUSE_H
#define HABRAHABRAND3DMOUSE_H

#include <QtWidgets/QMainWindow>
#include <QAbstractNativeEventFilter>

#include "ui_habrahabrand3dmouse.h"

#include <windows.h>
#include <tchar.h>

// Mouse 3D stuff
#include <spwmacro.h>  /* Common macros used by SpaceWare functions. */
#include <si.h>        /* Required for any SpaceWare support within an app.*/
#include <siapp.h>     /* Required for siapp.lib symbols */
#include "virtualkeys.hpp"


class HabrahabrAnd3DMouse : public QMainWindow
                          , public QAbstractNativeEventFilter
{
    Q_OBJECT

public:
    HabrahabrAnd3DMouse(QWidget *parent = 0);
    ~HabrahabrAnd3DMouse();

public: // QAbstractNativeEventFilter
    bool nativeEventFilter(const QByteArray &eventType, void *message, long *) Q_DECL_OVERRIDE;

private:
  bool init3DMouse();

private:
    Ui::HabrahabrAnd3DMouseClass ui;
    SiHdl m_mouse3DHandle; // Handle to 3D Mouse Device
};

#endif // HABRAHABRAND3DMOUSE_H
