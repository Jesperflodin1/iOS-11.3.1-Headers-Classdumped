/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertController.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>

@class NSMutableArray, UIImage, SKUIResourceLoader, NSString;

@interface MSCLAuthorSelectionAlertController : UIAlertController <SKUIArtworkRequestDelegate> {

	NSMutableArray* _artworkNotificationObservers;
	UIImage* _placeholderImage;
	SKUIResourceLoader* _resourceLoader;

}

@property (nonatomic,retain) SKUIResourceLoader * resourceLoader;              //@synthesize resourceLoader=_resourceLoader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3 ;
-(void)dealloc;
-(id)_placeholderImage;
-(void)setResourceLoader:(SKUIResourceLoader *)arg1 ;
-(id)_imageDataConsumer;
-(id)addActionWithAuthor:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_newArtworkRequestForAuthor:(id)arg1 ;
-(SKUIResourceLoader *)resourceLoader;
@end

