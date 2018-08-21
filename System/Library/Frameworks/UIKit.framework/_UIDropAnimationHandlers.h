/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIDragAnimating.h>

@class NSMutableArray, NSArray, NSString;

@interface _UIDropAnimationHandlers : NSObject <UIDragAnimating> {

	NSMutableArray* _alongsideAnimationHandlers;
	NSMutableArray* _completionHandlers;

}

@property (nonatomic,readonly) NSArray * alongsideAnimationHandlers; 
@property (nonatomic,readonly) NSArray * completionHandlers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)addAnimations:(/*^block*/id)arg1 ;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(NSArray *)alongsideAnimationHandlers;
-(NSArray *)completionHandlers;
-(void)invokeAllCompletionHandlers;
-(void)resetAllAnimationHandlers;
@end

