/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleCVAPhoto/AppleCVAPhoto-Structs.h>
#import <libobjc.A.dylib/CVADisparityPostprocessingVideoPipeline.h>
#import <libobjc.A.dylib/CVAMattingVideoPipeline.h>
#import <libobjc.A.dylib/CVAPortraitVideoPipeline.h>

@protocol OS_dispatch_queue, CVAVideoPipelinePropertiesSPI, CVADisparityPostprocessingCompletionDelegate, CVAMattingCompletionDelegate, CVAPortraitCompletionDelegate;
@class NSObject, VideoMattingMetal, VideoRelightingMetal, NSString;

@interface CVAPortraitVideoPipeline_Impl : NSObject <CVADisparityPostprocessingVideoPipeline, CVAMattingVideoPipeline, CVAPortraitVideoPipeline> {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	id<CVAVideoPipelinePropertiesSPI> _properties;
	CVBufferRef _untransformedCanonicalDisparityPixelBuffer;
	CVPixelBufferPoolRef _canonicalDisparityPixelBufferPool;
	VideoPostprocessingParams _vmPostprocessingParams;
	VideoMattingStaticParams _vmStaticParams;
	VideoMattingDynamicParams _vmDynamicParams;
	DynamicMetaParams _vmDynamicMetaParams;
	Preferences _preferences;
	unique_ptr<DisparityConversion, std::__1::default_delete<DisparityConversion> >* _disparityConversion;
	unique_ptr<GeometricTransformation, std::__1::default_delete<GeometricTransformation> >* _disparityGeometricTransformation;
	unique_ptr<DisparityAutofocus, std::__1::default_delete<DisparityAutofocus> >* _disparityAutofocus;
	unique_ptr<DisparityStatistics, std::__1::default_delete<DisparityStatistics> >* _disparityStatistics;
	unique_ptr<cva::FocusStateMachine, std::__1::default_delete<cva::FocusStateMachine> >* _focusStateMachine;
	unique_ptr<StageLightStateMachine, std::__1::default_delete<StageLightStateMachine> >* _stageLightStateMachine;
	unique_ptr<SdofStateMachine, std::__1::default_delete<SdofStateMachine> >* _sdofIntensityStateMachine;
	VideoMattingMetal* _vmAccelerator;
	VideoRelightingMetal* _vrAccelerator;
	float _referenceLensPosition_um;
	id<CVADisparityPostprocessingCompletionDelegate> _disparityPostprocessingCompletionDelegate;
	id<CVAMattingCompletionDelegate> _mattingCompletionDelegate;
	id<CVAPortraitCompletionDelegate> _portraitCompletionDelegate;

}

@property (__weak) id<CVADisparityPostprocessingCompletionDelegate> disparityPostprocessingCompletionDelegate;              //@synthesize disparityPostprocessingCompletionDelegate=_disparityPostprocessingCompletionDelegate - In the implementation block
@property (__weak) id<CVAMattingCompletionDelegate> mattingCompletionDelegate;                                              //@synthesize mattingCompletionDelegate=_mattingCompletionDelegate - In the implementation block
@property (__weak) id<CVAPortraitCompletionDelegate> portraitCompletionDelegate;                                            //@synthesize portraitCompletionDelegate=_portraitCompletionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id<CVAVideoPipelineProperties> videoPipelineProperties; 
+(void)drawCanonicalDisparity:(CVBufferRef)arg1 onColor:(CVBufferRef)arg2 focusMachineState:(int)arg3 ;
+(int)pixelBufferPoolCreateWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned)arg3 pool:(_CVPixelBufferPool*)arg4 ;
-(void)setDisparityPostprocessingCompletionDelegate:(id<CVADisparityPostprocessingCompletionDelegate>)arg1 ;
-(void)setMattingCompletionDelegate:(id<CVAMattingCompletionDelegate>)arg1 ;
-(void)setPortraitCompletionDelegate:(id<CVAPortraitCompletionDelegate>)arg1 ;
-(int)renderWithRequest:(id)arg1 ;
-(void)dealloc;
-(id)initWithProperties:(id)arg1 ;
-(int)renderWithRequest:(id)arg1 disparityPostprocessingCompletionHandler:(/*^block*/id)arg2 mattingCompletionHandler:(/*^block*/id)arg3 portraitCompletionHandler:(/*^block*/id)arg4 ;
-(id<CVADisparityPostprocessingCompletionDelegate>)disparityPostprocessingCompletionDelegate;
-(id<CVAMattingCompletionDelegate>)mattingCompletionDelegate;
-(id<CVAPortraitCompletionDelegate>)portraitCompletionDelegate;
-(id<CVAVideoPipelineProperties>)videoPipelineProperties;
-(void)setVideoPipelineProperties:(id<CVAVideoPipelineProperties>)arg1 ;
-(int)extractMatteWithRequest:(id)arg1 ;
-(int)extractMatteWithRequest:(id)arg1 disparityPostprocessingCompletionHandler:(/*^block*/id)arg2 mattingCompletionHandler:(/*^block*/id)arg3 ;
-(int)postprocessDisparityWithRequest:(id)arg1 ;
-(int)postprocessDisparityWithRequest:(id)arg1 disparityPostprocessingCompletionHandler:(/*^block*/id)arg2 ;
-(void)validateDisparityPostprocessingRequest:(id)arg1 ;
-(void)validateMattingRequest:(id)arg1 ;
-(void)validatePortraitRequest:(id)arg1 ;
-(id)internal_postprocessDisparityWithRequest:(id)arg1 disparityPostprocessingCompletionHandler:(/*^block*/id)arg2 isFinalStage:(BOOL)arg3 status:(int*)arg4 ;
-(int)internal_fixFocusPositionWithDisparityPostprocessingRequest:(id)arg1 ;
-(id)internal_extractMatteWithRequest:(id)arg1 disparityPostprocessingResult:(id)arg2 usePostprocessedDisparity:(BOOL)arg3 gravity:(CVAVector)arg4 mattingCompletionHandler:(/*^block*/id)arg5 isFinalStage:(BOOL)arg6 status:(int*)arg7 ;
-(void)internal_renderWithRequest:(id)arg1 mattingResult:(id)arg2 portraitCompletionHandler:(/*^block*/id)arg3 status:(int*)arg4 timestamp:(long long)arg5 ;
-(void)internal_renderStageLightWithRequest:(id)arg1 mattingResult:(id)arg2 portraitCompletionHandler:(/*^block*/id)arg3 status:(int*)arg4 ;
-(void)internal_relightWithRequest:(id)arg1 faceModel:(id)arg2 mattingResult:(id)arg3 status:(int*)arg4 ;
@end
