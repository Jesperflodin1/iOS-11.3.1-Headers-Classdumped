/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VKIconManager, VKShieldManager;

@interface MKTransitArtworkManager : NSObject {

	VKIconManager* _iconManager;
	VKShieldManager* _shieldManager;

}

@property (nonatomic,readonly) VKIconManager * iconManager;                  //@synthesize iconManager=_iconManager - In the implementation block
@property (nonatomic,readonly) VKShieldManager * shieldManager;              //@synthesize shieldManager=_shieldManager - In the implementation block
+(id)sharedInstance;
-(void)purge;
-(id)initWithShieldManager:(id)arg1 iconManager:(id)arg2 ;
-(BOOL)_isMemoryConstrained;
-(id)_vkImageWithShieldDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 widthPaddingMultiple:(double)arg5 ;
-(id)transitArtworkImageWithShieldDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 ;
-(id)transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 ;
-(id)transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 withWidthPaddingMultiple:(double)arg5 ;
-(id)_imageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 withWidthPaddingMultiple:(double)arg5 fullBleedColor:(id*)arg6 ;
-(id)transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 withWidthPaddingMultiple:(double)arg5 fullBleedColor:(id*)arg6 ;
-(id)_createImageWithBlockInAutoreleasePoolIfNeeded:(/*^block*/id)arg1 ;
-(id)_imageFroMVKImage:(id)arg1 ;
-(VKIconManager *)iconManager;
-(VKShieldManager *)shieldManager;
@end
