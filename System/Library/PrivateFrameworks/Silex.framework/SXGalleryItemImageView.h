/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXImageView.h>

@class SXGalleryItem;

@interface SXGalleryItemImageView : SXImageView {

	SXGalleryItem* _galleryItem;

}

@property (nonatomic,readonly) SXGalleryItem * galleryItem;              //@synthesize galleryItem=_galleryItem - In the implementation block
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(id)initWithGalleryItem:(id)arg1 imageResource:(id)arg2 resourceDataSource:(id)arg3 reachabilityProvider:(id)arg4 ;
-(SXGalleryItem *)galleryItem;
@end

