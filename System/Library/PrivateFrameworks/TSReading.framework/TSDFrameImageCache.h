/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class NSMutableArray;

@interface TSDFrameImageCache : NSObject {

	NSMutableArray* mEntries;

}
+(id)sharedFrameImageCache;
-(id)init;
-(void)dealloc;
-(void)didCloseDocument;
-(void)p_didReceiveMemoryWarning:(id)arg1 ;
-(CGImageRef)newCachedImageForFrame:(id)arg1 size:(CGSize)arg2 viewScale:(double)arg3 forCALayer:(BOOL)arg4 mask:(BOOL)arg5 ;
-(CGImageRef)setCachedImage:(CGImageRef)arg1 forFrame:(id)arg2 size:(CGSize)arg3 viewScale:(double)arg4 forCALayer:(BOOL)arg5 mask:(BOOL)arg6 ;
-(id)p_newEntryForFrame:(id)arg1 size:(CGSize)arg2 viewScale:(double)arg3 createIfNeeded:(BOOL)arg4 ;
@end
