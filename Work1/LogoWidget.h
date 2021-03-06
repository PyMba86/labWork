///////////////////////////////////////////////////////////////////////////////
// Название:    Work1/LogoWidget.h
// Цель:        Отрисовка картинки в Widget
// Автор:       Артем Матвейчук
// Создан:      07.02.2016
// Емайл:       pymba-96@mail.ru
// Программа:   Work1 | labWork
///////////////////////////////////////////////////////////////////////////////

#ifndef LABWORK_LOGO_H
#define LABWORK_LOGO_H

#include "resource.h"
#include <vaca/vaca.h>

using namespace vaca;

namespace MyWidget {

    //Отрисовка логотипа IDB_LOGO в Widget
    class LogoWidget : public Widget {
        Image imgLogoWork;
    public:
        LogoWidget(Widget *parent)
                : Widget(parent), imgLogoWork(ResourceId(IDB_LOGO)) {
            setPreferredSize(imgLogoWork.getSize());
        }

    protected:
        virtual void onPaint(PaintEvent &ev) {
            Graphics &g = ev.getGraphics();
            g.drawImage(imgLogoWork, Point(getClientBounds().getCenter() -
                                           Point(imgLogoWork.getSize() / 2)));
        }
    };
} // namespace MyWidget
#endif //LABWORK_LOGO_H
