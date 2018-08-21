/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class NSLock, PVVideoCompositingContext;

@interface PVRendererBase : NSObject {

	vector<HGRef<PVRenderJob>, std::__1::allocator<HGRef<PVRenderJob> > >* _inFlightRenderJobs;
	NSLock* _inFlightRenderJobsLock;
	HGSynchronizable* _perfStatsLock;
	PVPerfStats* _perfStats;
	BOOL _trackStats;
	PVVideoCompositingContext* _compositingContext;

}

@property (nonatomic,retain) PVVideoCompositingContext * compositingContext;              //@synthesize compositingContext=_compositingContext - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(void)renderJobFinished:(HGRef<PVRenderJob>*)arg1 ;
-(void)didRecieveMemoryWarning:(id)arg1 ;
-(void)cancelAllPendingRequests;
-(void)addRenderJobInFlight:(HGRef<PVRenderJob>*)arg1 ;
-(void)addFrameStats:(FrameStats*)arg1 ;
-(void)cleanupMemoryCaches;
-(HGRef<PVRenderJob>*)startJobForDelegate:(id)arg1 frameStats:(FrameStats*)arg2 ;
-(void)setCompositingContext:(PVVideoCompositingContext *)arg1 ;
-(void)trackStats:(BOOL)arg1 ;
-(PVVideoCompositingContext *)compositingContext;
-(void)printAndClearStats:(BOOL)arg1 ;
@end

