#include "kD3D12RenderAPIFactory.h"
#include "kD3D12RenderAPI.h"


bs::ct::D3D12RenderAPIFactory::D3D12RenderAPIFactory()
{
}

bs::ct::D3D12RenderAPIFactory::~D3D12RenderAPIFactory()
{
}

void bs::ct::D3D12RenderAPIFactory::create()
{
	RenderAPI::startUp<D3D12RenderAPI>();
}

const char * bs::ct::D3D12RenderAPIFactory::name() const
{
	return SystemName;
}

bs::ct::D3D12RenderAPIFactory::InitOnStartUp m_initOnStartUp;

