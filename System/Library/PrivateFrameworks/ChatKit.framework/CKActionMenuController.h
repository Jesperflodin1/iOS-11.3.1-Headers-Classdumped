/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKActionMenuControllerDelegate;
#import <ChatKit/ChatKit-Structs.h>
@class NSArray, CKActionMenuView;

@interface CKActionMenuController : NSObject {

	unsigned long long _defaultActionIndex;
	id<CKActionMenuControllerDelegate> _delegate;
	NSArray* _passthroughViews;
	CKActionMenuView* _actionMenuView;

}

@property (nonatomic,retain) CKActionMenuView * actionMenuView;                                //@synthesize actionMenuView=_actionMenuView - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actionMenuItems; 
@property (nonatomic,readonly) unsigned long long defaultActionIndex;                          //@synthesize defaultActionIndex=_defaultActionIndex - In the implementation block
@property (assign,nonatomic,__weak) id<CKActionMenuControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * passthroughViews;                                         //@synthesize passthroughViews=_passthroughViews - In the implementation block
@property (getter=isActionMenuVisible,nonatomic,readonly) BOOL actionMenuVisible; 
-(id<CKActionMenuControllerDelegate>)delegate;
-(void)setDelegate:(id<CKActionMenuControllerDelegate>)arg1 ;
-(void)dealloc;
-(NSArray *)passthroughViews;
-(void)setPassthroughViews:(NSArray *)arg1 ;
-(BOOL)isActionMenuVisible;
-(void)dismissActionMenuAnimated:(BOOL)arg1 ;
-(NSArray *)actionMenuItems;
-(void)setActionMenuItems:(id)arg1 defaultActionIndex:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(id)initWithActionMenuItems:(id)arg1 defaultActionIndex:(unsigned long long)arg2 blurEffectStyle:(long long)arg3 ;
-(void)presentActionMenuFromPoint:(CGPoint)arg1 inView:(id)arg2 animated:(BOOL)arg3 ;
-(CGRect)convertActionMenuFrameToView:(id)arg1 ;
-(void)setActionMenuView:(CKActionMenuView *)arg1 ;
-(CKActionMenuView *)actionMenuView;
-(unsigned long long)defaultActionIndex;
@end

