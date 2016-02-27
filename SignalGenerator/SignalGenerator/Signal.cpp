// Signal.cpp : CSignal 的实现

#include "stdafx.h"
#include "Signal.h"


// CSignal

STDMETHODIMP CSignal::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_ISignal
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}


STDMETHODIMP CSignal::test(LONG n, LONG* sum)
{
    AFX_MANAGE_STATE(AfxGetStaticModuleState());

    // TODO: 在此添加实现代码
    *sum = 0;
    if (n < 0) {
        std::cout << "Illigal Input" << std::endl;
    }
    for (int i = 0; i < n; ++i)
    {
        *sum += i;
    }
    return S_OK;
}
