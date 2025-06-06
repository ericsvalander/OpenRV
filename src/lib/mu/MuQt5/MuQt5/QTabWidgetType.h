//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0
//
#ifndef __MuQt5__QTabWidgetType__h__
#define __MuQt5__QTabWidgetType__h__
#include <iostream>
#include <Mu/Class.h>
#include <Mu/MuProcess.h>
#include <QtCore/QtCore>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtNetwork/QtNetwork>
#include <QtWebEngine/QtWebEngine>
#include <QtWebEngineWidgets/QtWebEngineWidgets>
#include <QtQml/QtQml>
#include <QtQuick/QtQuick>
#include <QtQuickWidgets/QtQuickWidgets>
#include <QtSvg/QtSvg>
#include <MuQt5/Bridge.h>

namespace Mu
{
    class MuQt_QTabWidget;

    //
    //  NOTE: file generated by qt2mu.py
    //

    class QTabWidgetType : public Class
    {
    public:
        typedef MuQt_QTabWidget MuQtType;
        typedef QTabWidget QtType;

        //
        //  Constructors
        //

        QTabWidgetType(Context* context, const char* name,
                       Class* superClass = 0, Class* superClass2 = 0);

        virtual ~QTabWidgetType();

        static bool isInheritable() { return true; }

        static inline ClassInstance* cachedInstance(const MuQtType*);

        //
        //  Class API
        //

        virtual void load();

        MemberFunction* _func[34];
    };

    // Inheritable object

    class MuQt_QTabWidget : public QTabWidget
    {
    public:
        virtual ~MuQt_QTabWidget();
        MuQt_QTabWidget(Pointer muobj, const CallEnvironment*, QWidget* parent);
        virtual bool hasHeightForWidth() const;
        virtual int heightForWidth(int width) const;
        virtual QSize minimumSizeHint() const;
        virtual QSize sizeHint() const;

    protected:
        virtual void tabInserted(int index);
        virtual void tabRemoved(int index);
        virtual void changeEvent(QEvent* ev);
        virtual bool event(QEvent* ev);
        virtual void keyPressEvent(QKeyEvent* e);
        virtual void paintEvent(QPaintEvent* event);
        virtual void resizeEvent(QResizeEvent* e);
        virtual void showEvent(QShowEvent* _p13);

    public:
        virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const;

    protected:
        virtual void closeEvent(QCloseEvent* event);
        virtual void contextMenuEvent(QContextMenuEvent* event);
        virtual void dragEnterEvent(QDragEnterEvent* event);
        virtual void dragLeaveEvent(QDragLeaveEvent* event);
        virtual void dragMoveEvent(QDragMoveEvent* event);
        virtual void dropEvent(QDropEvent* event);
        virtual void enterEvent(QEvent* event);
        virtual void focusInEvent(QFocusEvent* event);
        virtual bool focusNextPrevChild(bool next);
        virtual void focusOutEvent(QFocusEvent* event);
        virtual void hideEvent(QHideEvent* event);
        virtual void keyReleaseEvent(QKeyEvent* event);
        virtual void leaveEvent(QEvent* event);
        virtual void mouseDoubleClickEvent(QMouseEvent* event);
        virtual void mouseMoveEvent(QMouseEvent* event);
        virtual void mousePressEvent(QMouseEvent* event);
        virtual void mouseReleaseEvent(QMouseEvent* event);
        virtual void moveEvent(QMoveEvent* event);
        virtual void tabletEvent(QTabletEvent* event);
        virtual void wheelEvent(QWheelEvent* event);
        virtual int metric(PaintDeviceMetric m) const;

    public:
        void setTabBar_pub(QTabBar* tb) { setTabBar(tb); }

        void setTabBar_pub_parent(QTabBar* tb) { QTabWidget::setTabBar(tb); }

        void tabInserted_pub(int index) { tabInserted(index); }

        void tabInserted_pub_parent(int index)
        {
            QTabWidget::tabInserted(index);
        }

        void tabRemoved_pub(int index) { tabRemoved(index); }

        void tabRemoved_pub_parent(int index) { QTabWidget::tabRemoved(index); }

        void changeEvent_pub(QEvent* ev) { changeEvent(ev); }

        void changeEvent_pub_parent(QEvent* ev) { QTabWidget::changeEvent(ev); }

        bool event_pub(QEvent* ev) { return event(ev); }

        bool event_pub_parent(QEvent* ev) { return QTabWidget::event(ev); }

        void keyPressEvent_pub(QKeyEvent* e) { keyPressEvent(e); }

        void keyPressEvent_pub_parent(QKeyEvent* e)
        {
            QTabWidget::keyPressEvent(e);
        }

        void paintEvent_pub(QPaintEvent* event) { paintEvent(event); }

        void paintEvent_pub_parent(QPaintEvent* event)
        {
            QTabWidget::paintEvent(event);
        }

        void resizeEvent_pub(QResizeEvent* e) { resizeEvent(e); }

        void resizeEvent_pub_parent(QResizeEvent* e)
        {
            QTabWidget::resizeEvent(e);
        }

        void showEvent_pub(QShowEvent* _p13) { showEvent(_p13); }

