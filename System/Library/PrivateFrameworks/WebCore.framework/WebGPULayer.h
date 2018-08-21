/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CAMetalLayer.h>

@interface WebGPULayer : CAMetalLayer {

	GPUDevice* _context;
	float _devicePixelRatio;

}

@property (assign,nonatomic) GPUDevice* context;              //@synthesize context=_context - In the implementation block
-(id)initWithGPUDevice:(GPUDevice*)arg1 ;
-(CGImageRef)copyImageSnapshotWithColorSpace:(CGColorSpaceRef)arg1 ;
-(GPUDevice*)context;
-(void)setContext:(GPUDevice*)arg1 ;
-(void)display;
@end

