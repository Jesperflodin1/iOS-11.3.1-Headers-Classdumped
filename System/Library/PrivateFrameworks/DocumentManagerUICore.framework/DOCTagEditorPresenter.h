/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol DOCTagEditorPresenter <NSObject>
@property (assign,nonatomic) BOOL showAddTagConfirmButtons; 
@property (assign,nonatomic) BOOL useCompactColorPicker; 
@property (assign,nonatomic) BOOL pinTextFieldToTopBound; 
@property (assign,nonatomic) BOOL delayResizingUntilAppeared; 
@property (assign,nonatomic) BOOL isExtremelyVerticallyCompact; 
@property (assign,nonatomic,__weak) id<DOCTagEditorDelegate> delegate; 
@property (nonatomic,retain) NSArray * items; 
@required
-(id<DOCTagEditorDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(NSArray *)items;
-(void)setItems:(id)arg1;
-(void)setUseCompactColorPicker:(BOOL)arg1;
-(void)setPinTextFieldToTopBound:(BOOL)arg1;
-(void)setDelayResizingUntilAppeared:(BOOL)arg1;
-(void)setShowAddTagConfirmButtons:(BOOL)arg1;
-(BOOL)isExtremelyVerticallyCompact;
-(void)setIsExtremelyVerticallyCompact:(BOOL)arg1;
-(BOOL)delayResizingUntilAppeared;
-(BOOL)pinTextFieldToTopBound;
-(BOOL)showAddTagConfirmButtons;
-(BOOL)useCompactColorPicker;

@end

