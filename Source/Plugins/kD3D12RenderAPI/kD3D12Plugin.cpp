#include "kD3D12RenderAPIFactory.h"

namespace bs
{
	extern "C" BS_PLUGIN_EXPORT const char* getPluginName()
	{
		return bs::ct::D3D12RenderAPIFactory::SystemName;
	}
}