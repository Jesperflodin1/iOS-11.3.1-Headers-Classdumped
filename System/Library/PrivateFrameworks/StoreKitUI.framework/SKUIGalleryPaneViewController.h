/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class SKUIMediaComponent, SKUIEmbeddedMediaView;

@interface SKUIGalleryPaneViewController : UIViewController {

	SKUIMediaComponent* _component;
	long long _galleryIndex;

}

@property (nonatomic,readonly) SKUIMediaComponent * component;                 //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) long long galleryIndex;                         //@synthesize galleryIndex=_galleryIndex - In the implementation block
@property (nonatomic,readonly) SKUIEmbeddedMediaView * mediaView; 
-(SKUIMediaComponent *)component;
-(SKUIEmbeddedMediaView *)mediaView;
-(long long)galleryIndex;
-(id)initWithMediaComponent:(id)arg1 galleryIndex:(long long)arg2 ;
@end

