/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Memories/Memories-Structs.h>
@interface MapUtils : NSObject
+(id)locationWithImageURL:(id)arg1 ;
+(float)bestEndingLongitude:(float)arg1 forShortestTripFromLongitude:(float)arg2 ;
+(CGPoint)pixelFromLatitude:(float)arg1 longitude:(float)arg2 onEquirectangularMapWithSize:(CGSize)arg3 geographicBounds:(CGRect)arg4 ;
+(CGRect)geographicRectFromPixelRect:(CGRect)arg1 onEquirectangularMapWithSize:(CGSize)arg2 geographicBounds:(CGRect)arg3 ;
@end
