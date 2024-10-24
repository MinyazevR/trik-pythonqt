#include <PythonQt.h>
#include <QIcon>
#include <QMessageBox>
#include <QObject>
#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qaction.h>
#include <qactiongroup.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qboxlayout.h>
#include <qbrush.h>
#include <qbuttongroup.h>
#include <qbytearray.h>
#include <qcalendar.h>
#include <qcalendarwidget.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdatetimeedit.h>
#include <qdrawutil.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicswidget.h>
#include <qheaderview.h>
#include <qicon.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlineedit.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix4x4.h>
#include <qmenu.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qscreen.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qsurfaceformat.h>
#include <qthread.h>
#include <qtoolbar.h>
#include <qtoolbox.h>
#include <qtoolbutton.h>
#include <qtooltip.h>
#include <qtouchdevice.h>
#include <qtransposeproxymodel.h>
#include <qtreeview.h>
#include <qtreewidget.h>
#include <qundogroup.h>
#include <qundostack.h>
#include <qundoview.h>
#include <qvalidator.h>
#include <qvector.h>
#include <qvector2d.h>
#include <qvector3d.h>
#include <qvector4d.h>
#include <qwhatsthis.h>
#include <qwidget.h>
#include <qwidgetaction.h>
#include <qwindow.h>



class PythonQtShell_QTileRules : public QTileRules
{
public:
    PythonQtShell_QTileRules(Qt::TileRule  horizontalRule, Qt::TileRule  verticalRule):QTileRules(horizontalRule, verticalRule),_wrapper(nullptr) {};
    PythonQtShell_QTileRules(Qt::TileRule  rule = Qt::StretchTile):QTileRules(rule),_wrapper(nullptr) {};

   ~PythonQtShell_QTileRules();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTileRules : public QObject
{ Q_OBJECT
public:
public slots:
QTileRules* new_QTileRules(Qt::TileRule  horizontalRule, Qt::TileRule  verticalRule);
QTileRules* new_QTileRules(Qt::TileRule  rule = Qt::StretchTile);
void delete_QTileRules(QTileRules* obj) { delete obj; }
void py_set_horizontal(QTileRules* theWrappedObject, Qt::TileRule  horizontal){ theWrappedObject->horizontal = horizontal; }
Qt::TileRule  py_get_horizontal(QTileRules* theWrappedObject){ return theWrappedObject->horizontal; }
void py_set_vertical(QTileRules* theWrappedObject, Qt::TileRule  vertical){ theWrappedObject->vertical = vertical; }
Qt::TileRule  py_get_vertical(QTileRules* theWrappedObject){ return theWrappedObject->vertical; }
};





class PythonQtShell_QTimeEdit : public QTimeEdit
{
public:
    PythonQtShell_QTimeEdit(QWidget*  parent = nullptr):QTimeEdit(parent),_wrapper(nullptr) {};
    PythonQtShell_QTimeEdit(const QTime&  time, QWidget*  parent = nullptr):QTimeEdit(time, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTimeEdit() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  event) override;
void childEvent(QChildEvent*  event) override;
void clear() override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
QDateTime  dateTimeFromText(const QString&  text) const override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void fixup(QString&  input) const override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  event) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void stepBy(int  steps) override;
QAbstractSpinBox::StepEnabled  stepEnabled() const override;
void tabletEvent(QTabletEvent*  event) override;
QString  textFromDateTime(const QDateTime&  dt) const override;
void timerEvent(QTimerEvent*  event) override;
QValidator::State  validate(QString&  input, int&  pos) const override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTimeEdit : public QObject
{ Q_OBJECT
public:
public slots:
QTimeEdit* new_QTimeEdit(QWidget*  parent = nullptr);
QTimeEdit* new_QTimeEdit(const QTime&  time, QWidget*  parent = nullptr);
void delete_QTimeEdit(QTimeEdit* obj) { delete obj; }
};





class PythonQtShell_QToolBar : public QToolBar
{
public:
    PythonQtShell_QToolBar(QWidget*  parent = nullptr):QToolBar(parent),_wrapper(nullptr) {};
    PythonQtShell_QToolBar(const QString&  title, QWidget*  parent = nullptr):QToolBar(title, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QToolBar() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  event) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  event) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QToolBar : public QToolBar
{ public:
inline void promoted_actionEvent(QActionEvent*  event) { this->actionEvent(event); }
inline void promoted_changeEvent(QEvent*  event) { this->changeEvent(event); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_initStyleOption(QStyleOptionToolBar*  option) const { this->initStyleOption(option); }
inline void promoted_paintEvent(QPaintEvent*  event) { this->paintEvent(event); }
inline void py_q_actionEvent(QActionEvent*  event) { QToolBar::actionEvent(event); }
inline void py_q_changeEvent(QEvent*  event) { QToolBar::changeEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QToolBar::event(event); }
inline void py_q_paintEvent(QPaintEvent*  event) { QToolBar::paintEvent(event); }
};

class PythonQtWrapper_QToolBar : public QObject
{ Q_OBJECT
public:
public slots:
QToolBar* new_QToolBar(QWidget*  parent = nullptr);
QToolBar* new_QToolBar(const QString&  title, QWidget*  parent = nullptr);
void delete_QToolBar(QToolBar* obj) { delete obj; }
   QAction*  actionAt(QToolBar* theWrappedObject, const QPoint&  p) const;
   QAction*  actionAt(QToolBar* theWrappedObject, int  x, int  y) const;
   void py_q_actionEvent(QToolBar* theWrappedObject, QActionEvent*  event){  (((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->py_q_actionEvent(event));}
   QRect  actionGeometry(QToolBar* theWrappedObject, QAction*  action) const;
   QAction*  addAction(QToolBar* theWrappedObject, const QIcon&  icon, const QString&  text);
   QAction*  addAction(QToolBar* theWrappedObject, const QIcon&  icon, const QString&  text, const QObject*  receiver, const char*  member);
   QAction*  addAction(QToolBar* theWrappedObject, const QString&  text);
   QAction*  addAction(QToolBar* theWrappedObject, const QString&  text, const QObject*  receiver, const char*  member);
   QAction*  addSeparator(QToolBar* theWrappedObject);
   QAction*  addWidget(QToolBar* theWrappedObject, QWidget*  widget);
   Qt::ToolBarAreas  allowedAreas(QToolBar* theWrappedObject) const;
   void py_q_changeEvent(QToolBar* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->py_q_changeEvent(event));}
   void clear(QToolBar* theWrappedObject);
   bool  py_q_event(QToolBar* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->py_q_event(event));}
   QSize  iconSize(QToolBar* theWrappedObject) const;
   void initStyleOption(QToolBar* theWrappedObject, QStyleOptionToolBar*  option) const;
   QAction*  insertSeparator(QToolBar* theWrappedObject, QAction*  before);
   QAction*  insertWidget(QToolBar* theWrappedObject, QAction*  before, QWidget*  widget);
   bool  isAreaAllowed(QToolBar* theWrappedObject, Qt::ToolBarArea  area) const;
   bool  isFloatable(QToolBar* theWrappedObject) const;
   bool  isFloating(QToolBar* theWrappedObject) const;
   bool  isMovable(QToolBar* theWrappedObject) const;
   Qt::Orientation  orientation(QToolBar* theWrappedObject) const;
   void py_q_paintEvent(QToolBar* theWrappedObject, QPaintEvent*  event){  (((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->py_q_paintEvent(event));}
   void setAllowedAreas(QToolBar* theWrappedObject, Qt::ToolBarAreas  areas);
   void setFloatable(QToolBar* theWrappedObject, bool  floatable);
   void setMovable(QToolBar* theWrappedObject, bool  movable);
   void setOrientation(QToolBar* theWrappedObject, Qt::Orientation  orientation);
   QAction*  toggleViewAction(QToolBar* theWrappedObject) const;
   Qt::ToolButtonStyle  toolButtonStyle(QToolBar* theWrappedObject) const;
   QWidget*  widgetForAction(QToolBar* theWrappedObject, QAction*  action) const;

  QAction* addAction (QToolBar* menu, const QString & text, PyObject* callable)
  {
    QAction* a = menu->addAction(text);
    PythonQt::self()->addSignalHandler(a, SIGNAL(triggered(bool)), callable);
    return a;
  }
  
  QAction* addAction (QToolBar* menu, const QIcon& icon, const QString& text, PyObject* callable)
  {
    QAction* a = menu->addAction(text);
    a->setIcon(icon);
    PythonQt::self()->addSignalHandler(a, SIGNAL(triggered(bool)), callable);
    return a;
  }
  
};





class PythonQtWrapper_QToolBarChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QToolBarChangeEvent* new_QToolBarChangeEvent(bool  t);
void delete_QToolBarChangeEvent(QToolBarChangeEvent* obj) { delete obj; }
   bool  toggle(QToolBarChangeEvent* theWrappedObject) const;
};





class PythonQtShell_QToolBox : public QToolBox
{
public:
    PythonQtShell_QToolBox(QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags()):QToolBox(parent, f),_wrapper(nullptr) {};

   ~PythonQtShell_QToolBox() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void itemInserted(int  index) override;
void itemRemoved(int  index) override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  e) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QToolBox : public QToolBox
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { this->changeEvent(arg__1); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_itemInserted(int  index) { this->itemInserted(index); }
inline void promoted_itemRemoved(int  index) { this->itemRemoved(index); }
inline void promoted_showEvent(QShowEvent*  e) { this->showEvent(e); }
inline void py_q_changeEvent(QEvent*  arg__1) { QToolBox::changeEvent(arg__1); }
inline bool  py_q_event(QEvent*  e) { return QToolBox::event(e); }
inline void py_q_itemInserted(int  index) { QToolBox::itemInserted(index); }
inline void py_q_itemRemoved(int  index) { QToolBox::itemRemoved(index); }
inline void py_q_showEvent(QShowEvent*  e) { QToolBox::showEvent(e); }
};

class PythonQtWrapper_QToolBox : public QObject
{ Q_OBJECT
public:
public slots:
QToolBox* new_QToolBox(QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags());
void delete_QToolBox(QToolBox* obj) { delete obj; }
   int  addItem(QToolBox* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget, const QIcon&  icon, const QString&  text);
   int  addItem(QToolBox* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget, const QString&  text);
   void py_q_changeEvent(QToolBox* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QToolBox*)theWrappedObject)->py_q_changeEvent(arg__1));}
   int  count(QToolBox* theWrappedObject) const;
   int  currentIndex(QToolBox* theWrappedObject) const;
   QWidget*  currentWidget(QToolBox* theWrappedObject) const;
   bool  py_q_event(QToolBox* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QToolBox*)theWrappedObject)->py_q_event(e));}
   int  indexOf(QToolBox* theWrappedObject, QWidget*  widget) const;
   int  insertItem(QToolBox* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  widget, const QIcon&  icon, const QString&  text);
   int  insertItem(QToolBox* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  widget, const QString&  text);
   bool  isItemEnabled(QToolBox* theWrappedObject, int  index) const;
   QIcon  itemIcon(QToolBox* theWrappedObject, int  index) const;
   void itemInserted(QToolBox* theWrappedObject, int  index);
   void py_q_itemInserted(QToolBox* theWrappedObject, int  index){  (((PythonQtPublicPromoter_QToolBox*)theWrappedObject)->py_q_itemInserted(index));}
   void itemRemoved(QToolBox* theWrappedObject, int  index);
   void py_q_itemRemoved(QToolBox* theWrappedObject, int  index){  (((PythonQtPublicPromoter_QToolBox*)theWrappedObject)->py_q_itemRemoved(index));}
   QString  itemText(QToolBox* theWrappedObject, int  index) const;
   QString  itemToolTip(QToolBox* theWrappedObject, int  index) const;
   void removeItem(QToolBox* theWrappedObject, int  index);
   void setItemEnabled(QToolBox* theWrappedObject, int  index, bool  enabled);
   void setItemIcon(QToolBox* theWrappedObject, int  index, const QIcon&  icon);
   void setItemText(QToolBox* theWrappedObject, int  index, const QString&  text);
   void setItemToolTip(QToolBox* theWrappedObject, int  index, const QString&  toolTip);
   void py_q_showEvent(QToolBox* theWrappedObject, QShowEvent*  e){  (((PythonQtPublicPromoter_QToolBox*)theWrappedObject)->py_q_showEvent(e));}
   QWidget*  widget(QToolBox* theWrappedObject, int  index) const;
};





class PythonQtShell_QToolButton : public QToolButton
{
public:
    PythonQtShell_QToolButton(QWidget*  parent = nullptr):QToolButton(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QToolButton() override;

void actionEvent(QActionEvent*  arg__1) override;
void changeEvent(QEvent*  arg__1) override;
void checkStateSet() override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEvent*  arg__1) override;
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  e) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  e) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
bool  hitButton(const QPoint&  pos) const override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  e) override;
void keyReleaseEvent(QKeyEvent*  e) override;
void leaveEvent(QEvent*  arg__1) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  e) override;
void mousePressEvent(QMouseEvent*  arg__1) override;
void mouseReleaseEvent(QMouseEvent*  arg__1) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
void nextCheckState() override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  arg__1) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  arg__1) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QToolButton : public QToolButton
{ public:
inline void promoted_actionEvent(QActionEvent*  arg__1) { this->actionEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { this->changeEvent(arg__1); }
inline void promoted_enterEvent(QEvent*  arg__1) { this->enterEvent(arg__1); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline bool  promoted_hitButton(const QPoint&  pos) const { return this->hitButton(pos); }
inline void promoted_initStyleOption(QStyleOptionToolButton*  option) const { this->initStyleOption(option); }
inline void promoted_leaveEvent(QEvent*  arg__1) { this->leaveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { this->mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { this->mouseReleaseEvent(arg__1); }
inline void promoted_nextCheckState() { this->nextCheckState(); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  arg__1) { this->timerEvent(arg__1); }
inline void py_q_actionEvent(QActionEvent*  arg__1) { QToolButton::actionEvent(arg__1); }
inline void py_q_changeEvent(QEvent*  arg__1) { QToolButton::changeEvent(arg__1); }
inline void py_q_enterEvent(QEvent*  arg__1) { QToolButton::enterEvent(arg__1); }
inline bool  py_q_event(QEvent*  e) { return QToolButton::event(e); }
inline bool  py_q_hitButton(const QPoint&  pos) const { return QToolButton::hitButton(pos); }
inline void py_q_leaveEvent(QEvent*  arg__1) { QToolButton::leaveEvent(arg__1); }
inline QSize  py_q_minimumSizeHint() const { return QToolButton::minimumSizeHint(); }
inline void py_q_mousePressEvent(QMouseEvent*  arg__1) { QToolButton::mousePressEvent(arg__1); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  arg__1) { QToolButton::mouseReleaseEvent(arg__1); }
inline void py_q_nextCheckState() { QToolButton::nextCheckState(); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QToolButton::paintEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QToolButton::sizeHint(); }
inline void py_q_timerEvent(QTimerEvent*  arg__1) { QToolButton::timerEvent(arg__1); }
};

class PythonQtWrapper_QToolButton : public QObject
{ Q_OBJECT
public:
public slots:
QToolButton* new_QToolButton(QWidget*  parent = nullptr);
void delete_QToolButton(QToolButton* obj) { delete obj; }
   void py_q_actionEvent(QToolButton* theWrappedObject, QActionEvent*  arg__1){  (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_actionEvent(arg__1));}
   Qt::ArrowType  arrowType(QToolButton* theWrappedObject) const;
   bool  autoRaise(QToolButton* theWrappedObject) const;
   void py_q_changeEvent(QToolButton* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_changeEvent(arg__1));}
   QAction*  defaultAction(QToolButton* theWrappedObject) const;
   void py_q_enterEvent(QToolButton* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_enterEvent(arg__1));}
   bool  py_q_event(QToolButton* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_event(e));}
   bool  py_q_hitButton(QToolButton* theWrappedObject, const QPoint&  pos) const{  return (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_hitButton(pos));}
   void initStyleOption(QToolButton* theWrappedObject, QStyleOptionToolButton*  option) const;
   void py_q_leaveEvent(QToolButton* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_leaveEvent(arg__1));}
   QMenu*  menu(QToolButton* theWrappedObject) const;
   QSize  minimumSizeHint(QToolButton* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QToolButton* theWrappedObject) const{  return (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_mousePressEvent(QToolButton* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_mousePressEvent(arg__1));}
   void py_q_mouseReleaseEvent(QToolButton* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_mouseReleaseEvent(arg__1));}
   void py_q_nextCheckState(QToolButton* theWrappedObject){  (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_nextCheckState());}
   void py_q_paintEvent(QToolButton* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_paintEvent(arg__1));}
   QToolButton::ToolButtonPopupMode  popupMode(QToolButton* theWrappedObject) const;
   void setArrowType(QToolButton* theWrappedObject, Qt::ArrowType  type);
   void setAutoRaise(QToolButton* theWrappedObject, bool  enable);
   void setMenu(QToolButton* theWrappedObject, QMenu*  menu);
   void setPopupMode(QToolButton* theWrappedObject, QToolButton::ToolButtonPopupMode  mode);
   QSize  sizeHint(QToolButton* theWrappedObject) const;
   QSize  py_q_sizeHint(QToolButton* theWrappedObject) const{  return (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_sizeHint());}
   void py_q_timerEvent(QToolButton* theWrappedObject, QTimerEvent*  arg__1){  (((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->py_q_timerEvent(arg__1));}
   Qt::ToolButtonStyle  toolButtonStyle(QToolButton* theWrappedObject) const;
};





class PythonQtWrapper_QToolTip : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QToolTip(QToolTip* obj) { delete obj; }
   QFont  static_QToolTip_font();
   void static_QToolTip_hideText();
   bool  static_QToolTip_isVisible();
   QPalette  static_QToolTip_palette();
   void static_QToolTip_setFont(const QFont&  arg__1);
   void static_QToolTip_setPalette(const QPalette&  arg__1);
   void static_QToolTip_showText(const QPoint&  pos, const QString&  text, QWidget*  w = nullptr);
   void static_QToolTip_showText(const QPoint&  pos, const QString&  text, QWidget*  w, const QRect&  rect);
   void static_QToolTip_showText(const QPoint&  pos, const QString&  text, QWidget*  w, const QRect&  rect, int  msecShowTime);
   QString  static_QToolTip_text();
};





class PythonQtWrapper_QTouchDevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CapabilityFlag DeviceType )
Q_FLAGS(Capabilities )
enum CapabilityFlag{
  Position = QTouchDevice::Position,   Area = QTouchDevice::Area,   Pressure = QTouchDevice::Pressure,   Velocity = QTouchDevice::Velocity,   RawPositions = QTouchDevice::RawPositions,   NormalizedPosition = QTouchDevice::NormalizedPosition,   MouseEmulation = QTouchDevice::MouseEmulation};
enum DeviceType{
  TouchScreen = QTouchDevice::TouchScreen,   TouchPad = QTouchDevice::TouchPad};
