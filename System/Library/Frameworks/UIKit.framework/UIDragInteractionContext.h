/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol UIDragInteractionContext <UIInteractionContext>
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) BOOL shouldAnimateLift; 
@property (nonatomic,readonly) id animations; 
@property (nonatomic,readonly) id completion; 
@required
-(long long)state;
-(NSArray *)items;
-(id)completion;
-(id)animations;
-(BOOL)shouldAnimateLift;

@end

