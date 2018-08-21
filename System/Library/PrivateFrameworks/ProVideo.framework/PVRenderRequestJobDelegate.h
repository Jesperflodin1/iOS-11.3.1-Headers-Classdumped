/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PVRenderJobDelegate.h>

@class PVRenderer, PVRenderRequest, NSString, PVVideoCompositingContext;

@interface PVRenderRequestJobDelegate : NSObject <PVRenderJobDelegate> {

	PVRenderer* m_pvRenderer;
	PVRenderRequest* m_request;
	HGRef<PVRenderManager>* m_renderManager;
	/*^block*/id m_completionHandler;
	vector<HGRef<HGCVPixelBuffer>, std::__1::allocator<HGRef<HGCVPixelBuffer> > >* m_destinationPixelBuffers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long jobTypeTag; 
@property (readonly) PVVideoCompositingContext * videoCompositingContext; 
+(unsigned long long)jobTypeTag;
-(void)dealloc;
-(int)jobPriority;
-(unsigned long long)jobTypeTag;
-(void)buildGraph:(vector<HGRef<HGNode>, std::__1::allocator<HGRef<HGNode> > >*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3 ;
-(int)renderThreadPriority;
-(void)setupDestinationBuffers:(vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > >*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3 ;
-(void)finishCompletedJob;
-(void)finishCancelledJob;
-(void)renderJobFinished:(HGRef<PVRenderJob>*)arg1 ;
-(id)initWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 pvRenderer:(id)arg3 ;
-(PVVideoCompositingContext *)videoCompositingContext;
@end

