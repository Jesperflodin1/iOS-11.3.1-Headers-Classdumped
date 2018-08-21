/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FigCameraViewfinderSession, FigDelegateStorage;

@interface FigCameraViewfinder : NSObject {

	FigCameraViewfinderSession* _delegateActiveViewfinderSession;
	FigDelegateStorage* _delegateStorage;

}

@property (nonatomic,retain) FigCameraViewfinderSession * delegateActiveViewfinderSession;                      //@synthesize delegateActiveViewfinderSession=_delegateActiveViewfinderSession - In the implementation block
@property (readonly) id<FigCameraViewfinderDelegate><FigCameraViewfinderSessionDelegate> delegate; 
@property (readonly) NSObject*<OS_dispatch_queue> queue; 
+(id)cameraViewfinder;
-(void)startWithOptions:(id)arg1 ;
-(FigCameraViewfinderSession *)delegateActiveViewfinderSession;
-(void)setDelegateActiveViewfinderSession:(FigCameraViewfinderSession *)arg1 ;
-(id)init;
-(id<FigCameraViewfinderDelegate><FigCameraViewfinderSessionDelegate>)delegate;
-(void)dealloc;
-(void)stop;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
@end
