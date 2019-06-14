#pragma once
#include "RenderAPI/BsRenderAPI.h"


namespace bs {
	namespace ct {
		class D3D12RenderAPI : public RenderAPI
		{
		public:
			D3D12RenderAPI();
			~D3D12RenderAPI();

			void initialize() override;

			// Inherited via RenderAPI
			virtual const StringID & getName() const override;
			virtual void setGpuParams(const SPtr<GpuParams>& gpuParams, const SPtr<CommandBuffer>& commandBuffer = nullptr) override;
			virtual void setGraphicsPipeline(const SPtr<GraphicsPipelineState>& pipelineState, const SPtr<CommandBuffer>& commandBuffer = nullptr) override;
			virtual void setComputePipeline(const SPtr<ComputePipelineState>& pipelineState, const SPtr<CommandBuffer>& commandBuffer = nullptr) override;
			virtual void setViewport(const Rect2 & area, const SPtr<CommandBuffer>& commandBuffer = nullptr) override;
			virtual void setScissorRect(UINT32 left, UINT32 top, UINT32 right, UINT32 bottom, const SPtr<CommandBuffer>& commandBuffer = nullptr) override;
			virtual void setStencilRef(UINT32 value, const SPtr<CommandBuffer>& commandBuffer = nullptr) override;
			virtual void setVertexBuffers(UINT32 index, SPtr<VertexBuffer>* buffers, UINT32 numBuffers, const SPtr<CommandBuffer>& commandBuffer = nullptr) override;
			virtual void setIndexBuffer(const SPtr<IndexBuffer>& buffer, const SPtr<CommandBuffer>& commandBuffer = nullptr) override;
			virtual void setVertexDeclaration(const SPtr<VertexDeclaration>& vertexDeclaration, const SPtr<CommandBuffer>& commandBuffer = nullptr) override;
			virtual void setDrawOperation(DrawOperationType op, const SPtr<CommandBuffer>& commandBuffer = nullptr) override;
			virtual void draw(UINT32 vertexOffset, UINT32 vertexCount, UINT32 instanceCount = 0, const SPtr<CommandBuffer>& commandBuffer = nullptr) override;
			virtual void drawIndexed(UINT32 startIndex, UINT32 indexCount, UINT32 vertexOffset, UINT32 vertexCount, UINT32 instanceCount = 0, const SPtr<CommandBuffer>& commandBuffer = nullptr) override;
			virtual void dispatchCompute(UINT32 numGroupsX, UINT32 numGroupsY = 1, UINT32 numGroupsZ = 1, const SPtr<CommandBuffer>& commandBuffer = nullptr) override;
			virtual void swapBuffers(const SPtr<RenderTarget>& target, UINT32 syncMask = 0xFFFFFFFF) override;
			virtual void setRenderTarget(const SPtr<RenderTarget>& target, UINT32 readOnlyFlags = 0, RenderSurfaceMask loadMask = RT_NONE, const SPtr<CommandBuffer>& commandBuffer = nullptr) override;
			virtual void clearRenderTarget(UINT32 buffers, const Color & color = Color::Black, float depth = 1.0f, UINT16 stencil = 0, UINT8 targetMask = 0xFF, const SPtr<CommandBuffer>& commandBuffer = nullptr) override;
			virtual void clearViewport(UINT32 buffers, const Color & color = Color::Black, float depth = 1.0f, UINT16 stencil = 0, UINT8 targetMask = 0xFF, const SPtr<CommandBuffer>& commandBuffer = nullptr) override;
			virtual void addCommands(const SPtr<CommandBuffer>& commandBuffer, const SPtr<CommandBuffer>& secondary) override;
			virtual void submitCommandBuffer(const SPtr<CommandBuffer>& commandBuffer, UINT32 syncMask = 0xFFFFFFFF) override;
			virtual void convertProjectionMatrix(const Matrix4 & matrix, Matrix4 & dest) override;
			virtual const RenderAPIInfo & getAPIInfo() const override;
			virtual GpuParamBlockDesc generateParamBlockDesc(const String & name, Vector<GpuParamDataDesc>& params) override;
		
		private:

			RenderAPIInfo m_renderAPIInfo;
		
		};

		
	}
}
