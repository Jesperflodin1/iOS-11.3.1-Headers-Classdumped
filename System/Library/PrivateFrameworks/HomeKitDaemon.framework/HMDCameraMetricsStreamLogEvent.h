/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCameraMetricsLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSNumber, NSString;

@interface HMDCameraMetricsStreamLogEvent : HMDCameraMetricsLogEvent <HMDAWDLogEvent> {

	NSNumber* _referenceTimestamp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSNumber * referenceTimestamp;              //@synthesize referenceTimestamp=_referenceTimestamp - In the implementation block
+(void)initialize;
+(id)uuid;
-(id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(BOOL)arg3 ;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(NSNumber *)referenceTimestamp;
-(void)setReferenceTimestamp:(NSNumber *)arg1 ;
-(unsigned)timeSinceReference:(id)arg1 ;
-(void)addInitialConfiguration:(id)arg1 ;
-(void)addReconfiguration:(id)arg1 ;
-(void)addIDSSession:(id)arg1 ;
-(void)addIDSConnectionSetup:(id)arg1 ;
-(void)addStreamMessaging:(id)arg1 ;
@end