Q_DECLARE_FLAGS(Capabilities, CapabilityFlag)
public slots:
QTouchDevice* new_QTouchDevice();
void delete_QTouchDevice(QTouchDevice* obj) { delete obj; }
   QTouchDevice::Capabilities  capabilities(QTouchDevice* theWrappedObject) const;
   QList<const QTouchDevice* >  static_QTouchDevice_devices();
   int  maximumTouchPoints(QTouchDevice* theWrappedObject) const;
   QString  name(QTouchDevice* theWrappedObject) const;
   void setCapabilities(QTouchDevice* theWrappedObject, QTouchDevice::Capabilities  caps);
   void setMaximumTouchPoints(QTouchDevice* theWrappedObject, int  max);
   void setName(QTouchDevice* theWrappedObject, const QString&  name);
   void setType(QTouchDevice* theWrappedObject, QTouchDevice::DeviceType  devType);
   QTouchDevice::DeviceType  type(QTouchDevice* theWrappedObject) const;
    QString py_toString(QTouchDevice*);
};





class PythonQtShell_QTouchEvent : public QTouchEvent
{
public:
    PythonQtShell_QTouchEvent(QEvent::Type  eventType, QTouchDevice*  device = nullptr, Qt::KeyboardModifiers  modifiers = Qt::NoModifier, Qt::TouchPointStates  touchPointStates = Qt::TouchPointStates(), const QList<QTouchEvent::TouchPoint >&  touchPoints = QList<QTouchEvent::TouchPoint>()):QTouchEvent(eventType, device, modifiers, touchPointStates, touchPoints),_wrapper(nullptr) {};

   ~PythonQtShell_QTouchEvent() override;


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QTouchEvent : public QObject
{ Q_OBJECT
public:
public slots:
QTouchEvent* new_QTouchEvent(QEvent::Type  eventType, QTouchDevice*  device = nullptr, Qt::KeyboardModifiers  modifiers = Qt::NoModifier, Qt::TouchPointStates  touchPointStates = Qt::TouchPointStates(), const QList<QTouchEvent::TouchPoint >&  touchPoints = QList<QTouchEvent::TouchPoint>());
void delete_QTouchEvent(QTouchEvent* obj) { delete obj; }
   QTouchDevice*  device(QTouchEvent* theWrappedObject) const;
   void setDevice(QTouchEvent* theWrappedObject, QTouchDevice*  adevice);
   void setTarget(QTouchEvent* theWrappedObject, QObject*  atarget);
   void setTouchPointStates(QTouchEvent* theWrappedObject, Qt::TouchPointStates  aTouchPointStates);
   void setTouchPoints(QTouchEvent* theWrappedObject, const QList<QTouchEvent::TouchPoint >&  atouchPoints);
   void setWindow(QTouchEvent* theWrappedObject, QWindow*  awindow);
   QObject*  target(QTouchEvent* theWrappedObject) const;
   Qt::TouchPointStates  touchPointStates(QTouchEvent* theWrappedObject) const;
   const QList<QTouchEvent::TouchPoint >*  touchPoints(QTouchEvent* theWrappedObject) const;
   QWindow*  window(QTouchEvent* theWrappedObject) const;
};





class PythonQtWrapper_QTouchEvent__TouchPoint : public QObject
{ Q_OBJECT
public:
Q_ENUMS(InfoFlag )
Q_FLAGS(InfoFlags )
enum InfoFlag{
  Pen = QTouchEvent::TouchPoint::Pen,   Token = QTouchEvent::TouchPoint::Token};
Q_DECLARE_FLAGS(InfoFlags, InfoFlag)
public slots:
QTouchEvent::TouchPoint* new_QTouchEvent__TouchPoint(const QTouchEvent::TouchPoint&  other);
QTouchEvent::TouchPoint* new_QTouchEvent__TouchPoint(int  id = -1);
void delete_QTouchEvent__TouchPoint(QTouchEvent::TouchPoint* obj) { delete obj; }
   QSizeF  ellipseDiameters(QTouchEvent::TouchPoint* theWrappedObject) const;
   QTouchEvent::TouchPoint::InfoFlags  flags(QTouchEvent::TouchPoint* theWrappedObject) const;
   int  id(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  lastNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  lastPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  lastScenePos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  lastScreenPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  normalizedPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QTouchEvent::TouchPoint*  operator_assign(QTouchEvent::TouchPoint* theWrappedObject, const QTouchEvent::TouchPoint&  other);
   QPointF  pos(QTouchEvent::TouchPoint* theWrappedObject) const;
   qreal  pressure(QTouchEvent::TouchPoint* theWrappedObject) const;
   QVector<QPointF >  rawScreenPositions(QTouchEvent::TouchPoint* theWrappedObject) const;
   QRectF  rect(QTouchEvent::TouchPoint* theWrappedObject) const;
   qreal  rotation(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  scenePos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QRectF  sceneRect(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  screenPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QRectF  screenRect(QTouchEvent::TouchPoint* theWrappedObject) const;
   void setEllipseDiameters(QTouchEvent::TouchPoint* theWrappedObject, const QSizeF&  dia);
   void setFlags(QTouchEvent::TouchPoint* theWrappedObject, QTouchEvent::TouchPoint::InfoFlags  flags);
   void setId(QTouchEvent::TouchPoint* theWrappedObject, int  id);
   void setLastNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastNormalizedPos);
   void setLastPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastPos);
   void setLastScenePos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastScenePos);
   void setLastScreenPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  lastScreenPos);
   void setNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  normalizedPos);
   void setPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  pos);
   void setPressure(QTouchEvent::TouchPoint* theWrappedObject, qreal  pressure);
   void setRawScreenPositions(QTouchEvent::TouchPoint* theWrappedObject, const QVector<QPointF >&  positions);
   void setRect(QTouchEvent::TouchPoint* theWrappedObject, const QRectF&  rect);
   void setRotation(QTouchEvent::TouchPoint* theWrappedObject, qreal  angle);
   void setScenePos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  scenePos);
   void setSceneRect(QTouchEvent::TouchPoint* theWrappedObject, const QRectF&  sceneRect);
   void setScreenPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  screenPos);
   void setScreenRect(QTouchEvent::TouchPoint* theWrappedObject, const QRectF&  screenRect);
   void setStartNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startNormalizedPos);
   void setStartPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startPos);
   void setStartScenePos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startScenePos);
   void setStartScreenPos(QTouchEvent::TouchPoint* theWrappedObject, const QPointF&  startScreenPos);
   void setState(QTouchEvent::TouchPoint* theWrappedObject, Qt::TouchPointStates  state);
   void setUniqueId(QTouchEvent::TouchPoint* theWrappedObject, qint64  uid);
   void setVelocity(QTouchEvent::TouchPoint* theWrappedObject, const QVector2D&  v);
   QPointF  startNormalizedPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  startPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  startScenePos(QTouchEvent::TouchPoint* theWrappedObject) const;
   QPointF  startScreenPos(QTouchEvent::TouchPoint* theWrappedObject) const;
   Qt::TouchPointState  state(QTouchEvent::TouchPoint* theWrappedObject) const;
   void swap(QTouchEvent::TouchPoint* theWrappedObject, QTouchEvent::TouchPoint&  other);
   QVector2D  velocity(QTouchEvent::TouchPoint* theWrappedObject) const;
    QString py_toString(QTouchEvent::TouchPoint*);
};





class PythonQtShell_QTransposeProxyModel : public QTransposeProxyModel
{
public:
    PythonQtShell_QTransposeProxyModel(QObject*  parent = nullptr):QTransposeProxyModel(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTransposeProxyModel() override;

QModelIndex  buddy(const QModelIndex&  index) const override;
bool  canDropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const override;
bool  canFetchMore(const QModelIndex&  parent) const override;
void childEvent(QChildEvent*  event) override;
int  columnCount(const QModelIndex&  parent = QModelIndex()) const override;
void customEvent(QEvent*  event) override;
QVariant  data(const QModelIndex&  proxyIndex, int  role = Qt::DisplayRole) const override;
bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void fetchMore(const QModelIndex&  parent) override;
Qt::ItemFlags  flags(const QModelIndex&  index) const override;
bool  hasChildren(const QModelIndex&  parent = QModelIndex()) const override;
QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const override;
QModelIndex  index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const override;
bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) override;
bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) override;
QMap<int , QVariant >  itemData(const QModelIndex&  index) const override;
QModelIndex  mapFromSource(const QModelIndex&  sourceIndex) const override;
QItemSelection  mapSelectionFromSource(const QItemSelection&  selection) const override;
QItemSelection  mapSelectionToSource(const QItemSelection&  selection) const override;
QModelIndex  mapToSource(const QModelIndex&  proxyIndex) const override;
QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const override;
QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const override;
QStringList  mimeTypes() const override;
bool  moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild) override;
bool  moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild) override;
QModelIndex  parent(const QModelIndex&  index) const override;
bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) override;
bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) override;
void revert() override;
QHash<int , QByteArray >  roleNames() const override;
int  rowCount(const QModelIndex&  parent = QModelIndex()) const override;
bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) override;
bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) override;
bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) override;
void setSourceModel(QAbstractItemModel*  newSourceModel) override;
QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const override;
void sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) override;
QSize  span(const QModelIndex&  index) const override;
bool  submit() override;
Qt::DropActions  supportedDragActions() const override;
Qt::DropActions  supportedDropActions() const override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTransposeProxyModel : public QTransposeProxyModel
{ public:
inline int  py_q_columnCount(const QModelIndex&  parent = QModelIndex()) const { return QTransposeProxyModel::columnCount(parent); }
inline QVariant  py_q_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QTransposeProxyModel::headerData(section, orientation, role); }
inline QModelIndex  py_q_index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const { return QTransposeProxyModel::index(row, column, parent); }
inline bool  py_q_insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QTransposeProxyModel::insertColumns(column, count, parent); }
inline bool  py_q_insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QTransposeProxyModel::insertRows(row, count, parent); }
inline QMap<int , QVariant >  py_q_itemData(const QModelIndex&  index) const { return QTransposeProxyModel::itemData(index); }
inline QModelIndex  py_q_mapFromSource(const QModelIndex&  sourceIndex) const { return QTransposeProxyModel::mapFromSource(sourceIndex); }
inline QModelIndex  py_q_mapToSource(const QModelIndex&  proxyIndex) const { return QTransposeProxyModel::mapToSource(proxyIndex); }
inline bool  py_q_moveColumns(const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild) { return QTransposeProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild); }
inline bool  py_q_moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild) { return QTransposeProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild); }
inline QModelIndex  py_q_parent(const QModelIndex&  index) const { return QTransposeProxyModel::parent(index); }
inline bool  py_q_removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QTransposeProxyModel::removeColumns(column, count, parent); }
inline bool  py_q_removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QTransposeProxyModel::removeRows(row, count, parent); }
inline int  py_q_rowCount(const QModelIndex&  parent = QModelIndex()) const { return QTransposeProxyModel::rowCount(parent); }
inline bool  py_q_setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) { return QTransposeProxyModel::setHeaderData(section, orientation, value, role); }
inline bool  py_q_setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) { return QTransposeProxyModel::setItemData(index, roles); }
inline void py_q_setSourceModel(QAbstractItemModel*  newSourceModel) { QTransposeProxyModel::setSourceModel(newSourceModel); }
inline void py_q_sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) { QTransposeProxyModel::sort(column, order); }
inline QSize  py_q_span(const QModelIndex&  index) const { return QTransposeProxyModel::span(index); }
};

class PythonQtWrapper_QTransposeProxyModel : public QObject
{ Q_OBJECT
public:
public slots:
QTransposeProxyModel* new_QTransposeProxyModel(QObject*  parent = nullptr);
void delete_QTransposeProxyModel(QTransposeProxyModel* obj) { delete obj; }
   int  py_q_columnCount(QTransposeProxyModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_columnCount(parent));}
   QVariant  py_q_headerData(QTransposeProxyModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_headerData(section, orientation, role));}
   QModelIndex  py_q_index(QTransposeProxyModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_index(row, column, parent));}
   bool  py_q_insertColumns(QTransposeProxyModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_insertColumns(column, count, parent));}
   bool  py_q_insertRows(QTransposeProxyModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_insertRows(row, count, parent));}
   QMap<int , QVariant >  py_q_itemData(QTransposeProxyModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_itemData(index));}
   QModelIndex  py_q_mapFromSource(QTransposeProxyModel* theWrappedObject, const QModelIndex&  sourceIndex) const{  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_mapFromSource(sourceIndex));}
   QModelIndex  py_q_mapToSource(QTransposeProxyModel* theWrappedObject, const QModelIndex&  proxyIndex) const{  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_mapToSource(proxyIndex));}
   bool  py_q_moveColumns(QTransposeProxyModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild){  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild));}
   bool  py_q_moveRows(QTransposeProxyModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild){  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild));}
   QModelIndex  py_q_parent(QTransposeProxyModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_parent(index));}
   bool  py_q_removeColumns(QTransposeProxyModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_removeColumns(column, count, parent));}
   bool  py_q_removeRows(QTransposeProxyModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_removeRows(row, count, parent));}
   int  py_q_rowCount(QTransposeProxyModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_rowCount(parent));}
   bool  py_q_setHeaderData(QTransposeProxyModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_setHeaderData(section, orientation, value, role));}
   bool  py_q_setItemData(QTransposeProxyModel* theWrappedObject, const QModelIndex&  index, const QMap<int , QVariant >&  roles){  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_setItemData(index, roles));}
   void py_q_setSourceModel(QTransposeProxyModel* theWrappedObject, QAbstractItemModel*  newSourceModel){  (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_setSourceModel(newSourceModel));}
   void py_q_sort(QTransposeProxyModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder){  (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_sort(column, order));}
   QSize  py_q_span(QTransposeProxyModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QTransposeProxyModel*)theWrappedObject)->py_q_span(index));}
};





