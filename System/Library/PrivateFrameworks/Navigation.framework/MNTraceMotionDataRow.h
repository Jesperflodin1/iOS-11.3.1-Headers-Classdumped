/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MNTracePlayerTimelineStreamObjectType.h>

@class NSString;

@interface MNTraceMotionDataRow : NSObject <MNTracePlayerTimelineStreamObjectType> {

	double _timestamp;
	unsigned long long _motionType;
	unsigned long long _exitType;
	unsigned long long _confidence;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double position; 
@property (assign,nonatomic) double timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) unsigned long long motionType;              //@synthesize motionType=_motionType - In the implementation block
@property (assign,nonatomic) unsigned long long exitType;                //@synthesize exitType=_exitType - In the implementation block
@property (assign,nonatomic) unsigned long long confidence;              //@synthesize confidence=_confidence - In the implementation block
-(unsigned long long)motionType;
-(unsigned long long)exitType;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(double)position;
-(unsigned long long)confidence;
-(void)setConfidence:(unsigned long long)arg1 ;
-(void)setExitType:(unsigned long long)arg1 ;
-(void)setMotionType:(unsigned long long)arg1 ;
@end

