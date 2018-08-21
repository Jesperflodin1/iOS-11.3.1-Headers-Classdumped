/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOTileCacheReserved : NSObject {

	mutex _reservedLock;
	list<CacheItem, std::__1::allocator<CacheItem> >* _reservedList;
	unordered_map<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>, hashkey, eqkey, std::__1::allocator<std::__1::pair<const _GEOTileKey, std::__1::__list_iterator<CacheItem, void *> > > >* _reservedMap;
	unsigned long long _reservedMaxCapacity;
	unsigned long long _reservedMaxCost;
	unsigned long long _reservedCurrentCost;
	unsigned long long _reservedCurrentCount;

}
-(void)dealloc;
@end