class PythonQtShell_QTreeView : public QTreeView
{
public:
    PythonQtShell_QTreeView(QWidget*  parent = nullptr):QTreeView(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTreeView() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint) override;
void closeEvent(QCloseEvent*  event) override;
void commitData(QWidget*  editor) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
void currentChanged(const QModelIndex&  current, const QModelIndex&  previous) override;
void customEvent(QEvent*  event) override;
void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>()) override;
int  devType() const override;
void doItemsLayout() override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void drawBranches(QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const override;
void drawRow(QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const override;
void dropEvent(QDropEvent*  event) override;
bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event) override;
void editorDestroyed(QObject*  editor) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  object, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
int  horizontalOffset() const override;
void horizontalScrollbarAction(int  action) override;
void horizontalScrollbarValueChanged(int  value) override;
QModelIndex  indexAt(const QPoint&  p) const override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  event) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const override;
bool  isIndexHidden(const QModelIndex&  index) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void keyboardSearch(const QString&  search) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
QModelIndex  moveCursor(QAbstractItemView::CursorAction  cursorAction, Qt::KeyboardModifiers  modifiers) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  event) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void reset() override;
void resizeEvent(QResizeEvent*  event) override;
void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) override;
void rowsInserted(const QModelIndex&  parent, int  start, int  end) override;
void scrollContentsBy(int  dx, int  dy) override;
void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) override;
void selectAll() override;
QList<QModelIndex >  selectedIndexes() const override;
void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) override;
QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event = nullptr) const override;
void setModel(QAbstractItemModel*  model) override;
void setRootIndex(const QModelIndex&  index) override;
void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) override;
void setSelectionModel(QItemSelectionModel*  selectionModel) override;
void setVisible(bool  visible) override;
void setupViewport(QWidget*  viewport) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
int  sizeHintForColumn(int  column) const override;
int  sizeHintForRow(int  row) const override;
void startDrag(Qt::DropActions  supportedActions) override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void updateEditorData() override;
void updateEditorGeometries() override;
void updateGeometries() override;
int  verticalOffset() const override;
void verticalScrollbarAction(int  action) override;
void verticalScrollbarValueChanged(int  value) override;
QStyleOptionViewItem  viewOptions() const override;
bool  viewportEvent(QEvent*  event) override;
QSize  viewportSizeHint() const override;
QRect  visualRect(const QModelIndex&  index) const override;
QRegion  visualRegionForSelection(const QItemSelection&  selection) const override;
void wheelEvent(QWheelEvent*  arg__1) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTreeView : public QTreeView
{ public:
inline void promoted_columnCountChanged(int  oldCount, int  newCount) { this->columnCountChanged(oldCount, newCount); }
inline void promoted_columnMoved() { this->columnMoved(); }
inline void promoted_columnResized(int  column, int  oldSize, int  newSize) { this->columnResized(column, oldSize, newSize); }
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { this->currentChanged(current, previous); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  event) { this->dragMoveEvent(event); }
inline void promoted_drawBranches(QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const { this->drawBranches(painter, rect, index); }
inline void promoted_drawRow(QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const { this->drawRow(painter, options, index); }
inline void promoted_drawTree(QPainter*  painter, const QRegion&  region) const { this->drawTree(painter, region); }
inline int  promoted_horizontalOffset() const { return this->horizontalOffset(); }
inline void promoted_horizontalScrollbarAction(int  action) { this->horizontalScrollbarAction(action); }
inline int  promoted_indexRowSizeHint(const QModelIndex&  index) const { return this->indexRowSizeHint(index); }
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return this->isIndexHidden(index); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { this->keyPressEvent(event); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  event) { this->mouseDoubleClickEvent(event); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { this->mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { this->mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { this->mouseReleaseEvent(event); }
inline QModelIndex  promoted_moveCursor(int  cursorAction, Qt::KeyboardModifiers  modifiers) { return this->moveCursor((QAbstractItemView::CursorAction)cursorAction, modifiers); }
inline void promoted_paintEvent(QPaintEvent*  event) { this->paintEvent(event); }
inline void promoted_reexpand() { this->reexpand(); }
inline int  promoted_rowHeight(const QModelIndex&  index) const { return this->rowHeight(index); }
inline void promoted_rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) { this->rowsAboutToBeRemoved(parent, start, end); }
inline void promoted_rowsInserted(const QModelIndex&  parent, int  start, int  end) { this->rowsInserted(parent, start, end); }
inline void promoted_rowsRemoved(const QModelIndex&  parent, int  first, int  last) { this->rowsRemoved(parent, first, last); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { this->scrollContentsBy(dx, dy); }
inline QList<QModelIndex >  promoted_selectedIndexes() const { return this->selectedIndexes(); }
inline void promoted_selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { this->selectionChanged(selected, deselected); }
inline void promoted_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { this->setSelection(rect, command); }
inline int  promoted_sizeHintForColumn(int  column) const { return this->sizeHintForColumn(column); }
inline void promoted_timerEvent(QTimerEvent*  event) { this->timerEvent(event); }
inline void promoted_updateGeometries() { this->updateGeometries(); }
inline int  promoted_verticalOffset() const { return this->verticalOffset(); }
inline void promoted_verticalScrollbarValueChanged(int  value) { this->verticalScrollbarValueChanged(value); }
inline bool  promoted_viewportEvent(QEvent*  event) { return this->viewportEvent(event); }
inline QSize  promoted_viewportSizeHint() const { return this->viewportSizeHint(); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return this->visualRegionForSelection(selection); }
inline void py_q_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { QTreeView::currentChanged(current, previous); }
inline void py_q_dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>()) { QTreeView::dataChanged(topLeft, bottomRight, roles); }
inline void py_q_doItemsLayout() { QTreeView::doItemsLayout(); }
inline void py_q_dragMoveEvent(QDragMoveEvent*  event) { QTreeView::dragMoveEvent(event); }
inline void py_q_drawBranches(QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const { QTreeView::drawBranches(painter, rect, index); }
inline void py_q_drawRow(QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const { QTreeView::drawRow(painter, options, index); }
inline int  py_q_horizontalOffset() const { return QTreeView::horizontalOffset(); }
inline void py_q_horizontalScrollbarAction(int  action) { QTreeView::horizontalScrollbarAction(action); }
inline QModelIndex  py_q_indexAt(const QPoint&  p) const { return QTreeView::indexAt(p); }
inline bool  py_q_isIndexHidden(const QModelIndex&  index) const { return QTreeView::isIndexHidden(index); }
inline void py_q_keyPressEvent(QKeyEvent*  event) { QTreeView::keyPressEvent(event); }
inline void py_q_keyboardSearch(const QString&  search) { QTreeView::keyboardSearch(search); }
inline void py_q_mouseDoubleClickEvent(QMouseEvent*  event) { QTreeView::mouseDoubleClickEvent(event); }
inline void py_q_mouseMoveEvent(QMouseEvent*  event) { QTreeView::mouseMoveEvent(event); }
inline void py_q_mousePressEvent(QMouseEvent*  event) { QTreeView::mousePressEvent(event); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  event) { QTreeView::mouseReleaseEvent(event); }
inline QModelIndex  py_q_moveCursor(int  cursorAction, Qt::KeyboardModifiers  modifiers) { return QTreeView::moveCursor((QAbstractItemView::CursorAction)cursorAction, modifiers); }
inline void py_q_paintEvent(QPaintEvent*  event) { QTreeView::paintEvent(event); }
inline void py_q_reset() { QTreeView::reset(); }
inline void py_q_rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) { QTreeView::rowsAboutToBeRemoved(parent, start, end); }
inline void py_q_rowsInserted(const QModelIndex&  parent, int  start, int  end) { QTreeView::rowsInserted(parent, start, end); }
inline void py_q_scrollContentsBy(int  dx, int  dy) { QTreeView::scrollContentsBy(dx, dy); }
inline void py_q_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) { QTreeView::scrollTo(index, hint); }
inline void py_q_selectAll() { QTreeView::selectAll(); }
inline QList<QModelIndex >  py_q_selectedIndexes() const { return QTreeView::selectedIndexes(); }
inline void py_q_selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { QTreeView::selectionChanged(selected, deselected); }
inline void py_q_setModel(QAbstractItemModel*  model) { QTreeView::setModel(model); }
inline void py_q_setRootIndex(const QModelIndex&  index) { QTreeView::setRootIndex(index); }
inline void py_q_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { QTreeView::setSelection(rect, command); }
inline void py_q_setSelectionModel(QItemSelectionModel*  selectionModel) { QTreeView::setSelectionModel(selectionModel); }
inline int  py_q_sizeHintForColumn(int  column) const { return QTreeView::sizeHintForColumn(column); }
inline void py_q_timerEvent(QTimerEvent*  event) { QTreeView::timerEvent(event); }
inline void py_q_updateGeometries() { QTreeView::updateGeometries(); }
inline int  py_q_verticalOffset() const { return QTreeView::verticalOffset(); }
inline void py_q_verticalScrollbarValueChanged(int  value) { QTreeView::verticalScrollbarValueChanged(value); }
inline bool  py_q_viewportEvent(QEvent*  event) { return QTreeView::viewportEvent(event); }
inline QSize  py_q_viewportSizeHint() const { return QTreeView::viewportSizeHint(); }
inline QRect  py_q_visualRect(const QModelIndex&  index) const { return QTreeView::visualRect(index); }
inline QRegion  py_q_visualRegionForSelection(const QItemSelection&  selection) const { return QTreeView::visualRegionForSelection(selection); }
};

class PythonQtWrapper_QTreeView : public QObject
{ Q_OBJECT
public:
public slots:
QTreeView* new_QTreeView(QWidget*  parent = nullptr);
void delete_QTreeView(QTreeView* obj) { delete obj; }
   bool  allColumnsShowFocus(QTreeView* theWrappedObject) const;
   int  autoExpandDelay(QTreeView* theWrappedObject) const;
   int  columnAt(QTreeView* theWrappedObject, int  x) const;
   int  columnViewportPosition(QTreeView* theWrappedObject, int  column) const;
   int  columnWidth(QTreeView* theWrappedObject, int  column) const;
   void py_q_currentChanged(QTreeView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  previous){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_currentChanged(current, previous));}
   void py_q_dataChanged(QTreeView* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>()){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_dataChanged(topLeft, bottomRight, roles));}
   void py_q_doItemsLayout(QTreeView* theWrappedObject){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_doItemsLayout());}
   void py_q_dragMoveEvent(QTreeView* theWrappedObject, QDragMoveEvent*  event){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_dragMoveEvent(event));}
   void drawBranches(QTreeView* theWrappedObject, QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const;
   void py_q_drawBranches(QTreeView* theWrappedObject, QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_drawBranches(painter, rect, index));}
   void drawRow(QTreeView* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const;
   void py_q_drawRow(QTreeView* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const{  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_drawRow(painter, options, index));}
   void drawTree(QTreeView* theWrappedObject, QPainter*  painter, const QRegion&  region) const;
   bool  expandsOnDoubleClick(QTreeView* theWrappedObject) const;
   QHeaderView*  header(QTreeView* theWrappedObject) const;
   int  py_q_horizontalOffset(QTreeView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_horizontalOffset());}
   void py_q_horizontalScrollbarAction(QTreeView* theWrappedObject, int  action){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_horizontalScrollbarAction(action));}
   int  indentation(QTreeView* theWrappedObject) const;
   QModelIndex  indexAbove(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   QModelIndex  py_q_indexAt(QTreeView* theWrappedObject, const QPoint&  p) const{  return (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_indexAt(p));}
   QModelIndex  indexBelow(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   int  indexRowSizeHint(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   bool  isAnimated(QTreeView* theWrappedObject) const;
   bool  isColumnHidden(QTreeView* theWrappedObject, int  column) const;
   bool  isExpanded(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   bool  isFirstColumnSpanned(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent) const;
   bool  isHeaderHidden(QTreeView* theWrappedObject) const;
   bool  py_q_isIndexHidden(QTreeView* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_isIndexHidden(index));}
   bool  isRowHidden(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent) const;
   bool  isSortingEnabled(QTreeView* theWrappedObject) const;
   bool  itemsExpandable(QTreeView* theWrappedObject) const;
   void py_q_keyPressEvent(QTreeView* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_keyPressEvent(event));}
   void py_q_keyboardSearch(QTreeView* theWrappedObject, const QString&  search){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_keyboardSearch(search));}
   void py_q_mouseDoubleClickEvent(QTreeView* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_mouseDoubleClickEvent(event));}
   void py_q_mouseMoveEvent(QTreeView* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_mouseMoveEvent(event));}
   void py_q_mousePressEvent(QTreeView* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_mousePressEvent(event));}
   void py_q_mouseReleaseEvent(QTreeView* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_mouseReleaseEvent(event));}
   QModelIndex  py_q_moveCursor(QTreeView* theWrappedObject, int  cursorAction, Qt::KeyboardModifiers  modifiers){  return (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_moveCursor(cursorAction, modifiers));}
   void py_q_paintEvent(QTreeView* theWrappedObject, QPaintEvent*  event){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_paintEvent(event));}
   void py_q_reset(QTreeView* theWrappedObject){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_reset());}
   void resetIndentation(QTreeView* theWrappedObject);
   bool  rootIsDecorated(QTreeView* theWrappedObject) const;
   int  rowHeight(QTreeView* theWrappedObject, const QModelIndex&  index) const;
   void py_q_rowsAboutToBeRemoved(QTreeView* theWrappedObject, const QModelIndex&  parent, int  start, int  end){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_rowsAboutToBeRemoved(parent, start, end));}
   void py_q_rowsInserted(QTreeView* theWrappedObject, const QModelIndex&  parent, int  start, int  end){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_rowsInserted(parent, start, end));}
   void py_q_scrollContentsBy(QTreeView* theWrappedObject, int  dx, int  dy){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_scrollContentsBy(dx, dy));}
   void py_q_scrollTo(QTreeView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_scrollTo(index, hint));}
   void py_q_selectAll(QTreeView* theWrappedObject){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_selectAll());}
   QList<QModelIndex >  py_q_selectedIndexes(QTreeView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_selectedIndexes());}
   void py_q_selectionChanged(QTreeView* theWrappedObject, const QItemSelection&  selected, const QItemSelection&  deselected){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_selectionChanged(selected, deselected));}
   void setAllColumnsShowFocus(QTreeView* theWrappedObject, bool  enable);
   void setAnimated(QTreeView* theWrappedObject, bool  enable);
   void setAutoExpandDelay(QTreeView* theWrappedObject, int  delay);
   void setColumnHidden(QTreeView* theWrappedObject, int  column, bool  hide);
   void setColumnWidth(QTreeView* theWrappedObject, int  column, int  width);
   void setExpanded(QTreeView* theWrappedObject, const QModelIndex&  index, bool  expand);
   void setExpandsOnDoubleClick(QTreeView* theWrappedObject, bool  enable);
   void setFirstColumnSpanned(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent, bool  span);
   void setHeader(QTreeView* theWrappedObject, QHeaderView*  header);
   void setHeaderHidden(QTreeView* theWrappedObject, bool  hide);
   void setIndentation(QTreeView* theWrappedObject, int  i);
   void setItemsExpandable(QTreeView* theWrappedObject, bool  enable);
   void py_q_setModel(QTreeView* theWrappedObject, QAbstractItemModel*  model){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_setModel(model));}
   void py_q_setRootIndex(QTreeView* theWrappedObject, const QModelIndex&  index){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_setRootIndex(index));}
   void setRootIsDecorated(QTreeView* theWrappedObject, bool  show);
   void setRowHidden(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent, bool  hide);
   void py_q_setSelection(QTreeView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  command){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_setSelection(rect, command));}
   void py_q_setSelectionModel(QTreeView* theWrappedObject, QItemSelectionModel*  selectionModel){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_setSelectionModel(selectionModel));}
   void setSortingEnabled(QTreeView* theWrappedObject, bool  enable);
   void setTreePosition(QTreeView* theWrappedObject, int  logicalIndex);
   void setUniformRowHeights(QTreeView* theWrappedObject, bool  uniform);
   void setWordWrap(QTreeView* theWrappedObject, bool  on);
   int  py_q_sizeHintForColumn(QTreeView* theWrappedObject, int  column) const{  return (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_sizeHintForColumn(column));}
   void py_q_timerEvent(QTreeView* theWrappedObject, QTimerEvent*  event){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_timerEvent(event));}
   int  treePosition(QTreeView* theWrappedObject) const;
   bool  uniformRowHeights(QTreeView* theWrappedObject) const;
   void py_q_updateGeometries(QTreeView* theWrappedObject){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_updateGeometries());}
   int  py_q_verticalOffset(QTreeView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_verticalOffset());}
   void py_q_verticalScrollbarValueChanged(QTreeView* theWrappedObject, int  value){  (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_verticalScrollbarValueChanged(value));}
   bool  py_q_viewportEvent(QTreeView* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_viewportEvent(event));}
   QSize  py_q_viewportSizeHint(QTreeView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_viewportSizeHint());}
   QRect  py_q_visualRect(QTreeView* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_visualRect(index));}
   QRegion  py_q_visualRegionForSelection(QTreeView* theWrappedObject, const QItemSelection&  selection) const{  return (((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->py_q_visualRegionForSelection(selection));}
   bool  wordWrap(QTreeView* theWrappedObject) const;
};





class PythonQtShell_QTreeWidget : public QTreeWidget
{
public:
    PythonQtShell_QTreeWidget(QWidget*  parent = nullptr):QTreeWidget(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QTreeWidget() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint) override;
void closeEvent(QCloseEvent*  event) override;
void commitData(QWidget*  editor) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
void currentChanged(const QModelIndex&  current, const QModelIndex&  previous) override;
void customEvent(QEvent*  event) override;
void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>()) override;
int  devType() const override;
void doItemsLayout() override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void drawBranches(QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const override;
void drawRow(QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const override;
void dropEvent(QDropEvent*  event) override;
bool  dropMimeData(QTreeWidgetItem*  parent, int  index, const QMimeData*  data, Qt::DropAction  action) override;
bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event) override;
void editorDestroyed(QObject*  editor) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  object, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
int  horizontalOffset() const override;
void horizontalScrollbarAction(int  action) override;
void horizontalScrollbarValueChanged(int  value) override;
QModelIndex  indexAt(const QPoint&  p) const override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  event) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const override;
bool  isIndexHidden(const QModelIndex&  index) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void keyboardSearch(const QString&  search) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QMimeData*  mimeData(const QList<QTreeWidgetItem* >  items) const override;
QStringList  mimeTypes() const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
QModelIndex  moveCursor(QAbstractItemView::CursorAction  cursorAction, Qt::KeyboardModifiers  modifiers) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  event) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void reset() override;
void resizeEvent(QResizeEvent*  event) override;
void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) override;
void rowsInserted(const QModelIndex&  parent, int  start, int  end) override;
void scrollContentsBy(int  dx, int  dy) override;
void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) override;
void selectAll() override;
QList<QModelIndex >  selectedIndexes() const override;
void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) override;
QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event = nullptr) const override;
void setRootIndex(const QModelIndex&  index) override;
void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) override;
void setSelectionModel(QItemSelectionModel*  selectionModel) override;
void setVisible(bool  visible) override;
void setupViewport(QWidget*  viewport) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
int  sizeHintForColumn(int  column) const override;
int  sizeHintForRow(int  row) const override;
void startDrag(Qt::DropActions  supportedActions) override;
Qt::DropActions  supportedDropActions() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void updateEditorData() override;
void updateEditorGeometries() override;
void updateGeometries() override;
int  verticalOffset() const override;
void verticalScrollbarAction(int  action) override;
void verticalScrollbarValueChanged(int  value) override;
QStyleOptionViewItem  viewOptions() const override;
bool  viewportEvent(QEvent*  event) override;
QSize  viewportSizeHint() const override;
QRect  visualRect(const QModelIndex&  index) const override;
QRegion  visualRegionForSelection(const QItemSelection&  selection) const override;
void wheelEvent(QWheelEvent*  arg__1) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTreeWidget : public QTreeWidget
{ public:
inline void promoted_dropEvent(QDropEvent*  event) { this->dropEvent(event); }
inline bool  promoted_dropMimeData(QTreeWidgetItem*  parent, int  index, const QMimeData*  data, Qt::DropAction  action) { return this->dropMimeData(parent, index, data, action); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline QModelIndex  promoted_indexFromItem(QTreeWidgetItem*  item, int  column = 0) const { return this->indexFromItem(item, column); }
inline QModelIndex  promoted_indexFromItem(const QTreeWidgetItem*  item, int  column = 0) const { return this->indexFromItem(item, column); }
inline QTreeWidgetItem*  promoted_itemFromIndex(const QModelIndex&  index) const { return this->itemFromIndex(index); }
inline QMimeData*  promoted_mimeData(const QList<QTreeWidgetItem* >  items) const { return this->mimeData(items); }
inline QStringList  promoted_mimeTypes() const { return this->mimeTypes(); }
inline Qt::DropActions  promoted_supportedDropActions() const { return this->supportedDropActions(); }
inline void py_q_dropEvent(QDropEvent*  event) { QTreeWidget::dropEvent(event); }
inline bool  py_q_dropMimeData(QTreeWidgetItem*  parent, int  index, const QMimeData*  data, Qt::DropAction  action) { return QTreeWidget::dropMimeData(parent, index, data, action); }
inline bool  py_q_event(QEvent*  e) { return QTreeWidget::event(e); }
inline QMimeData*  py_q_mimeData(const QList<QTreeWidgetItem* >  items) const { return QTreeWidget::mimeData(items); }
inline QStringList  py_q_mimeTypes() const { return QTreeWidget::mimeTypes(); }
inline void py_q_setSelectionModel(QItemSelectionModel*  selectionModel) { QTreeWidget::setSelectionModel(selectionModel); }
inline Qt::DropActions  py_q_supportedDropActions() const { return QTreeWidget::supportedDropActions(); }
};

class PythonQtWrapper_QTreeWidget : public QObject
{ Q_OBJECT
public:
public slots:
QTreeWidget* new_QTreeWidget(QWidget*  parent = nullptr);
void delete_QTreeWidget(QTreeWidget* obj) { delete obj; }
   void addTopLevelItem(QTreeWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QTreeWidgetItem* >  item);
   void addTopLevelItems(QTreeWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QList<QTreeWidgetItem* > >  items);
   void closePersistentEditor(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column = 0);
   int  columnCount(QTreeWidget* theWrappedObject) const;
   int  currentColumn(QTreeWidget* theWrappedObject) const;
   QTreeWidgetItem*  currentItem(QTreeWidget* theWrappedObject) const;
   void py_q_dropEvent(QTreeWidget* theWrappedObject, QDropEvent*  event){  (((PythonQtPublicPromoter_QTreeWidget*)theWrappedObject)->py_q_dropEvent(event));}
   bool  dropMimeData(QTreeWidget* theWrappedObject, QTreeWidgetItem*  parent, int  index, const QMimeData*  data, Qt::DropAction  action);
   bool  py_q_dropMimeData(QTreeWidget* theWrappedObject, QTreeWidgetItem*  parent, int  index, const QMimeData*  data, Qt::DropAction  action){  return (((PythonQtPublicPromoter_QTreeWidget*)theWrappedObject)->py_q_dropMimeData(parent, index, data, action));}
   void editItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column = 0);
   bool  py_q_event(QTreeWidget* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QTreeWidget*)theWrappedObject)->py_q_event(e));}
   QList<QTreeWidgetItem* >  findItems(QTreeWidget* theWrappedObject, const QString&  text, Qt::MatchFlags  flags, int  column = 0) const;
   QTreeWidgetItem*  headerItem(QTreeWidget* theWrappedObject) const;
   QModelIndex  indexFromItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column = 0) const;
   QModelIndex  indexFromItem(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item, int  column = 0) const;
   int  indexOfTopLevelItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item) const;
   void insertTopLevelItem(QTreeWidget* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QTreeWidgetItem* >  item);
   void insertTopLevelItems(QTreeWidget* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QList<QTreeWidgetItem* > >  items);
   QTreeWidgetItem*  invisibleRootItem(QTreeWidget* theWrappedObject) const;
   bool  isFirstItemColumnSpanned(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item) const;
   bool  isPersistentEditorOpen(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column = 0) const;
   QTreeWidgetItem*  itemAbove(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item) const;
   QTreeWidgetItem*  itemAt(QTreeWidget* theWrappedObject, const QPoint&  p) const;
   QTreeWidgetItem*  itemAt(QTreeWidget* theWrappedObject, int  x, int  y) const;
   QTreeWidgetItem*  itemBelow(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item) const;
   QTreeWidgetItem*  itemFromIndex(QTreeWidget* theWrappedObject, const QModelIndex&  index) const;
   QWidget*  itemWidget(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column) const;
   PythonQtPassOwnershipToPython<QMimeData*  > mimeData(QTreeWidget* theWrappedObject, const QList<QTreeWidgetItem* >  items) const;
   PythonQtPassOwnershipToPython<QMimeData*  > py_q_mimeData(QTreeWidget* theWrappedObject, const QList<QTreeWidgetItem* >  items) const{  return (((PythonQtPublicPromoter_QTreeWidget*)theWrappedObject)->py_q_mimeData(items));}
   QStringList  mimeTypes(QTreeWidget* theWrappedObject) const;
   QStringList  py_q_mimeTypes(QTreeWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTreeWidget*)theWrappedObject)->py_q_mimeTypes());}
   void openPersistentEditor(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column = 0);
   void removeItemWidget(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column);
   QList<QTreeWidgetItem* >  selectedItems(QTreeWidget* theWrappedObject) const;
   void setColumnCount(QTreeWidget* theWrappedObject, int  columns);
   void setCurrentItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item);
   void setCurrentItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column);
   void setCurrentItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column, QItemSelectionModel::SelectionFlags  command);
   void setFirstItemColumnSpanned(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item, bool  span);
   void setHeaderItem(QTreeWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QTreeWidgetItem* >  item);
   void setHeaderLabel(QTreeWidget* theWrappedObject, const QString&  label);
   void setHeaderLabels(QTreeWidget* theWrappedObject, const QStringList&  labels);
   void setItemWidget(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column, QWidget*  widget);
   void py_q_setSelectionModel(QTreeWidget* theWrappedObject, QItemSelectionModel*  selectionModel){  (((PythonQtPublicPromoter_QTreeWidget*)theWrappedObject)->py_q_setSelectionModel(selectionModel));}
   int  sortColumn(QTreeWidget* theWrappedObject) const;
   void sortItems(QTreeWidget* theWrappedObject, int  column, Qt::SortOrder  order);
   Qt::DropActions  supportedDropActions(QTreeWidget* theWrappedObject) const;
   Qt::DropActions  py_q_supportedDropActions(QTreeWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTreeWidget*)theWrappedObject)->py_q_supportedDropActions());}
   PythonQtPassOwnershipToPython<QTreeWidgetItem*  > takeTopLevelItem(QTreeWidget* theWrappedObject, int  index);
   QTreeWidgetItem*  topLevelItem(QTreeWidget* theWrappedObject, int  index) const;
   int  topLevelItemCount(QTreeWidget* theWrappedObject) const;
   QRect  visualItemRect(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item) const;
};





