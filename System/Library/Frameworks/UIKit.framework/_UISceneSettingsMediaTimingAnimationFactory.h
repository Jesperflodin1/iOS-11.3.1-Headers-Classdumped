/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIBasicAnimationFactory.h>

@class CAMediaTimingFunction, NSString;

@interface _UISceneSettingsMediaTimingAnimationFactory : NSObject <_UIBasicAnimationFactory> {

	CAMediaTimingFunction* __timingFunctionForAnimation;

}

@property (getter=_timingFunctionForAnimation,nonatomic,retain) CAMediaTimingFunction * _timingFunctionForAnimation;              //@synthesize _timingFunctionForAnimation=__timingFunctionForAnimation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(CAMediaTimingFunction *)_timingFunctionForAnimation;
-(void)set_timingFunctionForAnimation:(CAMediaTimingFunction *)arg1 ;
@end
