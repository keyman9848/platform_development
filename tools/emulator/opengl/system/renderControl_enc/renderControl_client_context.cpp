// Generated Code - DO NOT EDIT !!
// generated by 'emugen'


#include <string.h>
#include "renderControl_client_context.h"


#include <stdio.h>

int renderControl_client_context_t::initDispatchByName(void *(*getProc)(const char *, void *userData), void *userData)
{
	void *ptr;

	ptr = getProc("rcGetRendererVersion", userData); set_rcGetRendererVersion((rcGetRendererVersion_client_proc_t)ptr);
	ptr = getProc("rcGetEGLVersion", userData); set_rcGetEGLVersion((rcGetEGLVersion_client_proc_t)ptr);
	ptr = getProc("rcQueryEGLString", userData); set_rcQueryEGLString((rcQueryEGLString_client_proc_t)ptr);
	ptr = getProc("rcGetGLString", userData); set_rcGetGLString((rcGetGLString_client_proc_t)ptr);
	ptr = getProc("rcGetNumConfigs", userData); set_rcGetNumConfigs((rcGetNumConfigs_client_proc_t)ptr);
	ptr = getProc("rcGetConfigs", userData); set_rcGetConfigs((rcGetConfigs_client_proc_t)ptr);
	ptr = getProc("rcChooseConfig", userData); set_rcChooseConfig((rcChooseConfig_client_proc_t)ptr);
	ptr = getProc("rcGetFBParam", userData); set_rcGetFBParam((rcGetFBParam_client_proc_t)ptr);
	ptr = getProc("rcCreateContext", userData); set_rcCreateContext((rcCreateContext_client_proc_t)ptr);
	ptr = getProc("rcDestroyContext", userData); set_rcDestroyContext((rcDestroyContext_client_proc_t)ptr);
	ptr = getProc("rcCreateWindowSurface", userData); set_rcCreateWindowSurface((rcCreateWindowSurface_client_proc_t)ptr);
	ptr = getProc("rcDestroyWindowSurface", userData); set_rcDestroyWindowSurface((rcDestroyWindowSurface_client_proc_t)ptr);
	ptr = getProc("rcCreateColorBuffer", userData); set_rcCreateColorBuffer((rcCreateColorBuffer_client_proc_t)ptr);
	ptr = getProc("rcOpenColorBuffer", userData); set_rcOpenColorBuffer((rcOpenColorBuffer_client_proc_t)ptr);
	ptr = getProc("rcCloseColorBuffer", userData); set_rcCloseColorBuffer((rcCloseColorBuffer_client_proc_t)ptr);
	ptr = getProc("rcSetWindowColorBuffer", userData); set_rcSetWindowColorBuffer((rcSetWindowColorBuffer_client_proc_t)ptr);
	ptr = getProc("rcFlushWindowColorBuffer", userData); set_rcFlushWindowColorBuffer((rcFlushWindowColorBuffer_client_proc_t)ptr);
	ptr = getProc("rcMakeCurrent", userData); set_rcMakeCurrent((rcMakeCurrent_client_proc_t)ptr);
	ptr = getProc("rcFBPost", userData); set_rcFBPost((rcFBPost_client_proc_t)ptr);
	ptr = getProc("rcFBSetSwapInterval", userData); set_rcFBSetSwapInterval((rcFBSetSwapInterval_client_proc_t)ptr);
	ptr = getProc("rcBindTexture", userData); set_rcBindTexture((rcBindTexture_client_proc_t)ptr);
	ptr = getProc("rcBindRenderbuffer", userData); set_rcBindRenderbuffer((rcBindRenderbuffer_client_proc_t)ptr);
	ptr = getProc("rcColorBufferCacheFlush", userData); set_rcColorBufferCacheFlush((rcColorBufferCacheFlush_client_proc_t)ptr);
	ptr = getProc("rcReadColorBuffer", userData); set_rcReadColorBuffer((rcReadColorBuffer_client_proc_t)ptr);
	ptr = getProc("rcUpdateColorBuffer", userData); set_rcUpdateColorBuffer((rcUpdateColorBuffer_client_proc_t)ptr);
	ptr = getProc("rcSetOrientation", userData); set_rcSetOrientation((rcSetOrientation_client_proc_t)ptr);
	return 0;
}