class PythonQtShell_QTreeWidgetItem : public QTreeWidgetItem
{
public:
    PythonQtShell_QTreeWidgetItem(QTreeWidget*  treeview, QTreeWidgetItem*  after, int  type = Type):QTreeWidgetItem(treeview, after, type),_wrapper(nullptr) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidget*  treeview, const QStringList&  strings, int  type = Type):QTreeWidgetItem(treeview, strings, type),_wrapper(nullptr) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidget*  treeview, int  type = Type):QTreeWidgetItem(treeview, type),_wrapper(nullptr) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidgetItem*  parent, QTreeWidgetItem*  after, int  type = Type):QTreeWidgetItem(parent, after, type),_wrapper(nullptr) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidgetItem*  parent, const QStringList&  strings, int  type = Type):QTreeWidgetItem(parent, strings, type),_wrapper(nullptr) {};
    PythonQtShell_QTreeWidgetItem(QTreeWidgetItem*  parent, int  type = Type):QTreeWidgetItem(parent, type),_wrapper(nullptr) {};
    PythonQtShell_QTreeWidgetItem(const QStringList&  strings, int  type = Type):QTreeWidgetItem(strings, type),_wrapper(nullptr) {};
    PythonQtShell_QTreeWidgetItem(int  type = Type):QTreeWidgetItem(type),_wrapper(nullptr) {};

   ~PythonQtShell_QTreeWidgetItem() override;

QTreeWidgetItem*  clone() const override;
QVariant  data(int  column, int  role) const override;
void read(QDataStream&  in) override;
void setData(int  column, int  role, const QVariant&  value) override;
void write(QDataStream&  out) const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QTreeWidgetItem : public QTreeWidgetItem
{ public:
inline void promoted_emitDataChanged() { this->emitDataChanged(); }
inline QTreeWidgetItem*  py_q_clone() const { return QTreeWidgetItem::clone(); }
inline QVariant  py_q_data(int  column, int  role) const { return QTreeWidgetItem::data(column, role); }
inline void py_q_read(QDataStream&  in) { QTreeWidgetItem::read(in); }
inline void py_q_setData(int  column, int  role, const QVariant&  value) { QTreeWidgetItem::setData(column, role, value); }
inline void py_q_write(QDataStream&  out) const { QTreeWidgetItem::write(out); }
};

class PythonQtWrapper_QTreeWidgetItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ChildIndicatorPolicy ItemType )
enum ChildIndicatorPolicy{
  ShowIndicator = QTreeWidgetItem::ShowIndicator,   DontShowIndicator = QTreeWidgetItem::DontShowIndicator,   DontShowIndicatorWhenChildless = QTreeWidgetItem::DontShowIndicatorWhenChildless};
enum ItemType{
  Type = QTreeWidgetItem::Type,   UserType = QTreeWidgetItem::UserType};
public slots:
QTreeWidgetItem* new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidget* >  treeview, QTreeWidgetItem*  after, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidget* >  treeview, const QStringList&  strings, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidget* >  treeview, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidgetItem* >  parent, QTreeWidgetItem*  after, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidgetItem* >  parent, const QStringList&  strings, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(PythonQtNewOwnerOfThis<QTreeWidgetItem* >  parent, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(const QStringList&  strings, int  type = Type);
QTreeWidgetItem* new_QTreeWidgetItem(int  type = Type);
void delete_QTreeWidgetItem(QTreeWidgetItem* obj) { delete obj; }
   void addChild(QTreeWidgetItem* theWrappedObject, PythonQtPassOwnershipToCPP<QTreeWidgetItem* >  child);
   void addChildren(QTreeWidgetItem* theWrappedObject, PythonQtPassOwnershipToCPP<QList<QTreeWidgetItem* > >  children);
   QBrush  background(QTreeWidgetItem* theWrappedObject, int  column) const;
   Qt::CheckState  checkState(QTreeWidgetItem* theWrappedObject, int  column) const;
   QTreeWidgetItem*  child(QTreeWidgetItem* theWrappedObject, int  index) const;
   int  childCount(QTreeWidgetItem* theWrappedObject) const;
   QTreeWidgetItem::ChildIndicatorPolicy  childIndicatorPolicy(QTreeWidgetItem* theWrappedObject) const;
   QTreeWidgetItem*  clone(QTreeWidgetItem* theWrappedObject) const;
   QTreeWidgetItem*  py_q_clone(QTreeWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTreeWidgetItem*)theWrappedObject)->py_q_clone());}
   int  columnCount(QTreeWidgetItem* theWrappedObject) const;
   QVariant  data(QTreeWidgetItem* theWrappedObject, int  column, int  role) const;
   QVariant  py_q_data(QTreeWidgetItem* theWrappedObject, int  column, int  role) const{  return (((PythonQtPublicPromoter_QTreeWidgetItem*)theWrappedObject)->py_q_data(column, role));}
   void emitDataChanged(QTreeWidgetItem* theWrappedObject);
   Qt::ItemFlags  flags(QTreeWidgetItem* theWrappedObject) const;
   QFont  font(QTreeWidgetItem* theWrappedObject, int  column) const;
   QBrush  foreground(QTreeWidgetItem* theWrappedObject, int  column) const;
   QIcon  icon(QTreeWidgetItem* theWrappedObject, int  column) const;
   int  indexOfChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child) const;
   void insertChild(QTreeWidgetItem* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QTreeWidgetItem* >  child);
   void insertChildren(QTreeWidgetItem* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QList<QTreeWidgetItem* > >  children);
   bool  isDisabled(QTreeWidgetItem* theWrappedObject) const;
   bool  isExpanded(QTreeWidgetItem* theWrappedObject) const;
   bool  isFirstColumnSpanned(QTreeWidgetItem* theWrappedObject) const;
   bool  isHidden(QTreeWidgetItem* theWrappedObject) const;
   bool  isSelected(QTreeWidgetItem* theWrappedObject) const;
   void writeTo(QTreeWidgetItem* theWrappedObject, QDataStream&  out);
   void readFrom(QTreeWidgetItem* theWrappedObject, QDataStream&  in);
   QTreeWidgetItem*  parent(QTreeWidgetItem* theWrappedObject) const;
   void read(QTreeWidgetItem* theWrappedObject, QDataStream&  in);
   void py_q_read(QTreeWidgetItem* theWrappedObject, QDataStream&  in){  (((PythonQtPublicPromoter_QTreeWidgetItem*)theWrappedObject)->py_q_read(in));}
   void removeChild(QTreeWidgetItem* theWrappedObject, PythonQtPassOwnershipToPython<QTreeWidgetItem* >  child);
   void setBackground(QTreeWidgetItem* theWrappedObject, int  column, const QBrush&  brush);
   void setCheckState(QTreeWidgetItem* theWrappedObject, int  column, Qt::CheckState  state);
   void setChildIndicatorPolicy(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem::ChildIndicatorPolicy  policy);
   void setData(QTreeWidgetItem* theWrappedObject, int  column, int  role, const QVariant&  value);
   void py_q_setData(QTreeWidgetItem* theWrappedObject, int  column, int  role, const QVariant&  value){  (((PythonQtPublicPromoter_QTreeWidgetItem*)theWrappedObject)->py_q_setData(column, role, value));}
   void setDisabled(QTreeWidgetItem* theWrappedObject, bool  disabled);
   void setExpanded(QTreeWidgetItem* theWrappedObject, bool  expand);
   void setFirstColumnSpanned(QTreeWidgetItem* theWrappedObject, bool  span);
   void setFlags(QTreeWidgetItem* theWrappedObject, Qt::ItemFlags  flags);
   void setFont(QTreeWidgetItem* theWrappedObject, int  column, const QFont&  font);
   void setForeground(QTreeWidgetItem* theWrappedObject, int  column, const QBrush&  brush);
   void setHidden(QTreeWidgetItem* theWrappedObject, bool  hide);
   void setIcon(QTreeWidgetItem* theWrappedObject, int  column, const QIcon&  icon);
   void setSelected(QTreeWidgetItem* theWrappedObject, bool  select);
   void setSizeHint(QTreeWidgetItem* theWrappedObject, int  column, const QSize&  size);
   void setStatusTip(QTreeWidgetItem* theWrappedObject, int  column, const QString&  statusTip);
   void setText(QTreeWidgetItem* theWrappedObject, int  column, const QString&  text);
   void setTextAlignment(QTreeWidgetItem* theWrappedObject, int  column, int  alignment);
   void setToolTip(QTreeWidgetItem* theWrappedObject, int  column, const QString&  toolTip);
   void setWhatsThis(QTreeWidgetItem* theWrappedObject, int  column, const QString&  whatsThis);
   QSize  sizeHint(QTreeWidgetItem* theWrappedObject, int  column) const;
   void sortChildren(QTreeWidgetItem* theWrappedObject, int  column, Qt::SortOrder  order);
   QString  statusTip(QTreeWidgetItem* theWrappedObject, int  column) const;
   PythonQtPassOwnershipToPython<QTreeWidgetItem*  > takeChild(QTreeWidgetItem* theWrappedObject, int  index);
   PythonQtPassOwnershipToCPP<QList<QTreeWidgetItem* >  > takeChildren(QTreeWidgetItem* theWrappedObject);
   QString  text(QTreeWidgetItem* theWrappedObject, int  column) const;
   int  textAlignment(QTreeWidgetItem* theWrappedObject, int  column) const;
   QString  toolTip(QTreeWidgetItem* theWrappedObject, int  column) const;
   QTreeWidget*  treeWidget(QTreeWidgetItem* theWrappedObject) const;
   int  type(QTreeWidgetItem* theWrappedObject) const;
   QString  whatsThis(QTreeWidgetItem* theWrappedObject, int  column) const;
   void write(QTreeWidgetItem* theWrappedObject, QDataStream&  out) const;
   void py_q_write(QTreeWidgetItem* theWrappedObject, QDataStream&  out) const{  (((PythonQtPublicPromoter_QTreeWidgetItem*)theWrappedObject)->py_q_write(out));}
};





class PythonQtShell_QUndoCommand : public QUndoCommand
{
public:
    PythonQtShell_QUndoCommand(QUndoCommand*  parent = nullptr):QUndoCommand(parent),_wrapper(nullptr) {};
    PythonQtShell_QUndoCommand(const QString&  text, QUndoCommand*  parent = nullptr):QUndoCommand(text, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QUndoCommand() override;

int  id() const override;
bool  mergeWith(const QUndoCommand*  other) override;
void redo() override;
void undo() override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QUndoCommand : public QUndoCommand
{ public:
inline int  py_q_id() const { return QUndoCommand::id(); }
inline bool  py_q_mergeWith(const QUndoCommand*  other) { return QUndoCommand::mergeWith(other); }
inline void py_q_redo() { QUndoCommand::redo(); }
inline void py_q_undo() { QUndoCommand::undo(); }
};

class PythonQtWrapper_QUndoCommand : public QObject
{ Q_OBJECT
public:
public slots:
QUndoCommand* new_QUndoCommand(QUndoCommand*  parent = nullptr);
QUndoCommand* new_QUndoCommand(const QString&  text, QUndoCommand*  parent = nullptr);
void delete_QUndoCommand(QUndoCommand* obj) { delete obj; }
   QString  actionText(QUndoCommand* theWrappedObject) const;
   const QUndoCommand*  child(QUndoCommand* theWrappedObject, int  index) const;
   int  childCount(QUndoCommand* theWrappedObject) const;
   int  id(QUndoCommand* theWrappedObject) const;
   int  py_q_id(QUndoCommand* theWrappedObject) const{  return (((PythonQtPublicPromoter_QUndoCommand*)theWrappedObject)->py_q_id());}
   bool  isObsolete(QUndoCommand* theWrappedObject) const;
   bool  mergeWith(QUndoCommand* theWrappedObject, const QUndoCommand*  other);
   bool  py_q_mergeWith(QUndoCommand* theWrappedObject, const QUndoCommand*  other){  return (((PythonQtPublicPromoter_QUndoCommand*)theWrappedObject)->py_q_mergeWith(other));}
   void redo(QUndoCommand* theWrappedObject);
   void py_q_redo(QUndoCommand* theWrappedObject){  (((PythonQtPublicPromoter_QUndoCommand*)theWrappedObject)->py_q_redo());}
   void setObsolete(QUndoCommand* theWrappedObject, bool  obsolete);
   void setText(QUndoCommand* theWrappedObject, const QString&  text);
   QString  text(QUndoCommand* theWrappedObject) const;
   void undo(QUndoCommand* theWrappedObject);
   void py_q_undo(QUndoCommand* theWrappedObject){  (((PythonQtPublicPromoter_QUndoCommand*)theWrappedObject)->py_q_undo());}
};





class PythonQtShell_QUndoGroup : public QUndoGroup
{
public:
    PythonQtShell_QUndoGroup(QObject*  parent = nullptr):QUndoGroup(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QUndoGroup() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QUndoGroup : public QObject
{ Q_OBJECT
public:
public slots:
QUndoGroup* new_QUndoGroup(QObject*  parent = nullptr);
void delete_QUndoGroup(QUndoGroup* obj) { delete obj; }
   QUndoStack*  activeStack(QUndoGroup* theWrappedObject) const;
   void addStack(QUndoGroup* theWrappedObject, QUndoStack*  stack);
   bool  canRedo(QUndoGroup* theWrappedObject) const;
   bool  canUndo(QUndoGroup* theWrappedObject) const;
   QAction*  createRedoAction(QUndoGroup* theWrappedObject, QObject*  parent, const QString&  prefix = QString()) const;
   QAction*  createUndoAction(QUndoGroup* theWrappedObject, QObject*  parent, const QString&  prefix = QString()) const;
   bool  isClean(QUndoGroup* theWrappedObject) const;
   QString  redoText(QUndoGroup* theWrappedObject) const;
   void removeStack(QUndoGroup* theWrappedObject, QUndoStack*  stack);
   QList<QUndoStack* >  stacks(QUndoGroup* theWrappedObject) const;
   QString  undoText(QUndoGroup* theWrappedObject) const;
};





class PythonQtShell_QUndoStack : public QUndoStack
{
public:
    PythonQtShell_QUndoStack(QObject*  parent = nullptr):QUndoStack(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QUndoStack() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QUndoStack : public QObject
{ Q_OBJECT
public:
public slots:
QUndoStack* new_QUndoStack(QObject*  parent = nullptr);
void delete_QUndoStack(QUndoStack* obj) { delete obj; }
   void beginMacro(QUndoStack* theWrappedObject, const QString&  text);
   bool  canRedo(QUndoStack* theWrappedObject) const;
   bool  canUndo(QUndoStack* theWrappedObject) const;
   int  cleanIndex(QUndoStack* theWrappedObject) const;
   void clear(QUndoStack* theWrappedObject);
   const QUndoCommand*  command(QUndoStack* theWrappedObject, int  index) const;
   int  count(QUndoStack* theWrappedObject) const;
   QAction*  createRedoAction(QUndoStack* theWrappedObject, QObject*  parent, const QString&  prefix = QString()) const;
   QAction*  createUndoAction(QUndoStack* theWrappedObject, QObject*  parent, const QString&  prefix = QString()) const;
   void endMacro(QUndoStack* theWrappedObject);
   int  index(QUndoStack* theWrappedObject) const;
   bool  isActive(QUndoStack* theWrappedObject) const;
   bool  isClean(QUndoStack* theWrappedObject) const;
   void push(QUndoStack* theWrappedObject, QUndoCommand*  cmd);
   QString  redoText(QUndoStack* theWrappedObject) const;
   void setUndoLimit(QUndoStack* theWrappedObject, int  limit);
   QString  text(QUndoStack* theWrappedObject, int  idx) const;
   int  undoLimit(QUndoStack* theWrappedObject) const;
   QString  undoText(QUndoStack* theWrappedObject) const;
};





class PythonQtShell_QUndoView : public QUndoView
{
public:
    PythonQtShell_QUndoView(QUndoGroup*  group, QWidget*  parent = nullptr):QUndoView(group, parent),_wrapper(nullptr) {};
    PythonQtShell_QUndoView(QUndoStack*  stack, QWidget*  parent = nullptr):QUndoView(stack, parent),_wrapper(nullptr) {};
    PythonQtShell_QUndoView(QWidget*  parent = nullptr):QUndoView(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QUndoView() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint) override;
void closeEvent(QCloseEvent*  event) override;
void commitData(QWidget*  editor) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
void currentChanged(const QModelIndex&  current, const QModelIndex&  previous) override;
void customEvent(QEvent*  event) override;
void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>()) override;
int  devType() const override;
void doItemsLayout() override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  e) override;
void dragMoveEvent(QDragMoveEvent*  e) override;
void dropEvent(QDropEvent*  e) override;
bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event) override;
void editorDestroyed(QObject*  editor) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  e) override;
bool  eventFilter(QObject*  object, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
int  horizontalOffset() const override;
void horizontalScrollbarAction(int  action) override;
void horizontalScrollbarValueChanged(int  value) override;
QModelIndex  indexAt(const QPoint&  p) const override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  event) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const override;
bool  isIndexHidden(const QModelIndex&  index) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void keyboardSearch(const QString&  search) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  e) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  e) override;
QModelIndex  moveCursor(QAbstractItemView::CursorAction  cursorAction, Qt::KeyboardModifiers  modifiers) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  e) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void reset() override;
void resizeEvent(QResizeEvent*  e) override;
void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end) override;
void rowsInserted(const QModelIndex&  parent, int  start, int  end) override;
void scrollContentsBy(int  dx, int  dy) override;
void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) override;
void selectAll() override;
QList<QModelIndex >  selectedIndexes() const override;
void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) override;
QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event = nullptr) const override;
void setModel(QAbstractItemModel*  model) override;
void setRootIndex(const QModelIndex&  index) override;
void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) override;
void setSelectionModel(QItemSelectionModel*  selectionModel) override;
void setVisible(bool  visible) override;
void setupViewport(QWidget*  viewport) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
int  sizeHintForColumn(int  column) const override;
int  sizeHintForRow(int  row) const override;
void startDrag(Qt::DropActions  supportedActions) override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  e) override;
void updateEditorData() override;
void updateEditorGeometries() override;
void updateGeometries() override;
int  verticalOffset() const override;
void verticalScrollbarAction(int  action) override;
void verticalScrollbarValueChanged(int  value) override;
QStyleOptionViewItem  viewOptions() const override;
bool  viewportEvent(QEvent*  event) override;
QSize  viewportSizeHint() const override;
QRect  visualRect(const QModelIndex&  index) const override;
QRegion  visualRegionForSelection(const QItemSelection&  selection) const override;
void wheelEvent(QWheelEvent*  e) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QUndoView : public QObject
{ Q_OBJECT
public:
public slots:
QUndoView* new_QUndoView(QUndoGroup*  group, QWidget*  parent = nullptr);
QUndoView* new_QUndoView(QUndoStack*  stack, QWidget*  parent = nullptr);
QUndoView* new_QUndoView(QWidget*  parent = nullptr);
void delete_QUndoView(QUndoView* obj) { delete obj; }
   QIcon  cleanIcon(QUndoView* theWrappedObject) const;
   QString  emptyLabel(QUndoView* theWrappedObject) const;
   QUndoGroup*  group(QUndoView* theWrappedObject) const;
   void setCleanIcon(QUndoView* theWrappedObject, const QIcon&  icon);
   void setEmptyLabel(QUndoView* theWrappedObject, const QString&  label);
   QUndoStack*  stack(QUndoView* theWrappedObject) const;
};





