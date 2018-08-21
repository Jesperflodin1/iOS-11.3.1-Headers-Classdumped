/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXVideoControlItemAnimating.h>

@class NSMutableArray, NSString;

@interface SXVideoControlItemAnimationCoordinator : NSObject <SXVideoControlItemAnimating> {

	NSMutableArray* _animationBlocks;
	NSMutableArray* _completionBlocks;

}

@property (nonatomic,readonly) NSMutableArray * animationBlocks;               //@synthesize animationBlocks=_animationBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * completionBlocks;              //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSMutableArray *)completionBlocks;
-(NSMutableArray *)animationBlocks;
-(void)animateWithAnimationBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)animateWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
@end

