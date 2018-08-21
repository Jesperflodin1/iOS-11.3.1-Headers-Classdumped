/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class NSDate;

@interface HGInputBitmapCacheItem : NSObject {

	NSDate* _lastUsedTime;
	CGSize _fullSize;
	vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > >* _bitmaps;

}

@property (nonatomic,readonly) vector<HGRef<HGBitmap> bitmaps;              //@synthesize bitmaps=_bitmaps - In the implementation block
@property (nonatomic,readonly) NSDate * lastUsedTime;                       //@synthesize lastUsedTime=_lastUsedTime - In the implementation block
@property (nonatomic,readonly) CGSize fullSize;                             //@synthesize fullSize=_fullSize - In the implementation block
-(void)updateLastUsedTime;
-(id)initWithHGBitmap:(vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > >*)arg1 fullSize:(CGSize)arg2 ;
-(vector<HGRef<HGBitmap>)bitmaps;
-(CGSize)fullSize;
-(NSDate *)lastUsedTime;
@end