class PythonQtShell_QVBoxLayout : public QVBoxLayout
{
public:
    PythonQtShell_QVBoxLayout():QVBoxLayout(),_wrapper(nullptr) {};
    PythonQtShell_QVBoxLayout(QWidget*  parent):QVBoxLayout(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QVBoxLayout() override;

void addItem(QLayoutItem*  arg__1) override;
void childEvent(QChildEvent*  e) override;
QSizePolicy::ControlTypes  controlTypes() const override;
int  count() const override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
Qt::Orientations  expandingDirections() const override;
QRect  geometry() const override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
int  indexOf(QWidget*  arg__1) const override;
void invalidate() override;
bool  isEmpty() const override;
QLayoutItem*  itemAt(int  arg__1) const override;
QLayout*  layout() override;
QSize  maximumSize() const override;
int  minimumHeightForWidth(int  arg__1) const override;
QSize  minimumSize() const override;
void setGeometry(const QRect&  arg__1) override;
QSize  sizeHint() const override;
QSpacerItem*  spacerItem() override;
QLayoutItem*  takeAt(int  arg__1) override;
void timerEvent(QTimerEvent*  event) override;
QWidget*  widget() override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QVBoxLayout : public QObject
{ Q_OBJECT
public:
public slots:
QVBoxLayout* new_QVBoxLayout();
QVBoxLayout* new_QVBoxLayout(QWidget*  parent);
void delete_QVBoxLayout(QVBoxLayout* obj) { delete obj; }
    bool __nonzero__(QVBoxLayout* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QValidator : public QValidator
{
public:
    PythonQtShell_QValidator(QObject*  parent = nullptr):QValidator(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QValidator() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void fixup(QString&  arg__1) const override;
void timerEvent(QTimerEvent*  event) override;
QValidator::State  validate(QString&  arg__1, int&  arg__2) const override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QValidator : public QValidator
{ public:
inline void py_q_fixup(QString&  arg__1) const { QValidator::fixup(arg__1); }
inline QValidator::State  py_q_validate(QString&  arg__1, int&  arg__2) const { return this->validate(arg__1, arg__2); }
};

class PythonQtWrapper_QValidator : public QObject
{ Q_OBJECT
public:
public slots:
QValidator* new_QValidator(QObject*  parent = nullptr);
void delete_QValidator(QValidator* obj) { delete obj; }
   void fixup(QValidator* theWrappedObject, QString&  arg__1) const;
   void py_q_fixup(QValidator* theWrappedObject, QString&  arg__1) const{  (((PythonQtPublicPromoter_QValidator*)theWrappedObject)->py_q_fixup(arg__1));}
   QLocale  locale(QValidator* theWrappedObject) const;
   void setLocale(QValidator* theWrappedObject, const QLocale&  locale);
   QValidator::State  validate(QValidator* theWrappedObject, QString&  arg__1, int&  arg__2) const;
   QValidator::State  py_q_validate(QValidator* theWrappedObject, QString&  arg__1, int&  arg__2) const{  return (((PythonQtPublicPromoter_QValidator*)theWrappedObject)->py_q_validate(arg__1, arg__2));}
};





class PythonQtWrapper_QVector2D : public QObject
{ Q_OBJECT
public:
public slots:
QVector2D* new_QVector2D();
QVector2D* new_QVector2D(const QPoint&  point);
QVector2D* new_QVector2D(const QPointF&  point);
QVector2D* new_QVector2D(const QVector3D&  vector);
QVector2D* new_QVector2D(const QVector4D&  vector);
QVector2D* new_QVector2D(float  xpos, float  ypos);
QVector2D* new_QVector2D(const QVector2D& other) {
QVector2D* a = new QVector2D();
*((QVector2D*)a) = other;
return a; }
void delete_QVector2D(QVector2D* obj) { delete obj; }
   float  distanceToLine(QVector2D* theWrappedObject, const QVector2D&  point, const QVector2D&  direction) const;
   float  distanceToPoint(QVector2D* theWrappedObject, const QVector2D&  point) const;
   float  static_QVector2D_dotProduct(const QVector2D&  v1, const QVector2D&  v2);
   bool  isNull(QVector2D* theWrappedObject) const;
   float  length(QVector2D* theWrappedObject) const;
   float  lengthSquared(QVector2D* theWrappedObject) const;
   void normalize(QVector2D* theWrappedObject);
   QVector2D  normalized(QVector2D* theWrappedObject) const;
   bool  __ne__(QVector2D* theWrappedObject, const QVector2D&  v2);
   const QVector2D  __mul__(QVector2D* theWrappedObject, const QVector2D&  v2);
   const QVector2D  __mul__(QVector2D* theWrappedObject, float  factor);
   QVector2D*  __imul__(QVector2D* theWrappedObject, const QVector2D&  vector);
   QVector2D*  __imul__(QVector2D* theWrappedObject, float  factor);
   const QVector2D  __add__(QVector2D* theWrappedObject, const QVector2D&  v2);
   QVector2D*  __iadd__(QVector2D* theWrappedObject, const QVector2D&  vector);
   const QVector2D  __sub__(QVector2D* theWrappedObject);
   const QVector2D  __sub__(QVector2D* theWrappedObject, const QVector2D&  v2);
   QVector2D*  __isub__(QVector2D* theWrappedObject, const QVector2D&  vector);
   const QVector2D  __div__(QVector2D* theWrappedObject, const QVector2D&  divisor);
   const QVector2D  __div__(QVector2D* theWrappedObject, float  divisor);
   QVector2D*  __idiv__(QVector2D* theWrappedObject, const QVector2D&  vector);
   QVector2D*  __idiv__(QVector2D* theWrappedObject, float  divisor);
   void writeTo(QVector2D* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QVector2D* theWrappedObject, const QVector2D&  v2);
   void readFrom(QVector2D* theWrappedObject, QDataStream&  arg__1);
   float  operator_subscript(QVector2D* theWrappedObject, int  i) const;
   void setX(QVector2D* theWrappedObject, float  x);
   void setY(QVector2D* theWrappedObject, float  y);
   QPoint  toPoint(QVector2D* theWrappedObject) const;
   QPointF  toPointF(QVector2D* theWrappedObject) const;
   QVector3D  toVector3D(QVector2D* theWrappedObject) const;
   QVector4D  toVector4D(QVector2D* theWrappedObject) const;
   float  x(QVector2D* theWrappedObject) const;
   float  y(QVector2D* theWrappedObject) const;
    QString py_toString(QVector2D*);
    bool __nonzero__(QVector2D* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QVector3D : public QObject
{ Q_OBJECT
public:
public slots:
QVector3D* new_QVector3D();
QVector3D* new_QVector3D(const QPoint&  point);
QVector3D* new_QVector3D(const QPointF&  point);
QVector3D* new_QVector3D(const QVector2D&  vector);
QVector3D* new_QVector3D(const QVector2D&  vector, float  zpos);
QVector3D* new_QVector3D(const QVector4D&  vector);
QVector3D* new_QVector3D(float  xpos, float  ypos, float  zpos);
QVector3D* new_QVector3D(const QVector3D& other) {
QVector3D* a = new QVector3D();
*((QVector3D*)a) = other;
return a; }
void delete_QVector3D(QVector3D* obj) { delete obj; }
   QVector3D  static_QVector3D_crossProduct(const QVector3D&  v1, const QVector3D&  v2);
   float  distanceToLine(QVector3D* theWrappedObject, const QVector3D&  point, const QVector3D&  direction) const;
   float  distanceToPlane(QVector3D* theWrappedObject, const QVector3D&  plane, const QVector3D&  normal) const;
   float  distanceToPlane(QVector3D* theWrappedObject, const QVector3D&  plane1, const QVector3D&  plane2, const QVector3D&  plane3) const;
   float  distanceToPoint(QVector3D* theWrappedObject, const QVector3D&  point) const;
   float  static_QVector3D_dotProduct(const QVector3D&  v1, const QVector3D&  v2);
   bool  isNull(QVector3D* theWrappedObject) const;
   float  length(QVector3D* theWrappedObject) const;
   float  lengthSquared(QVector3D* theWrappedObject) const;
   QVector3D  static_QVector3D_normal(const QVector3D&  v1, const QVector3D&  v2);
   QVector3D  static_QVector3D_normal(const QVector3D&  v1, const QVector3D&  v2, const QVector3D&  v3);
   void normalize(QVector3D* theWrappedObject);
   QVector3D  normalized(QVector3D* theWrappedObject) const;
   bool  __ne__(QVector3D* theWrappedObject, const QVector3D&  v2);
   QVector3D  __mul__(QVector3D* theWrappedObject, const QMatrix4x4&  matrix);
   const QVector3D  __mul__(QVector3D* theWrappedObject, const QVector3D&  v2);
   const QVector3D  __mul__(QVector3D* theWrappedObject, float  factor);
   QVector3D*  __imul__(QVector3D* theWrappedObject, const QVector3D&  vector);
   QVector3D*  __imul__(QVector3D* theWrappedObject, float  factor);
   const QVector3D  __add__(QVector3D* theWrappedObject, const QVector3D&  v2);
   QVector3D*  __iadd__(QVector3D* theWrappedObject, const QVector3D&  vector);
   const QVector3D  __sub__(QVector3D* theWrappedObject);
   const QVector3D  __sub__(QVector3D* theWrappedObject, const QVector3D&  v2);
   QVector3D*  __isub__(QVector3D* theWrappedObject, const QVector3D&  vector);
   const QVector3D  __div__(QVector3D* theWrappedObject, const QVector3D&  divisor);
   const QVector3D  __div__(QVector3D* theWrappedObject, float  divisor);
   QVector3D*  __idiv__(QVector3D* theWrappedObject, const QVector3D&  vector);
   QVector3D*  __idiv__(QVector3D* theWrappedObject, float  divisor);
   void writeTo(QVector3D* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QVector3D* theWrappedObject, const QVector3D&  v2);
   void readFrom(QVector3D* theWrappedObject, QDataStream&  arg__1);
   float  operator_subscript(QVector3D* theWrappedObject, int  i) const;
   QVector3D  project(QVector3D* theWrappedObject, const QMatrix4x4&  modelView, const QMatrix4x4&  projection, const QRect&  viewport) const;
   void setX(QVector3D* theWrappedObject, float  x);
   void setY(QVector3D* theWrappedObject, float  y);
   void setZ(QVector3D* theWrappedObject, float  z);
   QPoint  toPoint(QVector3D* theWrappedObject) const;
   QPointF  toPointF(QVector3D* theWrappedObject) const;
   QVector2D  toVector2D(QVector3D* theWrappedObject) const;
   QVector4D  toVector4D(QVector3D* theWrappedObject) const;
   QVector3D  unproject(QVector3D* theWrappedObject, const QMatrix4x4&  modelView, const QMatrix4x4&  projection, const QRect&  viewport) const;
   float  x(QVector3D* theWrappedObject) const;
   float  y(QVector3D* theWrappedObject) const;
   float  z(QVector3D* theWrappedObject) const;
    QString py_toString(QVector3D*);
    bool __nonzero__(QVector3D* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QVector4D : public QObject
{ Q_OBJECT
public:
public slots:
QVector4D* new_QVector4D();
QVector4D* new_QVector4D(const QPoint&  point);
QVector4D* new_QVector4D(const QPointF&  point);
QVector4D* new_QVector4D(const QVector2D&  vector);
QVector4D* new_QVector4D(const QVector2D&  vector, float  zpos, float  wpos);
QVector4D* new_QVector4D(const QVector3D&  vector);
QVector4D* new_QVector4D(const QVector3D&  vector, float  wpos);
QVector4D* new_QVector4D(float  xpos, float  ypos, float  zpos, float  wpos);
QVector4D* new_QVector4D(const QVector4D& other) {
QVector4D* a = new QVector4D();
*((QVector4D*)a) = other;
return a; }
void delete_QVector4D(QVector4D* obj) { delete obj; }
   float  static_QVector4D_dotProduct(const QVector4D&  v1, const QVector4D&  v2);
   bool  isNull(QVector4D* theWrappedObject) const;
   float  length(QVector4D* theWrappedObject) const;
   float  lengthSquared(QVector4D* theWrappedObject) const;
   void normalize(QVector4D* theWrappedObject);
   QVector4D  normalized(QVector4D* theWrappedObject) const;
   bool  __ne__(QVector4D* theWrappedObject, const QVector4D&  v2);
   QVector4D  __mul__(QVector4D* theWrappedObject, const QMatrix4x4&  matrix);
   const QVector4D  __mul__(QVector4D* theWrappedObject, const QVector4D&  v2);
   const QVector4D  __mul__(QVector4D* theWrappedObject, float  factor);
   QVector4D*  __imul__(QVector4D* theWrappedObject, const QVector4D&  vector);
   QVector4D*  __imul__(QVector4D* theWrappedObject, float  factor);
   const QVector4D  __add__(QVector4D* theWrappedObject, const QVector4D&  v2);
   QVector4D*  __iadd__(QVector4D* theWrappedObject, const QVector4D&  vector);
   const QVector4D  __sub__(QVector4D* theWrappedObject);
   const QVector4D  __sub__(QVector4D* theWrappedObject, const QVector4D&  v2);
   QVector4D*  __isub__(QVector4D* theWrappedObject, const QVector4D&  vector);
   const QVector4D  __div__(QVector4D* theWrappedObject, const QVector4D&  divisor);
   const QVector4D  __div__(QVector4D* theWrappedObject, float  divisor);
   QVector4D*  __idiv__(QVector4D* theWrappedObject, const QVector4D&  vector);
   QVector4D*  __idiv__(QVector4D* theWrappedObject, float  divisor);
   void writeTo(QVector4D* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QVector4D* theWrappedObject, const QVector4D&  v2);
   void readFrom(QVector4D* theWrappedObject, QDataStream&  arg__1);
   float  operator_subscript(QVector4D* theWrappedObject, int  i) const;
   void setW(QVector4D* theWrappedObject, float  w);
   void setX(QVector4D* theWrappedObject, float  x);
   void setY(QVector4D* theWrappedObject, float  y);
   void setZ(QVector4D* theWrappedObject, float  z);
   QPoint  toPoint(QVector4D* theWrappedObject) const;
   QPointF  toPointF(QVector4D* theWrappedObject) const;
   QVector2D  toVector2D(QVector4D* theWrappedObject) const;
   QVector2D  toVector2DAffine(QVector4D* theWrappedObject) const;
   QVector3D  toVector3D(QVector4D* theWrappedObject) const;
   QVector3D  toVector3DAffine(QVector4D* theWrappedObject) const;
   float  w(QVector4D* theWrappedObject) const;
   float  x(QVector4D* theWrappedObject) const;
   float  y(QVector4D* theWrappedObject) const;
   float  z(QVector4D* theWrappedObject) const;
    QString py_toString(QVector4D*);
    bool __nonzero__(QVector4D* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QWhatsThis : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWhatsThis(QWhatsThis* obj) { delete obj; }
   QAction*  static_QWhatsThis_createAction(QObject*  parent = nullptr);
   void static_QWhatsThis_enterWhatsThisMode();
   void static_QWhatsThis_hideText();
   bool  static_QWhatsThis_inWhatsThisMode();
   void static_QWhatsThis_leaveWhatsThisMode();
   void static_QWhatsThis_showText(const QPoint&  pos, const QString&  text, QWidget*  w = nullptr);
};





class PythonQtWrapper_QWhatsThisClickedEvent : public QObject
{ Q_OBJECT
public:
public slots:
QWhatsThisClickedEvent* new_QWhatsThisClickedEvent(const QString&  href);
void delete_QWhatsThisClickedEvent(QWhatsThisClickedEvent* obj) { delete obj; }
   QString  href(QWhatsThisClickedEvent* theWrappedObject) const;
};





class PythonQtShell_QWheelEvent : public QWheelEvent
{
public:
    PythonQtShell_QWheelEvent(QPointF  pos, QPointF  globalPos, QPoint  pixelDelta, QPoint  angleDelta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::ScrollPhase  phase, bool  inverted, Qt::MouseEventSource  source = Qt::MouseEventNotSynthesized):QWheelEvent(pos, globalPos, pixelDelta, angleDelta, buttons, modifiers, phase, inverted, source),_wrapper(nullptr) {};
    PythonQtShell_QWheelEvent(const QPointF&  pos, const QPointF&  globalPos, QPoint  pixelDelta, QPoint  angleDelta, int  qt4Delta, Qt::Orientation  qt4Orientation, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers):QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers),_wrapper(nullptr) {};
    PythonQtShell_QWheelEvent(const QPointF&  pos, const QPointF&  globalPos, QPoint  pixelDelta, QPoint  angleDelta, int  qt4Delta, Qt::Orientation  qt4Orientation, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::ScrollPhase  phase):QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase),_wrapper(nullptr) {};
    PythonQtShell_QWheelEvent(const QPointF&  pos, const QPointF&  globalPos, QPoint  pixelDelta, QPoint  angleDelta, int  qt4Delta, Qt::Orientation  qt4Orientation, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::ScrollPhase  phase, Qt::MouseEventSource  source):QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase, source),_wrapper(nullptr) {};
    PythonQtShell_QWheelEvent(const QPointF&  pos, const QPointF&  globalPos, QPoint  pixelDelta, QPoint  angleDelta, int  qt4Delta, Qt::Orientation  qt4Orientation, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::ScrollPhase  phase, Qt::MouseEventSource  source, bool  inverted):QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase, source, inverted),_wrapper(nullptr) {};
    PythonQtShell_QWheelEvent(const QPointF&  pos, const QPointF&  globalPos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient = Qt::Vertical):QWheelEvent(pos, globalPos, delta, buttons, modifiers, orient),_wrapper(nullptr) {};
    PythonQtShell_QWheelEvent(const QPointF&  pos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient = Qt::Vertical):QWheelEvent(pos, delta, buttons, modifiers, orient),_wrapper(nullptr) {};

   ~PythonQtShell_QWheelEvent() override;


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QWheelEvent : public QObject
{ Q_OBJECT
public:
public slots:
QWheelEvent* new_QWheelEvent(QPointF  pos, QPointF  globalPos, QPoint  pixelDelta, QPoint  angleDelta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::ScrollPhase  phase, bool  inverted, Qt::MouseEventSource  source = Qt::MouseEventNotSynthesized);
QWheelEvent* new_QWheelEvent(const QPointF&  pos, const QPointF&  globalPos, QPoint  pixelDelta, QPoint  angleDelta, int  qt4Delta, Qt::Orientation  qt4Orientation, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers);
QWheelEvent* new_QWheelEvent(const QPointF&  pos, const QPointF&  globalPos, QPoint  pixelDelta, QPoint  angleDelta, int  qt4Delta, Qt::Orientation  qt4Orientation, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::ScrollPhase  phase);
QWheelEvent* new_QWheelEvent(const QPointF&  pos, const QPointF&  globalPos, QPoint  pixelDelta, QPoint  angleDelta, int  qt4Delta, Qt::Orientation  qt4Orientation, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::ScrollPhase  phase, Qt::MouseEventSource  source);
QWheelEvent* new_QWheelEvent(const QPointF&  pos, const QPointF&  globalPos, QPoint  pixelDelta, QPoint  angleDelta, int  qt4Delta, Qt::Orientation  qt4Orientation, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::ScrollPhase  phase, Qt::MouseEventSource  source, bool  inverted);
QWheelEvent* new_QWheelEvent(const QPointF&  pos, const QPointF&  globalPos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient = Qt::Vertical);
QWheelEvent* new_QWheelEvent(const QPointF&  pos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient = Qt::Vertical);
void delete_QWheelEvent(QWheelEvent* obj) { delete obj; }
   QPoint  angleDelta(QWheelEvent* theWrappedObject) const;
   Qt::MouseButtons  buttons(QWheelEvent* theWrappedObject) const;
   int  delta(QWheelEvent* theWrappedObject) const;
   QPoint  globalPos(QWheelEvent* theWrappedObject) const;
   const QPointF*  globalPosF(QWheelEvent* theWrappedObject) const;
   QPointF  globalPosition(QWheelEvent* theWrappedObject) const;
   int  globalX(QWheelEvent* theWrappedObject) const;
   int  globalY(QWheelEvent* theWrappedObject) const;
   bool  inverted(QWheelEvent* theWrappedObject) const;
   Qt::Orientation  orientation(QWheelEvent* theWrappedObject) const;
   Qt::ScrollPhase  phase(QWheelEvent* theWrappedObject) const;
   QPoint  pixelDelta(QWheelEvent* theWrappedObject) const;
   QPoint  pos(QWheelEvent* theWrappedObject) const;
   const QPointF*  posF(QWheelEvent* theWrappedObject) const;
   QPointF  position(QWheelEvent* theWrappedObject) const;
   Qt::MouseEventSource  source(QWheelEvent* theWrappedObject) const;
   int  x(QWheelEvent* theWrappedObject) const;
   int  y(QWheelEvent* theWrappedObject) const;
};





class PythonQtShell_QWidget : public QWidget
{
public:
    PythonQtShell_QWidget(QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags()):QWidget(parent, f),_wrapper(nullptr) {};

   ~PythonQtShell_QWidget() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  event) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWidget : public QWidget
{ public:
inline void promoted_actionEvent(QActionEvent*  event) { this->actionEvent(event); }
inline void promoted_changeEvent(QEvent*  arg__1) { this->changeEvent(arg__1); }
inline void promoted_closeEvent(QCloseEvent*  event) { this->closeEvent(event); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  event) { this->contextMenuEvent(event); }
inline void promoted_destroy(bool  destroyWindow = true, bool  destroySubWindows = true) { this->destroy(destroyWindow, destroySubWindows); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  event) { this->dragEnterEvent(event); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  event) { this->dragLeaveEvent(event); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  event) { this->dragMoveEvent(event); }
inline void promoted_dropEvent(QDropEvent*  event) { this->dropEvent(event); }
inline void promoted_enterEvent(QEvent*  event) { this->enterEvent(event); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { this->focusInEvent(event); }
inline bool  promoted_focusNextChild() { return this->focusNextChild(); }
inline bool  promoted_focusNextPrevChild(bool  next) { return this->focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { this->focusOutEvent(event); }
inline bool  promoted_focusPreviousChild() { return this->focusPreviousChild(); }
inline void promoted_hideEvent(QHideEvent*  event) { this->hideEvent(event); }
inline void promoted_initPainter(QPainter*  painter) const { this->initPainter(painter); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { this->inputMethodEvent(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { this->keyPressEvent(event); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { this->keyReleaseEvent(event); }
inline void promoted_leaveEvent(QEvent*  event) { this->leaveEvent(event); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  arg__1) const { return this->metric(arg__1); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  event) { this->mouseDoubleClickEvent(event); }
inline void promoted_mouseMoveEvent(QMouseEvent*  event) { this->mouseMoveEvent(event); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { this->mousePressEvent(event); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  event) { this->mouseReleaseEvent(event); }
inline void promoted_moveEvent(QMoveEvent*  event) { this->moveEvent(event); }
inline bool  promoted_nativeEvent(const QByteArray&  eventType, void*  message, long*  result) { return this->nativeEvent(eventType, message, result); }
inline void promoted_paintEvent(QPaintEvent*  event) { this->paintEvent(event); }
inline QPaintDevice*  promoted_redirected(QPoint*  offset) const { return this->redirected(offset); }
inline void promoted_resizeEvent(QResizeEvent*  event) { this->resizeEvent(event); }
inline QPainter*  promoted_sharedPainter() const { return this->sharedPainter(); }
inline void promoted_showEvent(QShowEvent*  event) { this->showEvent(event); }
inline void promoted_tabletEvent(QTabletEvent*  event) { this->tabletEvent(event); }
inline void promoted_updateMicroFocus() { this->updateMicroFocus(); }
inline void promoted_wheelEvent(QWheelEvent*  event) { this->wheelEvent(event); }
inline void py_q_actionEvent(QActionEvent*  event) { QWidget::actionEvent(event); }
inline void py_q_changeEvent(QEvent*  arg__1) { QWidget::changeEvent(arg__1); }
inline void py_q_closeEvent(QCloseEvent*  event) { QWidget::closeEvent(event); }
inline void py_q_contextMenuEvent(QContextMenuEvent*  event) { QWidget::contextMenuEvent(event); }
inline int  py_q_devType() const { return QWidget::devType(); }
inline void py_q_dragEnterEvent(QDragEnterEvent*  event) { QWidget::dragEnterEvent(event); }
inline void py_q_dragLeaveEvent(QDragLeaveEvent*  event) { QWidget::dragLeaveEvent(event); }
inline void py_q_dragMoveEvent(QDragMoveEvent*  event) { QWidget::dragMoveEvent(event); }
inline void py_q_dropEvent(QDropEvent*  event) { QWidget::dropEvent(event); }
inline void py_q_enterEvent(QEvent*  event) { QWidget::enterEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QWidget::event(event); }
inline void py_q_focusInEvent(QFocusEvent*  event) { QWidget::focusInEvent(event); }
inline bool  py_q_focusNextPrevChild(bool  next) { return QWidget::focusNextPrevChild(next); }
inline void py_q_focusOutEvent(QFocusEvent*  event) { QWidget::focusOutEvent(event); }
inline bool  py_q_hasHeightForWidth() const { return QWidget::hasHeightForWidth(); }
inline int  py_q_heightForWidth(int  arg__1) const { return QWidget::heightForWidth(arg__1); }
inline void py_q_hideEvent(QHideEvent*  event) { QWidget::hideEvent(event); }
inline void py_q_initPainter(QPainter*  painter) const { QWidget::initPainter(painter); }
inline void py_q_inputMethodEvent(QInputMethodEvent*  arg__1) { QWidget::inputMethodEvent(arg__1); }
inline QVariant  py_q_inputMethodQuery(Qt::InputMethodQuery  arg__1) const { return QWidget::inputMethodQuery(arg__1); }
inline void py_q_keyPressEvent(QKeyEvent*  event) { QWidget::keyPressEvent(event); }
inline void py_q_keyReleaseEvent(QKeyEvent*  event) { QWidget::keyReleaseEvent(event); }
inline void py_q_leaveEvent(QEvent*  event) { QWidget::leaveEvent(event); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  arg__1) const { return QWidget::metric(arg__1); }
inline QSize  py_q_minimumSizeHint() const { return QWidget::minimumSizeHint(); }
inline void py_q_mouseDoubleClickEvent(QMouseEvent*  event) { QWidget::mouseDoubleClickEvent(event); }
inline void py_q_mouseMoveEvent(QMouseEvent*  event) { QWidget::mouseMoveEvent(event); }
inline void py_q_mousePressEvent(QMouseEvent*  event) { QWidget::mousePressEvent(event); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  event) { QWidget::mouseReleaseEvent(event); }
inline void py_q_moveEvent(QMoveEvent*  event) { QWidget::moveEvent(event); }
inline bool  py_q_nativeEvent(const QByteArray&  eventType, void*  message, long*  result) { return QWidget::nativeEvent(eventType, message, result); }
inline QPaintEngine*  py_q_paintEngine() const { return QWidget::paintEngine(); }
inline void py_q_paintEvent(QPaintEvent*  event) { QWidget::paintEvent(event); }
inline QPaintDevice*  py_q_redirected(QPoint*  offset) const { return QWidget::redirected(offset); }
inline void py_q_resizeEvent(QResizeEvent*  event) { QWidget::resizeEvent(event); }
inline void py_q_setVisible(bool  visible) { QWidget::setVisible(visible); }
inline QPainter*  py_q_sharedPainter() const { return QWidget::sharedPainter(); }
inline void py_q_showEvent(QShowEvent*  event) { QWidget::showEvent(event); }
inline QSize  py_q_sizeHint() const { return QWidget::sizeHint(); }
inline void py_q_tabletEvent(QTabletEvent*  event) { QWidget::tabletEvent(event); }
inline void py_q_wheelEvent(QWheelEvent*  event) { QWidget::wheelEvent(event); }
};

class PythonQtWrapper_QWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RenderFlag )
Q_FLAGS(RenderFlags )
enum RenderFlag{
  DrawWindowBackground = QWidget::DrawWindowBackground,   DrawChildren = QWidget::DrawChildren,   IgnoreMask = QWidget::IgnoreMask};
Q_DECLARE_FLAGS(RenderFlags, RenderFlag)
public slots:
QWidget* new_QWidget(QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags());
void delete_QWidget(QWidget* obj) { delete obj; }
   bool  acceptDrops(QWidget* theWrappedObject) const;
   QString  accessibleDescription(QWidget* theWrappedObject) const;
   QString  accessibleName(QWidget* theWrappedObject) const;
   void actionEvent(QWidget* theWrappedObject, QActionEvent*  event);
   void py_q_actionEvent(QWidget* theWrappedObject, QActionEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_actionEvent(event));}
   QList<QAction* >  actions(QWidget* theWrappedObject) const;
   void activateWindow(QWidget* theWrappedObject);
   void addAction(QWidget* theWrappedObject, QAction*  action);
   void addActions(QWidget* theWrappedObject, QList<QAction* >  actions);
   void adjustSize(QWidget* theWrappedObject);
   bool  autoFillBackground(QWidget* theWrappedObject) const;
   QPalette::ColorRole  backgroundRole(QWidget* theWrappedObject) const;
   QBackingStore*  backingStore(QWidget* theWrappedObject) const;
   QSize  baseSize(QWidget* theWrappedObject) const;
   void changeEvent(QWidget* theWrappedObject, QEvent*  arg__1);
   void py_q_changeEvent(QWidget* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_changeEvent(arg__1));}
   QWidget*  childAt(QWidget* theWrappedObject, const QPoint&  p) const;
   QWidget*  childAt(QWidget* theWrappedObject, int  x, int  y) const;
   QRect  childrenRect(QWidget* theWrappedObject) const;
   QRegion  childrenRegion(QWidget* theWrappedObject) const;
   void clearFocus(QWidget* theWrappedObject);
   void clearMask(QWidget* theWrappedObject);
   void closeEvent(QWidget* theWrappedObject, QCloseEvent*  event);
   void py_q_closeEvent(QWidget* theWrappedObject, QCloseEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_closeEvent(event));}
   QMargins  contentsMargins(QWidget* theWrappedObject) const;
   QRect  contentsRect(QWidget* theWrappedObject) const;
   void contextMenuEvent(QWidget* theWrappedObject, QContextMenuEvent*  event);
   void py_q_contextMenuEvent(QWidget* theWrappedObject, QContextMenuEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_contextMenuEvent(event));}
   Qt::ContextMenuPolicy  contextMenuPolicy(QWidget* theWrappedObject) const;
   void createWinId(QWidget* theWrappedObject);
   QWidget*  static_QWidget_createWindowContainer(QWindow*  window, QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags());
   QCursor  cursor(QWidget* theWrappedObject) const;
   void destroy(QWidget* theWrappedObject, bool  destroyWindow = true, bool  destroySubWindows = true);
   int  py_q_devType(QWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_devType());}
   void dragEnterEvent(QWidget* theWrappedObject, QDragEnterEvent*  event);
   void py_q_dragEnterEvent(QWidget* theWrappedObject, QDragEnterEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_dragEnterEvent(event));}
   void dragLeaveEvent(QWidget* theWrappedObject, QDragLeaveEvent*  event);
   void py_q_dragLeaveEvent(QWidget* theWrappedObject, QDragLeaveEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_dragLeaveEvent(event));}
   void dragMoveEvent(QWidget* theWrappedObject, QDragMoveEvent*  event);
   void py_q_dragMoveEvent(QWidget* theWrappedObject, QDragMoveEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_dragMoveEvent(event));}
   void dropEvent(QWidget* theWrappedObject, QDropEvent*  event);
   void py_q_dropEvent(QWidget* theWrappedObject, QDropEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_dropEvent(event));}
   WId  effectiveWinId(QWidget* theWrappedObject) const;
   void ensurePolished(QWidget* theWrappedObject) const;
   void enterEvent(QWidget* theWrappedObject, QEvent*  event);
   void py_q_enterEvent(QWidget* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_enterEvent(event));}
   bool  py_q_event(QWidget* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_event(event));}
   void focusInEvent(QWidget* theWrappedObject, QFocusEvent*  event);
   void py_q_focusInEvent(QWidget* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_focusInEvent(event));}
   bool  focusNextChild(QWidget* theWrappedObject);
   bool  focusNextPrevChild(QWidget* theWrappedObject, bool  next);
   bool  py_q_focusNextPrevChild(QWidget* theWrappedObject, bool  next){  return (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_focusNextPrevChild(next));}
   void focusOutEvent(QWidget* theWrappedObject, QFocusEvent*  event);
   void py_q_focusOutEvent(QWidget* theWrappedObject, QFocusEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_focusOutEvent(event));}
   Qt::FocusPolicy  focusPolicy(QWidget* theWrappedObject) const;
   bool  focusPreviousChild(QWidget* theWrappedObject);
   QWidget*  focusProxy(QWidget* theWrappedObject) const;
   QWidget*  focusWidget(QWidget* theWrappedObject) const;
   const QFont*  font(QWidget* theWrappedObject) const;
   QFontInfo  fontInfo(QWidget* theWrappedObject) const;
   QFontMetrics  fontMetrics(QWidget* theWrappedObject) const;
   QPalette::ColorRole  foregroundRole(QWidget* theWrappedObject) const;
   QRect  frameGeometry(QWidget* theWrappedObject) const;
   QSize  frameSize(QWidget* theWrappedObject) const;
   const QRect*  geometry(QWidget* theWrappedObject) const;
   QPixmap  grab(QWidget* theWrappedObject, const QRect&  rectangle = QRect(QPoint(0, 0), QSize(-1, -1)));
   void grabGesture(QWidget* theWrappedObject, Qt::GestureType  type, Qt::GestureFlags  flags = Qt::GestureFlags());
   void grabKeyboard(QWidget* theWrappedObject);
   void grabMouse(QWidget* theWrappedObject);
   void grabMouse(QWidget* theWrappedObject, const QCursor&  arg__1);
   int  grabShortcut(QWidget* theWrappedObject, const QKeySequence&  key, Qt::ShortcutContext  context = Qt::WindowShortcut);
   QGraphicsEffect*  graphicsEffect(QWidget* theWrappedObject) const;
   QGraphicsProxyWidget*  graphicsProxyWidget(QWidget* theWrappedObject) const;
   bool  hasFocus(QWidget* theWrappedObject) const;
   bool  hasHeightForWidth(QWidget* theWrappedObject) const;
   bool  py_q_hasHeightForWidth(QWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_hasHeightForWidth());}
   bool  hasMouseTracking(QWidget* theWrappedObject) const;
   bool  hasTabletTracking(QWidget* theWrappedObject) const;
   int  height(QWidget* theWrappedObject) const;
   int  heightForWidth(QWidget* theWrappedObject, int  arg__1) const;
   int  py_q_heightForWidth(QWidget* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_heightForWidth(arg__1));}
   void hideEvent(QWidget* theWrappedObject, QHideEvent*  event);
   void py_q_hideEvent(QWidget* theWrappedObject, QHideEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_hideEvent(event));}
   void py_q_initPainter(QWidget* theWrappedObject, QPainter*  painter) const{  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_initPainter(painter));}
   void inputMethodEvent(QWidget* theWrappedObject, QInputMethodEvent*  arg__1);
   void py_q_inputMethodEvent(QWidget* theWrappedObject, QInputMethodEvent*  arg__1){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_inputMethodEvent(arg__1));}
   Qt::InputMethodHints  inputMethodHints(QWidget* theWrappedObject) const;
   QVariant  inputMethodQuery(QWidget* theWrappedObject, Qt::InputMethodQuery  arg__1) const;
   QVariant  py_q_inputMethodQuery(QWidget* theWrappedObject, Qt::InputMethodQuery  arg__1) const{  return (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_inputMethodQuery(arg__1));}
   void insertAction(QWidget* theWrappedObject, QAction*  before, QAction*  action);
   void insertActions(QWidget* theWrappedObject, QAction*  before, QList<QAction* >  actions);
   bool  isActiveWindow(QWidget* theWrappedObject) const;
   bool  isAncestorOf(QWidget* theWrappedObject, const QWidget*  child) const;
   bool  isEnabled(QWidget* theWrappedObject) const;
   bool  isEnabledTo(QWidget* theWrappedObject, const QWidget*  arg__1) const;
   bool  isFullScreen(QWidget* theWrappedObject) const;
   bool  isHidden(QWidget* theWrappedObject) const;
   bool  isLeftToRight(QWidget* theWrappedObject) const;
   bool  isMaximized(QWidget* theWrappedObject) const;
   bool  isMinimized(QWidget* theWrappedObject) const;
   bool  isModal(QWidget* theWrappedObject) const;
   bool  isRightToLeft(QWidget* theWrappedObject) const;
   bool  isVisible(QWidget* theWrappedObject) const;
   bool  isVisibleTo(QWidget* theWrappedObject, const QWidget*  arg__1) const;
   bool  isWindow(QWidget* theWrappedObject) const;
   bool  isWindowModified(QWidget* theWrappedObject) const;
   void keyPressEvent(QWidget* theWrappedObject, QKeyEvent*  event);
   void py_q_keyPressEvent(QWidget* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_keyPressEvent(event));}
   void keyReleaseEvent(QWidget* theWrappedObject, QKeyEvent*  event);
   void py_q_keyReleaseEvent(QWidget* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_keyReleaseEvent(event));}
   QWidget*  static_QWidget_keyboardGrabber();
   QLayout*  layout(QWidget* theWrappedObject) const;
   Qt::LayoutDirection  layoutDirection(QWidget* theWrappedObject) const;
   void leaveEvent(QWidget* theWrappedObject, QEvent*  event);
   void py_q_leaveEvent(QWidget* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_leaveEvent(event));}
   QLocale  locale(QWidget* theWrappedObject) const;
   QPoint  mapFrom(QWidget* theWrappedObject, const QWidget*  arg__1, const QPoint&  arg__2) const;
   QPoint  mapFromGlobal(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   QPoint  mapFromParent(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   QPoint  mapTo(QWidget* theWrappedObject, const QWidget*  arg__1, const QPoint&  arg__2) const;
   QPoint  mapToGlobal(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   QPoint  mapToParent(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   QRegion  mask(QWidget* theWrappedObject) const;
   int  maximumHeight(QWidget* theWrappedObject) const;
   QSize  maximumSize(QWidget* theWrappedObject) const;
   int  maximumWidth(QWidget* theWrappedObject) const;
   int  py_q_metric(QWidget* theWrappedObject, QPaintDevice::PaintDeviceMetric  arg__1) const{  return (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_metric(arg__1));}
   int  minimumHeight(QWidget* theWrappedObject) const;
   QSize  minimumSize(QWidget* theWrappedObject) const;
   QSize  minimumSizeHint(QWidget* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_minimumSizeHint());}
   int  minimumWidth(QWidget* theWrappedObject) const;
   void mouseDoubleClickEvent(QWidget* theWrappedObject, QMouseEvent*  event);
   void py_q_mouseDoubleClickEvent(QWidget* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_mouseDoubleClickEvent(event));}
   QWidget*  static_QWidget_mouseGrabber();
   void mouseMoveEvent(QWidget* theWrappedObject, QMouseEvent*  event);
   void py_q_mouseMoveEvent(QWidget* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_mouseMoveEvent(event));}
   void mousePressEvent(QWidget* theWrappedObject, QMouseEvent*  event);
   void py_q_mousePressEvent(QWidget* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_mousePressEvent(event));}
   void mouseReleaseEvent(QWidget* theWrappedObject, QMouseEvent*  event);
   void py_q_mouseReleaseEvent(QWidget* theWrappedObject, QMouseEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_mouseReleaseEvent(event));}
   void move(QWidget* theWrappedObject, const QPoint&  arg__1);
   void move(QWidget* theWrappedObject, int  x, int  y);
   void moveEvent(QWidget* theWrappedObject, QMoveEvent*  event);
   void py_q_moveEvent(QWidget* theWrappedObject, QMoveEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_moveEvent(event));}
   bool  nativeEvent(QWidget* theWrappedObject, const QByteArray&  eventType, void*  message, long*  result);
   bool  py_q_nativeEvent(QWidget* theWrappedObject, const QByteArray&  eventType, void*  message, long*  result){  return (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_nativeEvent(eventType, message, result));}
   QWidget*  nativeParentWidget(QWidget* theWrappedObject) const;
   QWidget*  nextInFocusChain(QWidget* theWrappedObject) const;
   QRect  normalGeometry(QWidget* theWrappedObject) const;
   void overrideWindowFlags(QWidget* theWrappedObject, Qt::WindowFlags  type);
   void overrideWindowState(QWidget* theWrappedObject, Qt::WindowStates  state);
   QPaintEngine*  py_q_paintEngine(QWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_paintEngine());}
   void paintEvent(QWidget* theWrappedObject, QPaintEvent*  event);
   void py_q_paintEvent(QWidget* theWrappedObject, QPaintEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_paintEvent(event));}
   const QPalette*  palette(QWidget* theWrappedObject) const;
   QWidget*  parentWidget(QWidget* theWrappedObject) const;
   QPoint  pos(QWidget* theWrappedObject) const;
   QWidget*  previousInFocusChain(QWidget* theWrappedObject) const;
   QRect  rect(QWidget* theWrappedObject) const;
   QPaintDevice*  py_q_redirected(QWidget* theWrappedObject, QPoint*  offset) const{  return (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_redirected(offset));}
   void releaseKeyboard(QWidget* theWrappedObject);
   void releaseMouse(QWidget* theWrappedObject);
   void releaseShortcut(QWidget* theWrappedObject, int  id);
   void removeAction(QWidget* theWrappedObject, QAction*  action);
   void render(QWidget* theWrappedObject, QPaintDevice*  target, const QPoint&  targetOffset = QPoint(), const QRegion&  sourceRegion = QRegion(), QWidget::RenderFlags  renderFlags = QWidget::RenderFlags(DrawWindowBackground | DrawChildren));
   void render(QWidget* theWrappedObject, QPainter*  painter, const QPoint&  targetOffset = QPoint(), const QRegion&  sourceRegion = QRegion(), QWidget::RenderFlags  renderFlags = QWidget::RenderFlags(DrawWindowBackground | DrawChildren));
   void repaint(QWidget* theWrappedObject, const QRect&  arg__1);
   void repaint(QWidget* theWrappedObject, const QRegion&  arg__1);
   void repaint(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   void resize(QWidget* theWrappedObject, const QSize&  arg__1);
   void resize(QWidget* theWrappedObject, int  w, int  h);
   void resizeEvent(QWidget* theWrappedObject, QResizeEvent*  event);
   void py_q_resizeEvent(QWidget* theWrappedObject, QResizeEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_resizeEvent(event));}
   bool  restoreGeometry(QWidget* theWrappedObject, const QByteArray&  geometry);
   QByteArray  saveGeometry(QWidget* theWrappedObject) const;
   QScreen*  screen(QWidget* theWrappedObject) const;
   void scroll(QWidget* theWrappedObject, int  dx, int  dy);
   void scroll(QWidget* theWrappedObject, int  dx, int  dy, const QRect&  arg__3);
   void setAcceptDrops(QWidget* theWrappedObject, bool  on);
   void setAccessibleDescription(QWidget* theWrappedObject, const QString&  description);
   void setAccessibleName(QWidget* theWrappedObject, const QString&  name);
   void setAttribute(QWidget* theWrappedObject, Qt::WidgetAttribute  arg__1, bool  on = true);
   void setAutoFillBackground(QWidget* theWrappedObject, bool  enabled);
   void setBackgroundRole(QWidget* theWrappedObject, QPalette::ColorRole  arg__1);
   void setBaseSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void setBaseSize(QWidget* theWrappedObject, int  basew, int  baseh);
   void setContentsMargins(QWidget* theWrappedObject, const QMargins&  margins);
   void setContentsMargins(QWidget* theWrappedObject, int  left, int  top, int  right, int  bottom);
   void setContextMenuPolicy(QWidget* theWrappedObject, Qt::ContextMenuPolicy  policy);
   void setCursor(QWidget* theWrappedObject, const QCursor&  arg__1);
   void setFixedHeight(QWidget* theWrappedObject, int  h);
   void setFixedSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void setFixedSize(QWidget* theWrappedObject, int  w, int  h);
   void setFixedWidth(QWidget* theWrappedObject, int  w);
   void setFocus(QWidget* theWrappedObject, Qt::FocusReason  reason);
   void setFocusPolicy(QWidget* theWrappedObject, Qt::FocusPolicy  policy);
   void setFocusProxy(QWidget* theWrappedObject, QWidget*  arg__1);
   void setFont(QWidget* theWrappedObject, const QFont&  arg__1);
   void setForegroundRole(QWidget* theWrappedObject, QPalette::ColorRole  arg__1);
   void setGeometry(QWidget* theWrappedObject, const QRect&  arg__1);
   void setGeometry(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   void setGraphicsEffect(QWidget* theWrappedObject, QGraphicsEffect*  effect);
   void setInputMethodHints(QWidget* theWrappedObject, Qt::InputMethodHints  hints);
   void setLayout(QWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QLayout* >  arg__1);
   void setLayoutDirection(QWidget* theWrappedObject, Qt::LayoutDirection  direction);
   void setLocale(QWidget* theWrappedObject, const QLocale&  locale);
   void setMask(QWidget* theWrappedObject, const QBitmap&  arg__1);
   void setMask(QWidget* theWrappedObject, const QRegion&  arg__1);
   void setMaximumHeight(QWidget* theWrappedObject, int  maxh);
   void setMaximumSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void setMaximumSize(QWidget* theWrappedObject, int  maxw, int  maxh);
   void setMaximumWidth(QWidget* theWrappedObject, int  maxw);
   void setMinimumHeight(QWidget* theWrappedObject, int  minh);
   void setMinimumSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void setMinimumSize(QWidget* theWrappedObject, int  minw, int  minh);
   void setMinimumWidth(QWidget* theWrappedObject, int  minw);
   void setMouseTracking(QWidget* theWrappedObject, bool  enable);
   void setPalette(QWidget* theWrappedObject, const QPalette&  arg__1);
   void setParent(QWidget* theWrappedObject, PythonQtNewOwnerOfThis<QWidget* >  parent);
   void setParent(QWidget* theWrappedObject, PythonQtNewOwnerOfThis<QWidget* >  parent, Qt::WindowFlags  f);
   void setShortcutAutoRepeat(QWidget* theWrappedObject, int  id, bool  enable = true);
   void setShortcutEnabled(QWidget* theWrappedObject, int  id, bool  enable = true);
   void setSizeIncrement(QWidget* theWrappedObject, const QSize&  arg__1);
   void setSizeIncrement(QWidget* theWrappedObject, int  w, int  h);
   void setSizePolicy(QWidget* theWrappedObject, QSizePolicy  arg__1);
   void setSizePolicy(QWidget* theWrappedObject, QSizePolicy::Policy  horizontal, QSizePolicy::Policy  vertical);
   void setStatusTip(QWidget* theWrappedObject, const QString&  arg__1);
   void setStyle(QWidget* theWrappedObject, QStyle*  arg__1);
   void static_QWidget_setTabOrder(QWidget*  arg__1, QWidget*  arg__2);
   void setTabletTracking(QWidget* theWrappedObject, bool  enable);
   void setToolTip(QWidget* theWrappedObject, const QString&  arg__1);
   void setToolTipDuration(QWidget* theWrappedObject, int  msec);
   void setUpdatesEnabled(QWidget* theWrappedObject, bool  enable);
   void py_q_setVisible(QWidget* theWrappedObject, bool  visible){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_setVisible(visible));}
   void setWhatsThis(QWidget* theWrappedObject, const QString&  arg__1);
   void setWindowFilePath(QWidget* theWrappedObject, const QString&  filePath);
   void setWindowFlag(QWidget* theWrappedObject, Qt::WindowType  arg__1, bool  on = true);
   void setWindowFlags(QWidget* theWrappedObject, Qt::WindowFlags  type);
   void setWindowIcon(QWidget* theWrappedObject, const QIcon&  icon);
   void setWindowIconText(QWidget* theWrappedObject, const QString&  arg__1);
   void setWindowModality(QWidget* theWrappedObject, Qt::WindowModality  windowModality);
   void setWindowOpacity(QWidget* theWrappedObject, qreal  level);
   void setWindowRole(QWidget* theWrappedObject, const QString&  arg__1);
   void setWindowState(QWidget* theWrappedObject, Qt::WindowStates  state);
   QPainter*  py_q_sharedPainter(QWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_sharedPainter());}
   void showEvent(QWidget* theWrappedObject, QShowEvent*  event);
   void py_q_showEvent(QWidget* theWrappedObject, QShowEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_showEvent(event));}
   QSize  size(QWidget* theWrappedObject) const;
   QSize  sizeHint(QWidget* theWrappedObject) const;
   QSize  py_q_sizeHint(QWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_sizeHint());}
   QSize  sizeIncrement(QWidget* theWrappedObject) const;
   QSizePolicy  sizePolicy(QWidget* theWrappedObject) const;
   void stackUnder(QWidget* theWrappedObject, QWidget*  arg__1);
   QString  statusTip(QWidget* theWrappedObject) const;
   QStyle*  style(QWidget* theWrappedObject) const;
   QString  styleSheet(QWidget* theWrappedObject) const;
   void tabletEvent(QWidget* theWrappedObject, QTabletEvent*  event);
   void py_q_tabletEvent(QWidget* theWrappedObject, QTabletEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_tabletEvent(event));}
   bool  testAttribute(QWidget* theWrappedObject, Qt::WidgetAttribute  arg__1) const;
   QString  toolTip(QWidget* theWrappedObject) const;
   int  toolTipDuration(QWidget* theWrappedObject) const;
   bool  underMouse(QWidget* theWrappedObject) const;
   void ungrabGesture(QWidget* theWrappedObject, Qt::GestureType  type);
   void unsetCursor(QWidget* theWrappedObject);
   void unsetLayoutDirection(QWidget* theWrappedObject);
   void unsetLocale(QWidget* theWrappedObject);
   void update(QWidget* theWrappedObject, const QRect&  arg__1);
   void update(QWidget* theWrappedObject, const QRegion&  arg__1);
   void update(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   void updateGeometry(QWidget* theWrappedObject);
   bool  updatesEnabled(QWidget* theWrappedObject) const;
   QRegion  visibleRegion(QWidget* theWrappedObject) const;
   QString  whatsThis(QWidget* theWrappedObject) const;
   void wheelEvent(QWidget* theWrappedObject, QWheelEvent*  event);
   void py_q_wheelEvent(QWidget* theWrappedObject, QWheelEvent*  event){  (((PythonQtPublicPromoter_QWidget*)theWrappedObject)->py_q_wheelEvent(event));}
   int  width(QWidget* theWrappedObject) const;
   WId  winId(QWidget* theWrappedObject) const;
   QWidget*  window(QWidget* theWrappedObject) const;
   QString  windowFilePath(QWidget* theWrappedObject) const;
   Qt::WindowFlags  windowFlags(QWidget* theWrappedObject) const;
   QWindow*  windowHandle(QWidget* theWrappedObject) const;
   QIcon  windowIcon(QWidget* theWrappedObject) const;
   QString  windowIconText(QWidget* theWrappedObject) const;
   Qt::WindowModality  windowModality(QWidget* theWrappedObject) const;
   qreal  windowOpacity(QWidget* theWrappedObject) const;
   QString  windowRole(QWidget* theWrappedObject) const;
   Qt::WindowStates  windowState(QWidget* theWrappedObject) const;
   QString  windowTitle(QWidget* theWrappedObject) const;
   Qt::WindowType  windowType(QWidget* theWrappedObject) const;
   int  x(QWidget* theWrappedObject) const;
   int  y(QWidget* theWrappedObject) const;
    QString py_toString(QWidget*);
};





