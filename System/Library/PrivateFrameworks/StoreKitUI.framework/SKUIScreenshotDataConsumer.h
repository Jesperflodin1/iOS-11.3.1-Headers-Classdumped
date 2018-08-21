/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStyledImageDataConsumer.h>

@interface SKUIScreenshotDataConsumer : SKUIStyledImageDataConsumer {

	BOOL _forcesPortrait;

}

@property (assign,nonatomic) BOOL forcesPortrait;              //@synthesize forcesPortrait=_forcesPortrait - In the implementation block
+(id)consumer;
+(id)consumerWithScreenshotSize:(CGSize)arg1 ;
-(id)imageForImage:(id)arg1 ;
-(void)setForcesPortrait:(BOOL)arg1 ;
-(id)imageForColor:(id)arg1 size:(CGSize)arg2 ;
-(BOOL)forcesPortrait;
@end

