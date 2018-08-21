/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOPointUtility : NSObject
+(BOOL)zilchPointsSupported;
+(void*)controlPoints:(id)arg1 usesZilch:(BOOL)arg2 ;
+(unsigned long long)pointCount:(id)arg1 usesZilch:(BOOL)arg2 ;
+(SCD_Struct_GE29)pointAt:(unsigned long long)arg1 pointData:(id)arg2 usesZilch:(BOOL)arg3 ;
+(id)unpackPoints:(id)arg1 usesZilch:(BOOL)arg2 ;
+(id)unpackZilchPoints:(id)arg1 ;
+(id)unpackBasicPoints:(id)arg1 ;
+(id)zilchData:(id)arg1 fromPointIndex:(unsigned long long)arg2 ;
+(id)subdataFromPointData:(id)arg1 fromPointIndex:(unsigned long long)arg2 usesZilch:(BOOL)arg3 ;
@end