class PythonQtShell_QWidgetAction : public QWidgetAction
{
public:
    PythonQtShell_QWidgetAction(QObject*  parent):QWidgetAction(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QWidgetAction() override;

void childEvent(QChildEvent*  event) override;
QWidget*  createWidget(QWidget*  parent) override;
void customEvent(QEvent*  event) override;
void deleteWidget(QWidget*  widget) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  arg__1, QEvent*  arg__2) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWidgetAction : public QWidgetAction
{ public:
inline QWidget*  promoted_createWidget(QWidget*  parent) { return this->createWidget(parent); }
inline QList<QWidget* >  promoted_createdWidgets() const { return this->createdWidgets(); }
inline void promoted_deleteWidget(QWidget*  widget) { this->deleteWidget(widget); }
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return this->eventFilter(arg__1, arg__2); }
inline QWidget*  py_q_createWidget(QWidget*  parent) { return QWidgetAction::createWidget(parent); }
inline void py_q_deleteWidget(QWidget*  widget) { QWidgetAction::deleteWidget(widget); }
inline bool  py_q_event(QEvent*  arg__1) { return QWidgetAction::event(arg__1); }
inline bool  py_q_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QWidgetAction::eventFilter(arg__1, arg__2); }
};

class PythonQtWrapper_QWidgetAction : public QObject
{ Q_OBJECT
public:
public slots:
QWidgetAction* new_QWidgetAction(QObject*  parent);
void delete_QWidgetAction(QWidgetAction* obj) { delete obj; }
   QWidget*  createWidget(QWidgetAction* theWrappedObject, QWidget*  parent);
   QWidget*  py_q_createWidget(QWidgetAction* theWrappedObject, QWidget*  parent){  return (((PythonQtPublicPromoter_QWidgetAction*)theWrappedObject)->py_q_createWidget(parent));}
   QList<QWidget* >  createdWidgets(QWidgetAction* theWrappedObject) const;
   QWidget*  defaultWidget(QWidgetAction* theWrappedObject) const;
   void deleteWidget(QWidgetAction* theWrappedObject, QWidget*  widget);
   void py_q_deleteWidget(QWidgetAction* theWrappedObject, QWidget*  widget){  (((PythonQtPublicPromoter_QWidgetAction*)theWrappedObject)->py_q_deleteWidget(widget));}
   bool  py_q_event(QWidgetAction* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QWidgetAction*)theWrappedObject)->py_q_event(arg__1));}
   bool  py_q_eventFilter(QWidgetAction* theWrappedObject, QObject*  arg__1, QEvent*  arg__2){  return (((PythonQtPublicPromoter_QWidgetAction*)theWrappedObject)->py_q_eventFilter(arg__1, arg__2));}
   void releaseWidget(QWidgetAction* theWrappedObject, QWidget*  widget);
   QWidget*  requestWidget(QWidgetAction* theWrappedObject, QWidget*  parent);
   void setDefaultWidget(QWidgetAction* theWrappedObject, QWidget*  w);
};





