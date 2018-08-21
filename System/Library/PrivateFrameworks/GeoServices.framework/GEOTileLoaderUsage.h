/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSObject, NSMutableDictionary;

@interface GEOTileLoaderUsage : NSObject {

	NSObject*<OS_dispatch_queue> _usageIsolation;
	NSMutableDictionary* _usageDictionary;

}
-(void)removeUsageForTileKey:(const GEOTileKey*)arg1 ;
-(void)finishedUsageForTileWithKey:(const GEOTileKey*)arg1 withUserInfo:(id)arg2 ;
-(void)decodedTileWithKey:(const GEOTileKey*)arg1 withStartTime:(double)arg2 andTileSize:(unsigned long long)arg3 ;
-(void)startUsageTileWithKey:(const GEOTileKey*)arg1 ;
-(id)init;
-(void)cleanUp;
@end
