#ifndef CONTROL_LOGIC_GLOBAL_H
#define CONTROL_LOGIC_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CONTROL_LOGIC_LIBRARY)
#  define CONTROL_LOGICSHARED_EXPORT Q_DECL_EXPORT
#else
#  define CONTROL_LOGICSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // CONTROL_LOGIC_GLOBAL_H
