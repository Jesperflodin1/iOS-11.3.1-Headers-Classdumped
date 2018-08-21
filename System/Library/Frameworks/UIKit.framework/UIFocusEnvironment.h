/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, UIView;


@protocol UIFocusEnvironment <NSObject>
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@optional
-(UIView *)preferredFocusedView;
-(id)soundIdentifierForFocusUpdateInContext:(id)arg1;

@required
-(void)setNeedsFocusUpdate;
-(void)updateFocusIfNeeded;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
-(NSArray *)preferredFocusEnvironments;
-(BOOL)shouldUpdateFocusInContext:(id)arg1;

@end
