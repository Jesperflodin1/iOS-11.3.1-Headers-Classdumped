/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, GEOComposedWaypoint;

@interface MNTraceCommuteDestinationRow : NSObject {

	unsigned long long _destinationID;
	NSString* _name;
	GEOComposedWaypoint* _waypoint;

}

@property (assign,nonatomic) unsigned long long destinationID;              //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) GEOComposedWaypoint * waypoint;                //@synthesize waypoint=_waypoint - In the implementation block
-(GEOComposedWaypoint *)waypoint;
-(void)setWaypoint:(GEOComposedWaypoint *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(unsigned long long)destinationID;
-(void)setDestinationID:(unsigned long long)arg1 ;
@end

