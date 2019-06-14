#include "kD3D12RenderAPI.h"
#include "kD3D12RenderAPIFactory.h"
#include "RenderAPI/BsGpuParamDesc.h"



bs::ct::D3D12RenderAPI::D3D12RenderAPI():
	m_renderAPIInfo(0.0f, 0.0f, 0.0f, 1.0f, {}, {})
{
}

bs::ct::D3D12RenderAPI::~D3D12RenderAPI()
{
}

void bs::ct::D3D12RenderAPI::initialize()
{
}

const bs::StringID & bs::ct::D3D12RenderAPI::getName() const
{
	return bs::ct::D3D12RenderAPIFactory::SystemName;

}

void bs::ct::D3D12RenderAPI::setGpuParams(const SPtr<GpuParams>& gpuParams, const SPtr<CommandBuffer>& commandBuffer  )
{
}

void bs::ct::D3D12RenderAPI::setGraphicsPipeline(const SPtr<GraphicsPipelineState>& pipelineState, const SPtr<CommandBuffer>& commandBuffer  )
{
}

void bs::ct::D3D12RenderAPI::setComputePipeline(const SPtr<ComputePipelineState>& pipelineState, const SPtr<CommandBuffer>& commandBuffer  )
{
}

void bs::ct::D3D12RenderAPI::setViewport(const Rect2 & area, const SPtr<CommandBuffer>& commandBuffer  )
{
}

void bs::ct::D3D12RenderAPI::setScissorRect(UINT32 left, UINT32 top, UINT32 right, UINT32 bottom, const SPtr<CommandBuffer>& commandBuffer  )
{
}

void bs::ct::D3D12RenderAPI::setStencilRef(UINT32 value, const SPtr<CommandBuffer>& commandBuffer  )
{
}

void bs::ct::D3D12RenderAPI::setVertexBuffers(UINT32 index, SPtr<VertexBuffer>* buffers, UINT32 numBuffers, const SPtr<CommandBuffer>& commandBuffer  )
{
}

void bs::ct::D3D12RenderAPI::setIndexBuffer(const SPtr<IndexBuffer>& buffer, const SPtr<CommandBuffer>& commandBuffer  )
{
}

void bs::ct::D3D12RenderAPI::setVertexDeclaration(const SPtr<VertexDeclaration>& vertexDeclaration, const SPtr<CommandBuffer>& commandBuffer  )
{
}

void bs::ct::D3D12RenderAPI::setDrawOperation(DrawOperationType op, const SPtr<CommandBuffer>& commandBuffer  )
{
}

void bs::ct::D3D12RenderAPI::draw(UINT32 vertexOffset, UINT32 vertexCount, UINT32 instanceCount , const SPtr<CommandBuffer>& commandBuffer  )
{
}

void bs::ct::D3D12RenderAPI::drawIndexed(UINT32 startIndex, UINT32 indexCount, UINT32 vertexOffset, UINT32 vertexCount, UINT32 instanceCount , const SPtr<CommandBuffer>& commandBuffer  )
{
}

void bs::ct::D3D12RenderAPI::dispatchCompute(UINT32 numGroupsX, UINT32 numGroupsY , UINT32 numGroupsZ , const SPtr<CommandBuffer>& commandBuffer  )
{
}

void bs::ct::D3D12RenderAPI::swapBuffers(const SPtr<RenderTarget>& target, UINT32 syncMask )
{
}

void bs::ct::D3D12RenderAPI::setRenderTarget(const SPtr<RenderTarget>& target, UINT32 readOnlyFlags , RenderSurfaceMask loadMask , const SPtr<CommandBuffer>& commandBuffer  )
{
}

void bs::ct::D3D12RenderAPI::clearRenderTarget(UINT32 buffers, const Color & color, float depth , UINT16 stencil, UINT8 targetMask , const SPtr<CommandBuffer>& commandBuffer  )
{
}

void bs::ct::D3D12RenderAPI::clearViewport(UINT32 buffers, const Color & color , float depth , UINT16 stencil, UINT8 targetMask , const SPtr<CommandBuffer>& commandBuffer  )
{
}

void bs::ct::D3D12RenderAPI::addCommands(const SPtr<CommandBuffer>& commandBuffer, const SPtr<CommandBuffer>& secondary)
{
}

void bs::ct::D3D12RenderAPI::submitCommandBuffer(const SPtr<CommandBuffer>& commandBuffer, UINT32 syncMask )
{
}

void bs::ct::D3D12RenderAPI::convertProjectionMatrix(const Matrix4 & matrix, Matrix4 & dest)
{
}

const bs::RenderAPIInfo & bs::ct::D3D12RenderAPI::getAPIInfo() const
{
	return m_renderAPIInfo;
}

bs::GpuParamBlockDesc bs::ct::D3D12RenderAPI::generateParamBlockDesc(const String & name, Vector<GpuParamDataDesc>& params)
{
	return GpuParamBlockDesc();
}
