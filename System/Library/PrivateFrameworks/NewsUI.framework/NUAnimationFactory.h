/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_UIBasicAnimationFactory.h>

@class CAMediaTimingFunction, NSString;

@interface NUAnimationFactory : NSObject <_UIBasicAnimationFactory> {

	CAMediaTimingFunction* _mediaTimingFunction;

}

@property (nonatomic,readonly) CAMediaTimingFunction * mediaTimingFunction;              //@synthesize mediaTimingFunction=_mediaTimingFunction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(CAMediaTimingFunction *)mediaTimingFunction;
-(id)initWithMediaTimingFunction:(id)arg1 ;
@end

