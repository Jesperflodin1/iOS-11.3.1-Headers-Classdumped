//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMMotionManager, NSNumber;

@interface DAEventNotification : NSObject
{
    _Bool _running;
    NSNumber *_xComponentOrientationThreshold;
    CMMotionManager *_motionManager;
}

@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(retain, nonatomic) NSNumber *xComponentOrientationThreshold; // @synthesize xComponentOrientationThreshold=_xComponentOrientationThreshold;
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
- (void).cxx_destruct;
- (void)dealloc;
- (void)audioSystemInterrupt:(id)arg1;
- (void)startAudioInterruptDetection;
- (void)audioRouteChanged;
- (void)startHeadsetDetection;
- (id)getAccessoryModelNumbers;
- (void)accessoryDidDisconnect;
- (void)accessoryDidConnect;
- (void)startAccessoryConnectDetection;
- (void)startAccessoryDisconnectDetection;
- (void)startMotionDetection;
- (void)stopEventNotifications;
- (void)startEventNotifications;
- (id)init;

@end

