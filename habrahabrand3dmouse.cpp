#include "habrahabrand3dmouse.h"

#include <QDebug>

HabrahabrAnd3DMouse::HabrahabrAnd3DMouse(QWidget *parent)
    : QMainWindow(parent)
    
{
    ui.setupUi(this);

    init3DMouse();
}

bool HabrahabrAnd3DMouse::init3DMouse()
{
  SiOpenData oData; 

  /*init the SpaceWare input library */
  if (SiInitialize() == SPW_DLL_LOAD_ERROR)  
  {
    return false;
  }

  SiOpenWinInit(&oData, (HWND)winId());    /* init Win. platform specific data  */
  SiSetUiMode(m_mouse3DHandle, SI_UI_ALL_CONTROLS); /* Config SoftButton Win Display */

  /* open data, which will check for device type and return the device handle
  to be used by this function */ 
  if ( (m_mouse3DHandle = SiOpen ("HabrahabrAnd3DMouse", SI_ANY_DEVICE, SI_NO_MASK, SI_EVENT, &oData)) == NULL) 
  {
    SiTerminate();  /* called to shut down the SpaceWare input library */
    return false;       /* could not open device */
  }
  else
  {
    return true; /* opened device succesfully */ 
  }  
}


HabrahabrAnd3DMouse::~HabrahabrAnd3DMouse()
{

}

bool HabrahabrAnd3DMouse::nativeEventFilter(const QByteArray &eventType, void *msg, long *)
{
  if(!m_mouse3DHandle)
    return false;

  MSG* winMSG = (MSG*)msg;

  bool handled = SPW_FALSE;
  SiSpwEvent     Event;    /* SpaceWare Event */ 
  SiGetEventData EData;    /* SpaceWare Event Data */

  /* init Window platform specific data for a call to SiGetEvent */
  SiGetEventWinInit(&EData, winMSG->message, winMSG->wParam, winMSG->lParam);

  /* check whether msg was a 3D mouse event and process it */
  if (SiGetEvent (m_mouse3DHandle, SI_AVERAGE_EVENTS, &EData, &Event) == SI_IS_EVENT)
  {
    if (Event.type == SI_MOTION_EVENT)
    {
      qDebug() << "delta by X coordinate = " << Event.u.spwData.mData[SI_TX] << "\n";
      qDebug() << "delta by Y coordinate = " << Event.u.spwData.mData[SI_TY] << "\n";
      qDebug() << "delta by Z coordinate = " << Event.u.spwData.mData[SI_TZ] << "\n";

      qDebug() << "delta by Yaw = " << Event.u.spwData.mData[SI_RX] << "\n";
      qDebug() << "delta by Pitch = " << Event.u.spwData.mData[SI_RY] << "\n";
      qDebug() << "delta by Roll = " << Event.u.spwData.mData[SI_RZ] << "\n";
    }
    else if (Event.type == SI_ZERO_EVENT)
    {
      // ZERO event
    }
    else if (Event.type == SI_BUTTON_EVENT)
    {
      // misc button events
    }

    handled = SPW_TRUE;  /* 3D mouse event handled */ 
  }

  return handled;
}

