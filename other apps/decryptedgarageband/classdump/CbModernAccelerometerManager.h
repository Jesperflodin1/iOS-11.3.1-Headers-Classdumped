//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CbAccelerometerManagerProtocol-Protocol.h"

@class CMMotionManager, NSMutableArray, NSOperationQueue, NSString;
@protocol OS_dispatch_semaphore;

@interface CbModernAccelerometerManager : NSObject <CbAccelerometerManagerProtocol>
{
    _Bool _recentTouchEvent;
    _Bool _running;
    _Bool _enabledGlobally;
    _Bool _rigidSurface;
    _Bool _stateUnknown;
    CMMotionManager *_motionManager;
    unsigned long long _touchesCount;
    double _currentMinAccel;
    double _currentMaxAccel;
    double _updateFrequency;
    NSMutableArray *_analyzers;
    NSOperationQueue *_motionQueue;
    NSObject<OS_dispatch_semaphore> *_accelSemaphore;
    double _lowThreshold;
    double _highThreshold;
    CDStruct_31142d93 _lastGravity;
    CDStruct_31142d93 _baselineUserAccel;
}

+ (id)sharedManager;
@property(nonatomic) _Bool stateUnknown; // @synthesize stateUnknown=_stateUnknown;
@property(nonatomic) _Bool rigidSurface; // @synthesize rigidSurface=_rigidSurface;
@property(nonatomic) double highThreshold; // @synthesize highThreshold=_highThreshold;
@property(nonatomic) double lowThreshold; // @synthesize lowThreshold=_lowThreshold;
@property(nonatomic) CDStruct_39925896 baselineUserAccel; // @synthesize baselineUserAccel=_baselineUserAccel;
@property(nonatomic) CDStruct_39925896 lastGravity; // @synthesize lastGravity=_lastGravity;
@property(nonatomic) NSObject<OS_dispatch_semaphore> *accelSemaphore; // @synthesize accelSemaphore=_accelSemaphore;
@property(retain, nonatomic) NSOperationQueue *motionQueue; // @synthesize motionQueue=_motionQueue;
@property(nonatomic) _Bool enabledGlobally; // @synthesize enabledGlobally=_enabledGlobally;
@property(nonatomic) _Bool running; // @synthesize running=_running;
@property(retain, nonatomic) NSMutableArray *analyzers; // @synthesize analyzers=_analyzers;
@property(nonatomic) double updateFrequency; // @synthesize updateFrequency=_updateFrequency;
@property(nonatomic) double currentMaxAccel; // @synthesize currentMaxAccel=_currentMaxAccel;
@property(nonatomic) double currentMinAccel; // @synthesize currentMinAccel=_currentMinAccel;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
- (void).cxx_destruct;
- (double)currentAccelerationForAnalyzer:(id)arg1;
- (double)pullVelocity;
- (void)finishedAnalyzingWithAnalyzer:(id)arg1;
- (id)analyzer;
- (id)analyzerWithContext:(id)arg1;
- (void)updateAnalyzersVelocityRange;
@property(nonatomic) _Bool recentTouchEvent; // @synthesize recentTouchEvent=_recentTouchEvent;
@property(nonatomic) unsigned long long touchesCount; // @synthesize touchesCount=_touchesCount;
- (void)enableAccelerometerUpdatesGlobally;
- (void)disableAccelerometerUpdatesGlobally;
- (void)stopAccelerometerUpdates;
- (void)startAccelerometerUpdates;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

