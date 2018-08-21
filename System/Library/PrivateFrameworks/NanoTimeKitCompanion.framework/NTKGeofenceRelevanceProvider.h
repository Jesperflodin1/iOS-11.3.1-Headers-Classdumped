/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRelevanceProvider.h>

@class CLCircularRegion;

@interface NTKGeofenceRelevanceProvider : NTKRelevanceProvider {

	CLCircularRegion* _region;

}

@property (nonatomic,readonly) CLCircularRegion * region;              //@synthesize region=_region - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CLCircularRegion *)region;
-(unsigned long long)_hash;
-(id)initWithRegion:(id)arg1 ;
@end