        void showEvent_pub_parent(QShowEvent* _p13)
        {
            QTabWidget::showEvent(_p13);
        }

        void closeEvent_pub(QCloseEvent* event) { closeEvent(event); }

        void closeEvent_pub_parent(QCloseEvent* event)
        {
            QTabWidget::closeEvent(event);
        }

        void contextMenuEvent_pub(QContextMenuEvent* event)
        {
            contextMenuEvent(event);
        }

        void contextMenuEvent_pub_parent(QContextMenuEvent* event)
        {
            QTabWidget::contextMenuEvent(event);
        }

        void dragEnterEvent_pub(QDragEnterEvent* event)
        {
            dragEnterEvent(event);
        }

        void dragEnterEvent_pub_parent(QDragEnterEvent* event)
        {
            QTabWidget::dragEnterEvent(event);
        }

        void dragLeaveEvent_pub(QDragLeaveEvent* event)
        {
            dragLeaveEvent(event);
        }

        void dragLeaveEvent_pub_parent(QDragLeaveEvent* event)
        {
            QTabWidget::dragLeaveEvent(event);
        }

        void dragMoveEvent_pub(QDragMoveEvent* event) { dragMoveEvent(event); }

        void dragMoveEvent_pub_parent(QDragMoveEvent* event)
        {
            QTabWidget::dragMoveEvent(event);
        }

        void dropEvent_pub(QDropEvent* event) { dropEvent(event); }

        void dropEvent_pub_parent(QDropEvent* event)
        {
            QTabWidget::dropEvent(event);
        }

        void enterEvent_pub(QEvent* event) { enterEvent(event); }

        void enterEvent_pub_parent(QEvent* event)
        {
            QTabWidget::enterEvent(event);
        }

        void focusInEvent_pub(QFocusEvent* event) { focusInEvent(event); }

        void focusInEvent_pub_parent(QFocusEvent* event)
        {
            QTabWidget::focusInEvent(event);
        }

        bool focusNextPrevChild_pub(bool next)
        {
            return focusNextPrevChild(next);
        }

        bool focusNextPrevChild_pub_parent(bool next)
        {
            return QTabWidget::focusNextPrevChild(next);
        }

        void focusOutEvent_pub(QFocusEvent* event) { focusOutEvent(event); }

        void focusOutEvent_pub_parent(QFocusEvent* event)
        {
            QTabWidget::focusOutEvent(event);
        }

        void hideEvent_pub(QHideEvent* event) { hideEvent(event); }

        void hideEvent_pub_parent(QHideEvent* event)
        {
            QTabWidget::hideEvent(event);
        }

        void keyReleaseEvent_pub(QKeyEvent* event) { keyReleaseEvent(event); }

        void keyReleaseEvent_pub_parent(QKeyEvent* event)
        {
            QTabWidget::keyReleaseEvent(event);
        }

        void leaveEvent_pub(QEvent* event) { leaveEvent(event); }

        void leaveEvent_pub_parent(QEvent* event)
        {
            QTabWidget::leaveEvent(event);
        }

        void mouseDoubleClickEvent_pub(QMouseEvent* event)
        {
            mouseDoubleClickEvent(event);
        }

        void mouseDoubleClickEvent_pub_parent(QMouseEvent* event)
        {
            QTabWidget::mouseDoubleClickEvent(event);
        }

        void mouseMoveEvent_pub(QMouseEvent* event) { mouseMoveEvent(event); }

        void mouseMoveEvent_pub_parent(QMouseEvent* event)
        {
            QTabWidget::mouseMoveEvent(event);
        }

        void mousePressEvent_pub(QMouseEvent* event) { mousePressEvent(event); }

        void mousePressEvent_pub_parent(QMouseEvent* event)
        {
            QTabWidget::mousePressEvent(event);
        }

        void mouseReleaseEvent_pub(QMouseEvent* event)
        {
            mouseReleaseEvent(event);
        }

        void mouseReleaseEvent_pub_parent(QMouseEvent* event)
        {
            QTabWidget::mouseReleaseEvent(event);
        }

        void moveEvent_pub(QMoveEvent* event) { moveEvent(event); }

        void moveEvent_pub_parent(QMoveEvent* event)
        {
            QTabWidget::moveEvent(event);
        }

        void tabletEvent_pub(QTabletEvent* event) { tabletEvent(event); }

        void tabletEvent_pub_parent(QTabletEvent* event)
        {
            QTabWidget::tabletEvent(event);
        }

        void wheelEvent_pub(QWheelEvent* event) { wheelEvent(event); }

        void wheelEvent_pub_parent(QWheelEvent* event)
        {
            QTabWidget::wheelEvent(event);
        }

        int metric_pub(PaintDeviceMetric m) const { return metric(m); }

        int metric_pub_parent(PaintDeviceMetric m) const
        {
            return QTabWidget::metric(m);
        }

    public:
        const QTabWidgetType* _baseType;
        ClassInstance* _obj;
        const CallEnvironment* _env;
    };

    inline ClassInstance*
    QTabWidgetType::cachedInstance(const QTabWidgetType::MuQtType* obj)
    {
        return obj->_obj;
    }

} // namespace Mu

#endif // __MuQt__QTabWidgetType__h__
