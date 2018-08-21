/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UISpringLoadedInteractionEffect.h>

@protocol UISpringLoadedInteractionEffect;
@class NSString;

@interface _UITableViewSpringLoadedEffect : NSObject <UISpringLoadedInteractionEffect> {

	id<UISpringLoadedInteractionEffect> _blinkEffect;

}

@property (nonatomic,retain) id<UISpringLoadedInteractionEffect> blinkEffect;              //@synthesize blinkEffect=_blinkEffect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)interaction:(id)arg1 didChangeWithContext:(id)arg2 ;
-(void)setBlinkEffect:(id<UISpringLoadedInteractionEffect>)arg1 ;
-(id<UISpringLoadedInteractionEffect>)blinkEffect;
@end

