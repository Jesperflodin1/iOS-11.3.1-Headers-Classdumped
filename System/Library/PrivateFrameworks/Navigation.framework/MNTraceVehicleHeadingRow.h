/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MNTracePlayerTimelineStreamObjectType.h>

@class NSString;

@interface MNTraceVehicleHeadingRow : NSObject <MNTracePlayerTimelineStreamObjectType> {

	double _timestamp;
	double _vehicleHeading;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double position; 
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double vehicleHeading;                 //@synthesize vehicleHeading=_vehicleHeading - In the implementation block
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(double)position;
-(double)vehicleHeading;
-(void)setVehicleHeading:(double)arg1 ;
@end

