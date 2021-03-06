/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIPanelBorderReplicatingView, NSString;

@interface UIPanelBorderView : UIView {

	BOOL _observesTime;
	long long _statusBarAvoidance;
	UIPanelBorderReplicatingView* _replicatingView;
	NSString* _backdropGroupName;

}

@property (nonatomic,retain) UIPanelBorderReplicatingView * replicatingView;              //@synthesize replicatingView=_replicatingView - In the implementation block
@property (assign,nonatomic) BOOL observesTime;                                           //@synthesize observesTime=_observesTime - In the implementation block
@property (nonatomic,retain) NSString * backdropGroupName;                                //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (assign,nonatomic) long long statusBarAvoidance;                                //@synthesize statusBarAvoidance=_statusBarAvoidance - In the implementation block
-(void)setCenter:(CGPoint)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)didMoveToWindow;
-(BOOL)observesTime;
-(void)_updateObservationOfTime;
-(long long)statusBarAvoidance;
-(void)setObservesTime:(BOOL)arg1 ;
-(void)_statusBarTimeDidChange:(id)arg1 ;
-(UIPanelBorderReplicatingView *)replicatingView;
-(void)setReplicatingView:(UIPanelBorderReplicatingView *)arg1 ;
-(id)_cachedBackdropGroupName;
-(NSString *)backdropGroupName;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(void)setStatusBarAvoidance:(long long)arg1 ;
@end

