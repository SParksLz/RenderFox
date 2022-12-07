// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GlobalShader.h"
#include "Shader.h"
#include "ShaderParameterStruct.h"
#include "ShaderParameterMacros.h"


/**
 * 
 */

struct FMyShaderTestParameters
{
	FVector2D ViewportSize;
	FVector4 Hello;
	float world;
	FVector FooBarArray[16];
	

	FRHITexture* BlueNoiseTexture = nullptr;			//256
	FRHISamplerState* blueNoiseSampler = nullptr;		//24

	FRHITexture* SceneColorTexture = nullptr;			//256
	FRHISamplerState* SceneColorSampler = nullptr;		//24

	FRHIUnorderedAccessView* SceneColorOutput = nullptr; //56

	BEGIN_SHADER_PARAMETER_STRUCT(FMyShaderTestParameters, )
		SHADER_PARAMETER(FVector2D, ViewportSize)
		
	END_SHADER_PARAMETER_STRUCT()
	

	
	
};




class MyShaderTest : public FGlobalShader
{
	DECLARE_GLOBAL_SHADER(MyShaderTest);  // --> DECLARE_SHADER_TYPE(ShaderClass, Global); use this to define shader type



		
	

	
	
public:
	MyShaderTest();

};
