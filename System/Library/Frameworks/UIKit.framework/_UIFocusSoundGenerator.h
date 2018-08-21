/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIFocusSoundPlayer;
@interface _UIFocusSoundGenerator : NSObject {

	id<_UIFocusSoundPlayer> _focusSoundPlayer;

}

@property (nonatomic,readonly) id<_UIFocusSoundPlayer> focusSoundPlayer;              //@synthesize focusSoundPlayer=_focusSoundPlayer - In the implementation block
+(id)defaultGenerator;
+(void)registerURL:(id)arg1 forIdentifier:(id)arg2 ;
+(void)_uiktest_unregisterURLForIdentifier:(id)arg1 ;
-(id)initWithFocusSoundPlayer:(id)arg1 ;
-(void)playSoundForFocusUpdateInContext:(id)arg1 ;
-(id<_UIFocusSoundPlayer>)focusSoundPlayer;
@end

