#############################################################################
# Makefile for building: Fake_Puzzle_Dragons
# Generated by qmake (3.1) (Qt 5.9.3)
# Project:  Fake_Puzzle_Dragons.pro
# Template: app
# Command: D:/Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/bin/qmake.exe -o Makefile Fake_Puzzle_Dragons.pro -spec win32-g++ CONFIG+=debug CONFIG+=qml_debug
#############################################################################

MAKEFILE      = Makefile

first: debug
install: debug-install
uninstall: debug-uninstall
QMAKE         = D:/Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/bin/qmake.exe
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = cp -f
INSTALL_PROGRAM = cp -f
INSTALL_DIR   = cp -f -R
QINSTALL      = D:/Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/bin/qmake.exe -install qinstall
QINSTALL_PROGRAM = D:/Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/bin/qmake.exe -install qinstall -exe
DEL_FILE      = rm -f
SYMLINK       = $(QMAKE) -install ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
SUBTARGETS    =  \
		debug \
		release


debug: FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall
release: FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall

Makefile: Fake_Puzzle_Dragons.pro ../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/win32-g++/qmake.conf ../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/spec_pre.prf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/qdevice.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/device_config.prf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/common/g++-base.conf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/common/angle.conf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/common/sanitize.conf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/common/gcc-base.conf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/qconfig.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3danimation.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3danimation_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dcore.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dcore_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dextras.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dextras_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dinput.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dinput_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dlogic.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dlogic_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dquick.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dquick_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dquickanimation.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dquickanimation_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dquickextras.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dquickextras_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dquickinput.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dquickinput_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dquickrender.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dquickrender_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dquickscene2d.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dquickscene2d_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3drender.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3drender_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_accessibility_support_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_axbase.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_axbase_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_axcontainer.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_axcontainer_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_axserver.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_axserver_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_bluetooth.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_bluetooth_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_bootstrap_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_concurrent.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_concurrent_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_core.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_core_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_dbus.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_dbus_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_designer.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_designer_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_designercomponents_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_egl_support_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_fb_support_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_fontdatabase_support_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_gamepad.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_gamepad_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_gui.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_gui_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_help.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_help_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_location.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_location_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_multimedia.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_multimedia_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_multimediawidgets.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_network.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_network_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_nfc.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_nfc_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_opengl.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_opengl_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_openglextensions.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_openglextensions_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_packetprotocol_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_platformcompositor_support_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_positioning.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_positioning_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_printsupport.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_printsupport_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_qml.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_qml_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_qmldebug_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_qmltest.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_qmltest_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_quick.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_quick_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_quickcontrols2.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_quickcontrols2_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_quickparticles_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_quicktemplates2_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_quickwidgets.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_scxml.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_scxml_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_sensors.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_sensors_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_serialbus.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_serialbus_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_serialport.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_serialport_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_sql.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_sql_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_svg.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_svg_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_testlib.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_testlib_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_texttospeech.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_texttospeech_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_theme_support_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_uiplugin.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_uitools.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_uitools_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_webchannel.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_webchannel_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_websockets.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_websockets_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_widgets.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_widgets_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_winextras.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_winextras_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_xml.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_xml_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_xmlpatterns.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/qt_functions.prf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/qt_config.prf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/win32-g++/qmake.conf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/spec_post.prf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/exclusive_builds.prf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/toolchain.prf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/default_pre.prf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/win32/default_pre.prf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/resolve_config.prf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/exclusive_builds_post.prf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/default_post.prf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/qml_debug.prf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/precompile_header.prf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/warn_on.prf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/qt.prf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/resources.prf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/moc.prf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/win32/opengl.prf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/uic.prf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/qmake_use.prf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/file_copies.prf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/win32/windows.prf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/testcase_targets.prf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/exceptions.prf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/yacc.prf \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/lex.prf \
		Fake_Puzzle_Dragons.pro \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/lib/qtmaind.prl \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/lib/Qt5MultimediaWidgets.prl \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/lib/Qt5Multimedia.prl \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/lib/Qt5Widgets.prl \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/lib/Qt5Gui.prl \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/lib/Qt5Network.prl \
		../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/lib/Qt5Core.prl
	$(QMAKE) -o Makefile Fake_Puzzle_Dragons.pro -spec win32-g++ CONFIG+=debug CONFIG+=qml_debug
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/spec_pre.prf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/qdevice.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/device_config.prf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/common/g++-base.conf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/common/angle.conf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/common/sanitize.conf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/common/gcc-base.conf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/qconfig.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3danimation.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3danimation_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dcore.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dcore_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dextras.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dextras_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dinput.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dinput_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dlogic.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dlogic_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dquick.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dquick_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dquickanimation.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dquickanimation_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dquickextras.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dquickextras_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dquickinput.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dquickinput_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dquickrender.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dquickrender_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dquickscene2d.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3dquickscene2d_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3drender.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_3drender_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_accessibility_support_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_axbase.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_axbase_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_axcontainer.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_axcontainer_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_axserver.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_axserver_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_bluetooth.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_bluetooth_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_bootstrap_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_concurrent.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_concurrent_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_core.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_core_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_dbus.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_dbus_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_designer.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_designer_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_designercomponents_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_devicediscovery_support_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_egl_support_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_fb_support_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_fontdatabase_support_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_gamepad.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_gamepad_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_gui.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_gui_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_help.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_help_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_location.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_location_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_multimedia.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_multimedia_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_multimediawidgets.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_network.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_network_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_nfc.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_nfc_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_opengl.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_opengl_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_openglextensions.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_openglextensions_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_packetprotocol_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_platformcompositor_support_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_positioning.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_positioning_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_printsupport.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_printsupport_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_qml.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_qml_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_qmldebug_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_qmldevtools_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_qmltest.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_qmltest_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_quick.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_quick_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_quickcontrols2.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_quickcontrols2_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_quickparticles_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_quicktemplates2_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_quickwidgets.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_quickwidgets_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_scxml.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_scxml_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_sensors.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_sensors_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_serialbus.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_serialbus_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_serialport.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_serialport_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_sql.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_sql_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_svg.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_svg_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_testlib.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_testlib_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_texttospeech.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_texttospeech_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_theme_support_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_uiplugin.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_uitools.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_uitools_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_webchannel.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_webchannel_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_websockets.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_websockets_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_widgets.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_widgets_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_winextras.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_winextras_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_xml.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_xml_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_xmlpatterns.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/qt_functions.prf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/qt_config.prf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/win32-g++/qmake.conf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/spec_post.prf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/exclusive_builds.prf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/toolchain.prf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/default_pre.prf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/win32/default_pre.prf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/resolve_config.prf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/exclusive_builds_post.prf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/default_post.prf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/qml_debug.prf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/precompile_header.prf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/warn_on.prf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/qt.prf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/resources.prf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/moc.prf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/win32/opengl.prf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/uic.prf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/qmake_use.prf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/file_copies.prf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/win32/windows.prf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/testcase_targets.prf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/exceptions.prf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/yacc.prf:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/mkspecs/features/lex.prf:
Fake_Puzzle_Dragons.pro:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/lib/qtmaind.prl:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/lib/Qt5MultimediaWidgets.prl:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/lib/Qt5Multimedia.prl:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/lib/Qt5Widgets.prl:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/lib/Qt5Gui.prl:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/lib/Qt5Network.prl:
../../../Programs/Coding_Tools/Qt/5.9.3/5.9.3/mingw53_32/lib/Qt5Core.prl:
qmake: FORCE
	@$(QMAKE) -o Makefile Fake_Puzzle_Dragons.pro -spec win32-g++ CONFIG+=debug CONFIG+=qml_debug

qmake_all: FORCE

make_first: debug-make_first release-make_first  FORCE
all: debug-all release-all  FORCE
clean: debug-clean release-clean  FORCE
distclean: debug-distclean release-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) .qmake.stash

debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
mocclean: debug-mocclean release-mocclean

debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
mocables: debug-mocables release-mocables

check: first

benchmark: first
FORCE:

$(MAKEFILE).Debug: Makefile
$(MAKEFILE).Release: Makefile