/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOTileKeyMap : NSObject {

	long long _type;
	void* _map;

}
-(id)initWithMapType:(long long)arg1 ;
-(void)reserveCapacity:(unsigned long long)arg1 ;
-(id)contentsDescription;
-(id)init;
-(unsigned long long)count;
-(id)objectForKey:(const GEOTileKey*)arg1 ;
-(void)dealloc;
-(void)removeObjectForKey:(const GEOTileKey*)arg1 ;
-(void)setObject:(id)arg1 forKey:(const GEOTileKey*)arg2 ;
@end

