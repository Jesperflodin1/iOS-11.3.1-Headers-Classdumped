/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol CAAnimationDelegate;
@class NSString;

@interface _UIViewWeakCAAnimationDelegate : NSObject <CAAnimationDelegate> {

	id<CAAnimationDelegate> _animationDelegate;
	struct {
		unsigned delegateAnimationDidStart : 1;
		unsigned delegateAnimationDidStopFinished : 1;
	}  _flags;

}

@property (nonatomic,__weak,readonly) id<CAAnimationDelegate> animationDelegate;              //@synthesize animationDelegate=_animationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)weakAnimationDelegate:(id)arg1 ;
-(void)animationDidStart:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithAnimationDelegate:(id)arg1 ;
-(id<CAAnimationDelegate>)animationDelegate;
@end