class PythonQtShell_QWidgetItem : public QWidgetItem
{
public:
    PythonQtShell_QWidgetItem(QWidget*  w):QWidgetItem(w),_wrapper(nullptr) {};

   ~PythonQtShell_QWidgetItem() override;

QSizePolicy::ControlTypes  controlTypes() const override;
Qt::Orientations  expandingDirections() const override;
QRect  geometry() const override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void invalidate() override;
bool  isEmpty() const override;
QLayout*  layout() override;
QSize  maximumSize() const override;
int  minimumHeightForWidth(int  arg__1) const override;
QSize  minimumSize() const override;
void setGeometry(const QRect&  arg__1) override;
QSize  sizeHint() const override;
QSpacerItem*  spacerItem() override;
QWidget*  widget() override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWidgetItem : public QWidgetItem
{ public:
inline QSizePolicy::ControlTypes  py_q_controlTypes() const { return QWidgetItem::controlTypes(); }
inline Qt::Orientations  py_q_expandingDirections() const { return QWidgetItem::expandingDirections(); }
inline QRect  py_q_geometry() const { return QWidgetItem::geometry(); }
inline bool  py_q_hasHeightForWidth() const { return QWidgetItem::hasHeightForWidth(); }
inline int  py_q_heightForWidth(int  arg__1) const { return QWidgetItem::heightForWidth(arg__1); }
inline bool  py_q_isEmpty() const { return QWidgetItem::isEmpty(); }
inline QSize  py_q_maximumSize() const { return QWidgetItem::maximumSize(); }
inline QSize  py_q_minimumSize() const { return QWidgetItem::minimumSize(); }
inline void py_q_setGeometry(const QRect&  arg__1) { QWidgetItem::setGeometry(arg__1); }
inline QSize  py_q_sizeHint() const { return QWidgetItem::sizeHint(); }
inline QWidget*  py_q_widget() { return QWidgetItem::widget(); }
};

class PythonQtWrapper_QWidgetItem : public QObject
{ Q_OBJECT
public:
public slots:
QWidgetItem* new_QWidgetItem(QWidget*  w);
void delete_QWidgetItem(QWidgetItem* obj) { delete obj; }
   QSizePolicy::ControlTypes  py_q_controlTypes(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_controlTypes());}
   Qt::Orientations  py_q_expandingDirections(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_expandingDirections());}
   QRect  py_q_geometry(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_geometry());}
   bool  py_q_hasHeightForWidth(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_hasHeightForWidth());}
   int  py_q_heightForWidth(QWidgetItem* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_heightForWidth(arg__1));}
   bool  py_q_isEmpty(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_isEmpty());}
   QSize  py_q_maximumSize(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_maximumSize());}
   QSize  py_q_minimumSize(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_minimumSize());}
   void py_q_setGeometry(QWidgetItem* theWrappedObject, const QRect&  arg__1){  (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_setGeometry(arg__1));}
   QSize  py_q_sizeHint(QWidgetItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_sizeHint());}
   QWidget*  py_q_widget(QWidgetItem* theWrappedObject){  return (((PythonQtPublicPromoter_QWidgetItem*)theWrappedObject)->py_q_widget());}
    bool __nonzero__(QWidgetItem* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QWindow : public QWindow
{
public:
    PythonQtShell_QWindow(QScreen*  screen = nullptr):QWindow(screen),_wrapper(nullptr) {};
    PythonQtShell_QWindow(QWindow*  parent):QWindow(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QWindow() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void exposeEvent(QExposeEvent*  arg__1) override;
void focusInEvent(QFocusEvent*  arg__1) override;
QObject*  focusObject() const override;
void focusOutEvent(QFocusEvent*  arg__1) override;
QSurfaceFormat  format() const override;
void hideEvent(QHideEvent*  arg__1) override;
void keyPressEvent(QKeyEvent*  arg__1) override;
void keyReleaseEvent(QKeyEvent*  arg__1) override;
void mouseDoubleClickEvent(QMouseEvent*  arg__1) override;
void mouseMoveEvent(QMouseEvent*  arg__1) override;
void mousePressEvent(QMouseEvent*  arg__1) override;
void mouseReleaseEvent(QMouseEvent*  arg__1) override;
void moveEvent(QMoveEvent*  arg__1) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
void resizeEvent(QResizeEvent*  arg__1) override;
void showEvent(QShowEvent*  arg__1) override;
QSize  size() const override;
QSurface::SurfaceType  surfaceType() const override;
void tabletEvent(QTabletEvent*  arg__1) override;
void timerEvent(QTimerEvent*  event) override;
void touchEvent(QTouchEvent*  arg__1) override;
void wheelEvent(QWheelEvent*  arg__1) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWindow : public QWindow
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline void promoted_exposeEvent(QExposeEvent*  arg__1) { this->exposeEvent(arg__1); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { this->focusInEvent(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { this->focusOutEvent(arg__1); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { this->hideEvent(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { this->keyPressEvent(arg__1); }
inline void promoted_keyReleaseEvent(QKeyEvent*  arg__1) { this->keyReleaseEvent(arg__1); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  arg__1) { this->mouseDoubleClickEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { this->mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { this->mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { this->mouseReleaseEvent(arg__1); }
inline void promoted_moveEvent(QMoveEvent*  arg__1) { this->moveEvent(arg__1); }
inline bool  promoted_nativeEvent(const QByteArray&  eventType, void*  message, long*  result) { return this->nativeEvent(eventType, message, result); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { this->resizeEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { this->showEvent(arg__1); }
inline void promoted_tabletEvent(QTabletEvent*  arg__1) { this->tabletEvent(arg__1); }
inline void promoted_touchEvent(QTouchEvent*  arg__1) { this->touchEvent(arg__1); }
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { this->wheelEvent(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QWindow::event(arg__1); }
inline void py_q_exposeEvent(QExposeEvent*  arg__1) { QWindow::exposeEvent(arg__1); }
inline void py_q_focusInEvent(QFocusEvent*  arg__1) { QWindow::focusInEvent(arg__1); }
inline QObject*  py_q_focusObject() const { return QWindow::focusObject(); }
inline void py_q_focusOutEvent(QFocusEvent*  arg__1) { QWindow::focusOutEvent(arg__1); }
inline QSurfaceFormat  py_q_format() const { return QWindow::format(); }
inline void py_q_hideEvent(QHideEvent*  arg__1) { QWindow::hideEvent(arg__1); }
inline void py_q_keyPressEvent(QKeyEvent*  arg__1) { QWindow::keyPressEvent(arg__1); }
inline void py_q_keyReleaseEvent(QKeyEvent*  arg__1) { QWindow::keyReleaseEvent(arg__1); }
inline void py_q_mouseDoubleClickEvent(QMouseEvent*  arg__1) { QWindow::mouseDoubleClickEvent(arg__1); }
inline void py_q_mouseMoveEvent(QMouseEvent*  arg__1) { QWindow::mouseMoveEvent(arg__1); }
inline void py_q_mousePressEvent(QMouseEvent*  arg__1) { QWindow::mousePressEvent(arg__1); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  arg__1) { QWindow::mouseReleaseEvent(arg__1); }
inline void py_q_moveEvent(QMoveEvent*  arg__1) { QWindow::moveEvent(arg__1); }
inline bool  py_q_nativeEvent(const QByteArray&  eventType, void*  message, long*  result) { return QWindow::nativeEvent(eventType, message, result); }
inline void py_q_resizeEvent(QResizeEvent*  arg__1) { QWindow::resizeEvent(arg__1); }
inline void py_q_showEvent(QShowEvent*  arg__1) { QWindow::showEvent(arg__1); }
inline QSize  py_q_size() const { return QWindow::size(); }
inline QSurface::SurfaceType  py_q_surfaceType() const { return QWindow::surfaceType(); }
inline void py_q_tabletEvent(QTabletEvent*  arg__1) { QWindow::tabletEvent(arg__1); }
inline void py_q_touchEvent(QTouchEvent*  arg__1) { QWindow::touchEvent(arg__1); }
inline void py_q_wheelEvent(QWheelEvent*  arg__1) { QWindow::wheelEvent(arg__1); }
};

class PythonQtWrapper_QWindow : public QObject
{ Q_OBJECT
public:
public slots:
QWindow* new_QWindow(QScreen*  screen = nullptr);
QWindow* new_QWindow(QWindow*  parent);
void delete_QWindow(QWindow* obj) { delete obj; }
   QSize  baseSize(QWindow* theWrappedObject) const;
   Qt::ScreenOrientation  contentOrientation(QWindow* theWrappedObject) const;
   void create(QWindow* theWrappedObject);
   QCursor  cursor(QWindow* theWrappedObject) const;
   void destroy(QWindow* theWrappedObject);
   qreal  devicePixelRatio(QWindow* theWrappedObject) const;
   bool  py_q_event(QWindow* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_event(arg__1));}
   void exposeEvent(QWindow* theWrappedObject, QExposeEvent*  arg__1);
   void py_q_exposeEvent(QWindow* theWrappedObject, QExposeEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_exposeEvent(arg__1));}
   QString  filePath(QWindow* theWrappedObject) const;
   Qt::WindowFlags  flags(QWindow* theWrappedObject) const;
   void focusInEvent(QWindow* theWrappedObject, QFocusEvent*  arg__1);
   void py_q_focusInEvent(QWindow* theWrappedObject, QFocusEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_focusInEvent(arg__1));}
   QObject*  focusObject(QWindow* theWrappedObject) const;
   QObject*  py_q_focusObject(QWindow* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_focusObject());}
   void focusOutEvent(QWindow* theWrappedObject, QFocusEvent*  arg__1);
   void py_q_focusOutEvent(QWindow* theWrappedObject, QFocusEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_focusOutEvent(arg__1));}
   QSurfaceFormat  py_q_format(QWindow* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_format());}
   QRect  frameGeometry(QWindow* theWrappedObject) const;
   QMargins  frameMargins(QWindow* theWrappedObject) const;
   QPoint  framePosition(QWindow* theWrappedObject) const;
   QWindow*  static_QWindow_fromWinId(WId  id);
   QRect  geometry(QWindow* theWrappedObject) const;
   int  height(QWindow* theWrappedObject) const;
   void hideEvent(QWindow* theWrappedObject, QHideEvent*  arg__1);
   void py_q_hideEvent(QWindow* theWrappedObject, QHideEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_hideEvent(arg__1));}
   QIcon  icon(QWindow* theWrappedObject) const;
   bool  isActive(QWindow* theWrappedObject) const;
   bool  isAncestorOf(QWindow* theWrappedObject, const QWindow*  child, QWindow::AncestorMode  mode = QWindow::IncludeTransients) const;
   bool  isExposed(QWindow* theWrappedObject) const;
   bool  isModal(QWindow* theWrappedObject) const;
   bool  isTopLevel(QWindow* theWrappedObject) const;
   bool  isVisible(QWindow* theWrappedObject) const;
   void keyPressEvent(QWindow* theWrappedObject, QKeyEvent*  arg__1);
   void py_q_keyPressEvent(QWindow* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_keyPressEvent(arg__1));}
   void keyReleaseEvent(QWindow* theWrappedObject, QKeyEvent*  arg__1);
   void py_q_keyReleaseEvent(QWindow* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_keyReleaseEvent(arg__1));}
   QPoint  mapFromGlobal(QWindow* theWrappedObject, const QPoint&  pos) const;
   QPoint  mapToGlobal(QWindow* theWrappedObject, const QPoint&  pos) const;
   QRegion  mask(QWindow* theWrappedObject) const;
   int  maximumHeight(QWindow* theWrappedObject) const;
   QSize  maximumSize(QWindow* theWrappedObject) const;
   int  maximumWidth(QWindow* theWrappedObject) const;
   int  minimumHeight(QWindow* theWrappedObject) const;
   QSize  minimumSize(QWindow* theWrappedObject) const;
   int  minimumWidth(QWindow* theWrappedObject) const;
   Qt::WindowModality  modality(QWindow* theWrappedObject) const;
   void mouseDoubleClickEvent(QWindow* theWrappedObject, QMouseEvent*  arg__1);
   void py_q_mouseDoubleClickEvent(QWindow* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_mouseDoubleClickEvent(arg__1));}
   void mouseMoveEvent(QWindow* theWrappedObject, QMouseEvent*  arg__1);
   void py_q_mouseMoveEvent(QWindow* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_mouseMoveEvent(arg__1));}
   void mousePressEvent(QWindow* theWrappedObject, QMouseEvent*  arg__1);
   void py_q_mousePressEvent(QWindow* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_mousePressEvent(arg__1));}
   void mouseReleaseEvent(QWindow* theWrappedObject, QMouseEvent*  arg__1);
   void py_q_mouseReleaseEvent(QWindow* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_mouseReleaseEvent(arg__1));}
   void moveEvent(QWindow* theWrappedObject, QMoveEvent*  arg__1);
   void py_q_moveEvent(QWindow* theWrappedObject, QMoveEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_moveEvent(arg__1));}
   bool  nativeEvent(QWindow* theWrappedObject, const QByteArray&  eventType, void*  message, long*  result);
   bool  py_q_nativeEvent(QWindow* theWrappedObject, const QByteArray&  eventType, void*  message, long*  result){  return (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_nativeEvent(eventType, message, result));}
   qreal  opacity(QWindow* theWrappedObject) const;
   QWindow*  parent(QWindow* theWrappedObject) const;
   QWindow*  parent(QWindow* theWrappedObject, QWindow::AncestorMode  mode) const;
   QPoint  position(QWindow* theWrappedObject) const;
   void reportContentOrientationChange(QWindow* theWrappedObject, Qt::ScreenOrientation  orientation);
   QSurfaceFormat  requestedFormat(QWindow* theWrappedObject) const;
   void resize(QWindow* theWrappedObject, const QSize&  newSize);
   void resize(QWindow* theWrappedObject, int  w, int  h);
   void resizeEvent(QWindow* theWrappedObject, QResizeEvent*  arg__1);
   void py_q_resizeEvent(QWindow* theWrappedObject, QResizeEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_resizeEvent(arg__1));}
   QScreen*  screen(QWindow* theWrappedObject) const;
   void setBaseSize(QWindow* theWrappedObject, const QSize&  size);
   void setCursor(QWindow* theWrappedObject, const QCursor&  arg__1);
   void setFilePath(QWindow* theWrappedObject, const QString&  filePath);
   void setFlag(QWindow* theWrappedObject, Qt::WindowType  arg__1, bool  on = true);
   void setFlags(QWindow* theWrappedObject, Qt::WindowFlags  flags);
   void setFormat(QWindow* theWrappedObject, const QSurfaceFormat&  format);
   void setFramePosition(QWindow* theWrappedObject, const QPoint&  point);
   void setIcon(QWindow* theWrappedObject, const QIcon&  icon);
   bool  setKeyboardGrabEnabled(QWindow* theWrappedObject, bool  grab);
   void setMask(QWindow* theWrappedObject, const QRegion&  region);
   void setMaximumSize(QWindow* theWrappedObject, const QSize&  size);
   void setMinimumSize(QWindow* theWrappedObject, const QSize&  size);
   void setModality(QWindow* theWrappedObject, Qt::WindowModality  modality);
   bool  setMouseGrabEnabled(QWindow* theWrappedObject, bool  grab);
   void setOpacity(QWindow* theWrappedObject, qreal  level);
   void setParent(QWindow* theWrappedObject, QWindow*  parent);
   void setPosition(QWindow* theWrappedObject, const QPoint&  pt);
   void setPosition(QWindow* theWrappedObject, int  posx, int  posy);
   void setScreen(QWindow* theWrappedObject, QScreen*  screen);
   void setSizeIncrement(QWindow* theWrappedObject, const QSize&  size);
   void setSurfaceType(QWindow* theWrappedObject, QSurface::SurfaceType  surfaceType);
   void setTransientParent(QWindow* theWrappedObject, QWindow*  parent);
   void setVisibility(QWindow* theWrappedObject, QWindow::Visibility  v);
   void setWindowState(QWindow* theWrappedObject, Qt::WindowState  state);
   void setWindowStates(QWindow* theWrappedObject, Qt::WindowStates  states);
   void showEvent(QWindow* theWrappedObject, QShowEvent*  arg__1);
   void py_q_showEvent(QWindow* theWrappedObject, QShowEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_showEvent(arg__1));}
   QSize  py_q_size(QWindow* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_size());}
   QSize  sizeIncrement(QWindow* theWrappedObject) const;
   QSurface::SurfaceType  py_q_surfaceType(QWindow* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_surfaceType());}
   void tabletEvent(QWindow* theWrappedObject, QTabletEvent*  arg__1);
   void py_q_tabletEvent(QWindow* theWrappedObject, QTabletEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_tabletEvent(arg__1));}
   QString  title(QWindow* theWrappedObject) const;
   void touchEvent(QWindow* theWrappedObject, QTouchEvent*  arg__1);
   void py_q_touchEvent(QWindow* theWrappedObject, QTouchEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_touchEvent(arg__1));}
   QWindow*  transientParent(QWindow* theWrappedObject) const;
   Qt::WindowType  type(QWindow* theWrappedObject) const;
   void unsetCursor(QWindow* theWrappedObject);
   QWindow::Visibility  visibility(QWindow* theWrappedObject) const;
   void wheelEvent(QWindow* theWrappedObject, QWheelEvent*  arg__1);
   void py_q_wheelEvent(QWindow* theWrappedObject, QWheelEvent*  arg__1){  (((PythonQtPublicPromoter_QWindow*)theWrappedObject)->py_q_wheelEvent(arg__1));}
   int  width(QWindow* theWrappedObject) const;
   WId  winId(QWindow* theWrappedObject) const;
   Qt::WindowState  windowState(QWindow* theWrappedObject) const;
   Qt::WindowStates  windowStates(QWindow* theWrappedObject) const;
   int  x(QWindow* theWrappedObject) const;
   int  y(QWindow* theWrappedObject) const;
    QString py_toString(QWindow*);
};


