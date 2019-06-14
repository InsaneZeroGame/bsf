#pragma once
#include "Managers/BsRenderAPIFactory.h"
#include "Managers/BsRenderAPIManager.h"


namespace bs {
	namespace ct{

		class D3D12RenderAPIFactory : public RenderAPIFactory
		{
		public:

			static constexpr const char* SystemName = "kD3D12RenderAPI";

			D3D12RenderAPIFactory();
			~D3D12RenderAPIFactory();

			// Inherited via RenderAPIFactory
			virtual void create() override;

			virtual const char * name() const override;

			class InitOnStartUp
			{
			public:
				InitOnStartUp()
				{
					static SPtr<RenderAPIFactory> newFactory;
					if (newFactory == nullptr)
					{
						newFactory = bs_shared_ptr_new<D3D12RenderAPIFactory>();
						RenderAPIManager::instance().registerFactory(newFactory);
					}
				};
				~InitOnStartUp()
				{
				
				};
			};
			static InitOnStartUp m_initOnStartUp;
		};
	}
}
