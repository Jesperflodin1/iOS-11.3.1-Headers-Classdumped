/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CADisplayLink, NSObject;

@interface SCNDisplayLink : NSObject {

	CADisplayLink* _caDisplayLink;
	BOOL _supportTargetTimestamp;
	/*^block*/id _block;
	/*^block*/id _adaptativeFrameDuration;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _paused;
	BOOL _invalidated;
	double _lastFrameTime;
	float _preferredFrameRate;
	Ai _queuedFrameCount;

}

@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,nonatomic) float preferredFrameRate; 
@property (nonatomic,copy) id adaptativeFrameRate; 
-(id)init;
-(void)invalidate;
-(void)setNeedsDisplay;
-(void)dealloc;
-(void)_cleanup;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)isPaused;
-(BOOL)_isInvalidated;
-(id)initWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)setPreferredFrameRate:(float)arg1 ;
-(BOOL)setPaused:(BOOL)arg1 nextFrameTimeHint:(double)arg2 lastUpdate:(double)arg3 ;
-(float)preferredFrameRate;
-(void)_caDisplayLinkCallback;
-(void)_callbackWithTime:(double)arg1 ;
-(id)adaptativeFrameRate;
-(void)setAdaptativeFrameRate:(id)arg1 ;
-(int)queuedFrameCount;
@end

