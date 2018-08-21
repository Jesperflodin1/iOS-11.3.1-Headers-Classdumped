/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSCache;

@interface PXPlacesImageCache : NSObject {

	NSCache* _cache;
	id<NSObject> _memoryWarningObserver;

}
-(id)init;
-(void)dealloc;
-(void)removeAllObjects;
-(id)cachedRenderedImageForGeotaggble:(id)arg1 andKey:(id)arg2 ;
-(void)cacheRenderedImage:(id)arg1 forGeotaggble:(id)arg2 andKey:(id)arg3 ;
-(void)removeCachedRenderedImageForGeotaggble:(id)arg1 andKey:(id)arg2 ;
@end

