/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWFilterRenderer.h>

@protocol OS_dispatch_queue;
@class NSObject, CIContext, NSString;

@interface BWCoreImageFilterRenderer : NSObject <BWFilterRenderer> {

	BOOL _usingDepth;
	NSObject*<OS_dispatch_queue> _renderingQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	CIContext* _renderingQueueContext;

}

@property (nonatomic,readonly) BOOL usingDepth;                              //@synthesize usingDepth=_usingDepth - In the implementation block
@property (nonatomic,retain) CIContext * renderingQueueContext;              //@synthesize renderingQueueContext=_renderingQueueContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,readonly) short type; 
@property (nonatomic,readonly) BOOL supportsAnimation; 
@property (nonatomic,readonly) BOOL adjustsMetadata; 
+(void)initialize;
+(void)prewarm;
-(int)prepareForRenderingWithParameters:(id)arg1 inputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3 ;
-(void)renderUsingParameters:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 inputSampleBuffer:(opaqueCMSampleBufferRef)arg3 originalPixelBuffer:(CVBufferRef)arg4 processedPixelBuffer:(CVBufferRef)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)adjustMetadataOfSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)supportsAnimation;
-(BOOL)adjustsMetadata;
-(id)initForRenderingWithDepth:(BOOL)arg1 ;
-(void)_renderUsingParameters:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 inputSampleBuffer:(opaqueCMSampleBufferRef)arg3 originalPixelBuffer:(CVBufferRef)arg4 processedPixelBuffer:(CVBufferRef)arg5 prewarming:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
-(BOOL)usingDepth;
-(void)setRenderingQueueContext:(CIContext *)arg1 ;
-(CIContext *)renderingQueueContext;
-(id)_visionKitFaceObservationToCoreImageDictionary:(id)arg1 orientation:(id)arg2 ;
-(id)coreImageArrayRepresentationForRegion:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(short)type;
-(NSString *)displayName;
@end

