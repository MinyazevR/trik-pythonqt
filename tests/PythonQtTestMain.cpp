/*
 *
 *  Copyright (C) 2010 MeVis Medical Solutions AG All Rights Reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  Further, this software is distributed without any warranty that it is
 *  free of the rightful claim of any third person regarding infringement
 *  or the like.  Any license provided herein, whether implied or
 *  otherwise, applies only to this software file.  Patent licenses, if
 *  any, provided herein do not apply to combinations of this program with
 *  other software, or any other product whatsoever.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *  Contact information: MeVis Medical Solutions AG, Universitaetsallee 29,
 *  28359 Bremen, Germany or:
 *
 *  http://www.mevis.de
 *
 */

//----------------------------------------------------------------------------------
/*!
// \file    PythonQtTests.cpp
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQt.h"
#include "PythonQtTests.h"

#include <QCoreApplication>

int main( int argc, char **argv )
{
  QCoreApplication qapp(argc, argv);

  //if (QProcessEnvironment::systemEnvironment().contains("PYTHONQT_RUN_ONLY_MEMORY_TESTS")) {
  int failCount = 0;
  {
    PythonQtMemoryTests test;
  failCount += QTest::qExec(&test, argc, argv);
  }

  PythonQt::init(PythonQt::IgnoreSiteModule | PythonQt::RedirectStdOut);

  {
  PythonQtTestApi api;
  failCount += QTest::qExec(&api, argc, argv);
  }

  {
  PythonQtTestSignalHandler signalHandler;
  failCount += QTest::qExec(&signalHandler, argc, argv);
  }

  {
  PythonQtTestSlotCalling slotCalling;
  failCount += QTest::qExec(&slotCalling, argc, argv);
  }

  PythonQt::preCleanup();

#if PY_VERSION_HEX < 0x03060000
  Py_Finalize();
#else
  Py_FinalizeEx();
#endif

  PythonQt::cleanup();

  if (failCount) {
	std::cerr << "Tests failed: " << failCount << std::endl;
  } else {
	std::cout << "All tests passed successfully." << std::endl;
  }
  return failCount != 0 ? EXIT_FAILURE : EXIT_SUCCESS;
}

