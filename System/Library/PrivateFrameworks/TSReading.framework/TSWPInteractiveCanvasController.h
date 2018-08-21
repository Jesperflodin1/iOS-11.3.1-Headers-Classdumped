/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDInteractiveCanvasController.h>
#import <TSReading/TSDGestureTarget.h>

@class NSString;

@interface TSWPInteractiveCanvasController : TSDInteractiveCanvasController <TSDGestureTarget> {

	BOOL _isTearingDown;

}

@property (nonatomic,readonly) BOOL shouldRespondToTextHyperlinks; 
@property (nonatomic,readonly) BOOL handleHyperlinksWithTextGRs; 
@property (nonatomic,readonly) BOOL isEditingText; 
@property (nonatomic,readonly) BOOL isTearingDown;                              //@synthesize isTearingDown=_isTearingDown - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)teardown;
-(id)beginEditingRepForInfo:(id)arg1 ;
-(CGRect)scrollFocusRectForModel:(id)arg1 withSelection:(id)arg2 ;
-(BOOL)showsComments;
-(void)setShowsComments:(BOOL)arg1 ;
-(BOOL)canHandleGesture:(id)arg1 ;
-(BOOL)handleGesture:(id)arg1 ;
-(void)gestureSequenceWillBegin;
-(void)gestureSequenceDidEnd;
-(id)infosToHideForCanvas:(id)arg1 ;
-(void)resumeEditing;
-(id)closestRepToPoint:(CGPoint)arg1 forStorage:(id)arg2 ;
-(id)p_beginEditingPossibleContainedRep:(id*)arg1 ;
-(BOOL)isEditingText;
-(BOOL)handleHyperlinksWithTextGRs;
-(BOOL)shouldRespondToTextHyperlinks;
-(void)p_recursivelyAddRep:(id)arg1 forStorage:(id)arg2 toSet:(id)arg3 ;
-(id)p_repsForStorage:(id)arg1 ;
-(id)_repsForStorage:(id)arg1 ;
-(void)withLayoutForModel:(id)arg1 withSelection:(id)arg2 performBlock:(/*^block*/id)arg3 ;
-(void)didBeginEditingText;
-(void)willEndEditingText;
-(BOOL)suppressDoubleTapForSelection;
-(BOOL)textRepsShouldTileAggressively;
-(BOOL)zoomColumnAtPoint:(CGPoint)arg1 ;
-(void)showHyperlinkInfoForField:(id)arg1 inRep:(id)arg2 openInEditMode:(BOOL)arg3 ;
-(void)closeHyperlinkPopover;
-(BOOL)hyperlinkPopoverIsShown;
-(BOOL)cellCommentsAllowedForTableInfo:(id)arg1 ;
-(BOOL)isTearingDown;
@end

