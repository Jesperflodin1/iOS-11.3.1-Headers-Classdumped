/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSObject;

@interface GEOMapFeatureAccessFinder : NSObject {

	BOOL _allowNetwork;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) BOOL allowNetwork;                               //@synthesize allowNetwork=_allowNetwork - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(BOOL)allowNetwork;
-(BOOL)_boundingCircle:(const Sphere<float, 2>*)arg1 intersectsTransitLink:(SCD_Struct_GE152*)arg2 ;
-(Sphere<float, 2>)_boundingCircleWithCenter:(SCD_Struct_GE29)arg1 radius:(double)arg2 inTile:(GEOTileKey)arg3 ;
-(BOOL)_boundingCircle:(const Sphere<float, 2>*)arg1 intersectsFeature:(SCD_Struct_GE190*)arg2 ;
-(void)setAllowNetwork:(BOOL)arg1 ;
-(BOOL)_boundingCircle:(const Sphere<float, 2>*)arg1 intersectsPoints:(SCD_Struct_GE188*)arg2 pointCount:(unsigned long long)arg3 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

