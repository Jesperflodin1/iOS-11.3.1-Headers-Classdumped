/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextInput_Internal.h>
#import <UIKit/UITextInputAdditions.h>
#import <UIKit/_UIStateRestorationContinuation.h>
#import <UIKit/_UITouchable.h>
#import <UIKit/UIResponderStandardEditActions.h>

@class UIView, UITextInputAssistantItem, UIInputViewController, UITextInputMode, NSString, NSArray, NSUserActivity, NSUndoManager;

@interface UIResponder : NSObject <UITextInput_Internal, UITextInputAdditions, _UIStateRestorationContinuation, _UITouchable, UIResponderStandardEditActions> {

	unsigned _hasOverrideClient : 1;
	unsigned _hasOverrideHost : 1;
	unsigned _hasInputAssistantItem : 1;

}

@property (nonatomic,readonly) UIView * inputView; 
@property (nonatomic,readonly) UIView * inputAccessoryView; 
@property (nonatomic,readonly) UITextInputAssistantItem * inputAssistantItem; 
@property (nonatomic,readonly) UIInputViewController * inputViewController; 
@property (nonatomic,readonly) UIInputViewController * inputAccessoryViewController; 
@property (nonatomic,readonly) UITextInputMode * textInputMode; 
@property (nonatomic,readonly) NSString * textInputContextIdentifier; 
@property (nonatomic,readonly) NSArray * keyCommands; 
@property (nonatomic,retain) NSUserActivity * userActivity; 
@property (getter=_proxyTextInput,nonatomic,readonly) UIResponder*<UITextInput> __content; 
@property (nonatomic,readonly) UIView*<UITextInputPrivate> _textSelectingContainer; 
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (getter=isEditing,nonatomic,readonly) BOOL editing; 
@property (getter=_caretRect,nonatomic,readonly) CGRect caretRect; 
@property (nonatomic,copy) NSString * restorationIdentifier; 
@property (nonatomic,readonly) UIResponder * _editingDelegate; 
@property (nonatomic,readonly) UIResponder * _responderForEditing; 
@property (nonatomic,readonly) UIResponder * nextResponder; 
@property (nonatomic,readonly) BOOL canBecomeFirstResponder; 
@property (nonatomic,readonly) BOOL canResignFirstResponder; 
@property (nonatomic,readonly) BOOL isFirstResponder; 
@property (nonatomic,readonly) NSUndoManager * undoManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_startDeferredTrackingObjectsWithIdentifiers;
+(void)_cleanupAllStateRestorationTables;
+(void)_updateStateRestorationIdentifierMap;
+(id)objectWithRestorationIdentifierPath:(id)arg1 ;
+(void)_setRestoredIdentifierPathForObject:(id)arg1 identifierPath:(id)arg2 ;
+(void)_prepareForSecondPassStateRestoration;
+(void)_finishStateRestoration;
+(void)clearTextInputContextIdentifier:(id)arg1 ;
+(void)_stopDeferredTrackingObjectsWithIdentifiers;
+(void)_cleanupStateRestorationObjectIdentifierTrackingTables;
-(id)_window;
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)restoreUserActivityState:(id)arg1 ;
-(UIResponder *)nextResponder;
-(id)firstResponder;
-(UIResponder *)_responderForEditing;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(NSUndoManager *)undoManager;
-(id)_deepestUnambiguousResponder;
-(id)_keyCommandForEvent:(id)arg1 ;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(id)_keyCommandForEvent:(id)arg1 target:(id*)arg2 ;
-(BOOL)_containedInAbsoluteResponderChain;
-(BOOL)_containsResponder:(id)arg1 ;
-(id)_keyCommandsInChainPassingTest:(/*^block*/id)arg1 ;
-(void)_handleKeyEvent:(GSEventRef)arg1 ;
-(void)_wheelChangedWithEvent:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)motionBegan:(long long)arg1 withEvent:(id)arg2 ;
-(void)motionEnded:(long long)arg1 withEvent:(id)arg2 ;
-(void)motionCancelled:(long long)arg1 withEvent:(id)arg2 ;
-(NSArray *)keyCommands;
-(void)_handleGameControllerEvent:(id)arg1 ;
-(UITextInputMode *)textInputMode;
-(BOOL)_canShowTextServices;
-(id)_showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(CGRect)arg3 inView:(id)arg4 ;
-(id)_showServiceForText:(id)arg1 selectedTextRange:(NSRange)arg2 type:(long long)arg3 fromRect:(CGRect)arg4 inView:(id)arg5 ;
-(void)_rebuildStateRestorationIdentifierPath;
-(NSString *)restorationIdentifier;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(id)_restorationIdentifierPath;
-(BOOL)isEditable;
-(void)_setFirstResponder:(id)arg1 ;
-(void)_moveWithEvent:(id)arg1 ;
-(BOOL)resignFirstResponder;
-(void)_didChangeDeepestUnambiguousResponder;
-(id)_firstResponder;
-(void)_completeForwardingTouches:(id)arg1 phase:(long long)arg2 event:(id)arg3 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)_windowResignedKey;
-(void)_windowBecameKey;
-(id)_responderWindow;
-(void)gestureEnded:(GSEventRef)arg1 ;
-(void)setRestorationIdentifier:(NSString *)arg1 ;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(BOOL)_disableAutomaticKeyboardUI;
-(BOOL)_becomeFirstResponderWhenPossible;
-(BOOL)_supportsBecomeFirstResponderWhenPossible;
-(id)_responderSelectionContainerViewForResponder:(id)arg1 ;
-(id)_responderForBecomeFirstResponder;
-(id)_nextResponderOverride;
-(BOOL)canBecomeFirstResponder;
-(id)_nextKeyResponder;
-(id)_previousKeyResponder;
-(void)_gatherKeyResponders:(id)arg1 indexOfSelf:(unsigned long long*)arg2 visibilityTest:(/*^block*/id)arg3 passingTest:(/*^block*/id)arg4 ;
-(void)_clearBecomeFirstResponderWhenCapable;
-(BOOL)_canBecomeFirstResponderWhenPossible;
-(CGRect)_responderSelectionRectForWindow:(id)arg1 ;
-(CGRect)_responderExternalTouchRectForWindow:(id)arg1 ;
-(id)nextFirstResponder;
-(void)_clearOverrideNextResponder;
-(void)_clearRestorableResponderStatus;
-(BOOL)_resignIfContainsFirstResponder;
-(BOOL)isFirstResponder;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(BOOL)_isRootForKeyResponderCycle;
-(BOOL)_requiresKeyboardWhenFirstResponder;
-(id)textInputView;
-(long long)selectionAffinity;
-(void)updateUserActivityState:(id)arg1 ;
-(BOOL)isEditing;
-(BOOL)_isTransitioningFromView:(id)arg1 ;
-(void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEstimatedPropertiesUpdated:(id)arg1 ;
-(id)interactionAssistant;
-(CGRect)_selectionClipRect;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(UIView*<UITextInputPrivate>)_textSelectingContainer;
-(BOOL)_canBecomeFirstResponder;
-(BOOL)_ownsInputAccessoryView;
-(BOOL)_shouldRestorationInputViewsOnlyWhenKeepingFirstResponder;
-(void)_beginPinningInputViews;
-(void)_endPinningInputViews;
-(BOOL)_isViewController;
-(BOOL)_canResignIfContainsFirstResponder;
-(id)_keyCommands;
-(NSUserActivity *)userActivity;
-(void)setUserActivity:(NSUserActivity *)arg1 ;
-(id)_userActivity;
-(UIResponder *)_editingDelegate;
-(BOOL)_canChangeFirstResponder:(id)arg1 toResponder:(id)arg2 ;
-(BOOL)_finishResignFirstResponder;
-(void)_becomeFirstResponder;
-(void)reloadInputViews;
-(void)_resignFirstResponder;
-(BOOL)canResignFirstResponder;
-(id)_effectivePasteConfiguration;
-(id)_targetCanPerformBlock:(/*^block*/id)arg1 ;
-(void)pasteItemProviders:(id)arg1 ;
-(id)_currentOverrideClient;
-(UIView *)inputAccessoryView;
-(UIInputViewController *)inputAccessoryViewController;
-(id)recentsAccessoryView;
-(BOOL)_enableAutomaticKeyboardPressDone;
-(id)_keyboardResponder;
-(void)_completeForwardingTouches:(id)arg1 phase:(long long)arg2 event:(id)arg3 index:(unsigned long long)arg4 ;
-(id)_primaryContentResponder;
-(void)_willChangeToFirstResponder:(id)arg1 ;
-(void)_didChangeToFirstResponder:(id)arg1 ;
-(long long)_dragDataOwner;
-(long long)_dropDataOwner;
-(void)remoteControlReceivedWithEvent:(id)arg1 ;
-(void)scrollWheel:(GSEventRef)arg1 ;
-(void)gestureStarted:(GSEventRef)arg1 ;
-(void)gestureChanged:(GSEventRef)arg1 ;
-(BOOL)_restoreFirstResponder;
-(id)_currentOverrideHost;
-(id)_overrideHost;
-(void)_clearOverrideHost;
-(void)_preserveResponderOverridesWhilePerforming:(/*^block*/id)arg1 ;
-(void)_overrideInputViewNextResponderWithResponder:(id)arg1 ;
-(void)_overrideInputAccessoryViewNextResponderWithResponder:(id)arg1 ;
-(void)_tagAsRestorableResponder;
-(BOOL)_requiresKeyboardWindowWhenFirstResponder;
-(BOOL)_requiresKeyboardResetOnReload;
-(void)_nonDestructivelyResignFirstResponder;
-(void)_becomeFirstResponderAndMakeVisible;
-(BOOL)_isPinningInputViews;
-(id)_responderSelectionImage;
-(id)pasteConfiguration;
-(void)setPasteConfiguration:(id)arg1 ;
-(BOOL)canPasteItemProviders:(id)arg1 ;
-(void)_setDragDataOwner:(long long)arg1 ;
-(void)_setDropDataOwner:(long long)arg1 ;
-(UIView *)inputView;
-(UIInputViewController *)inputViewController;
-(NSString *)textInputContextIdentifier;
-(BOOL)shouldReloadInputViews;
-(void)reloadInputViewsWithoutReset;
-(UITextInputAssistantItem *)inputAssistantItem;
-(id)_proxyTextInput;
-(NSRange)_selectedNSRange;
-(BOOL)_usesDeemphasizedTextAppearance;
-(int)_indexForTextPosition:(id)arg1 ;
-(NSRange)_nsrangeForTextRange:(id)arg1 ;
-(id)_textRangeFromNSRange:(NSRange)arg1 ;
-(id)_fullText;
-(unsigned)_characterAfterCaretSelection;
-(unsigned)_characterBeforeCaretSelection;
-(unsigned)_characterInRelationToCaretSelection:(int)arg1 ;
-(unsigned)_characterInRelationToRangedSelection:(int)arg1 ;
-(unsigned)_characterInRelationToPosition:(id)arg1 amount:(int)arg2 ;
-(id)_wordContainingCaretSelection;
-(BOOL)_selectionAtWordStart;
-(BOOL)_selectionAtDocumentStart;
-(BOOL)_selectionAtDocumentEnd;
-(BOOL)_isEmptySelection;
-(BOOL)_hasMarkedTextOrRangedSelection;
-(void)_extendCurrentSelection:(int)arg1 ;
-(void)_moveCurrentSelection:(int)arg1 ;
-(void)_expandSelectionToBackwardDeletionCluster;
-(void)_expandSelectionToStartOfWordBeforeCaretSelection;
-(void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1 ;
-(void)_setCaretSelectionAtEndOfSelection;
-(void)_replaceCurrentWordWithText:(id)arg1 ;
-(void)_replaceDocumentWithText:(id)arg1 ;
-(id)_positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2 ;
-(id)_positionFromPosition:(id)arg1 pastTextUnit:(long long)arg2 inDirection:(long long)arg3 ;
-(id)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(id)arg2 ;
-(id)_rangeOfTextUnit:(long long)arg1 enclosingPosition:(id)arg2 ;
-(id)_rangeOfEnclosingWord:(id)arg1 ;
-(id)_rangeOfLineEnclosingPosition:(id)arg1 ;
-(id)_rangeOfSentenceEnclosingPosition:(id)arg1 ;
-(id)_rangeOfParagraphEnclosingPosition:(id)arg1 ;
-(id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2 ;
-(id)_fullRange;
-(id)_rangeSpanningTextUnit:(long long)arg1 andPosition:(id)arg2 ;
-(id)_findPleasingWordBoundaryFromPosition:(id)arg1 ;
-(BOOL)_range:(id)arg1 containsRange:(id)arg2 ;
-(BOOL)_range:(id)arg1 intersectsRange:(id)arg2 ;
-(id)_intersectionOfRange:(id)arg1 andRange:(id)arg2 ;
-(void)_deleteByWord;
-(void)_deleteToStartOfLine;
-(void)_deleteToEndOfLine;
-(void)_deleteBackwardAndNotify:(BOOL)arg1 ;
-(void)_deleteForwardAndNotify:(BOOL)arg1 ;
-(id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2 ;
-(id)_textColorForCaretSelection;
-(id)_fontForCaretSelection;
-(void)_scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2 ;
-(id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(BOOL)arg4 ;
-(long long)_selectionAffinity;
-(void)_selectAll;
-(NSRange)_selectedRangeWithinMarkedText;
-(BOOL)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(BOOL)arg3 ;
-(id)_moveUp:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveDown:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveLeft:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveRight:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfWord:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfParagraph:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfLine:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfDocument:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfWord:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfParagraph:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfLine:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfDocument:(BOOL)arg1 withHistory:(id)arg2 ;
-(void)_setGestureRecognizers;
-(void)_setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)_unmarkText;
-(BOOL)_hasMarkedText;
-(id)_newPhraseBoundaryGestureRecognizer;
-(void)_phraseBoundaryGesture:(id)arg1 ;
-(BOOL)_usesAsynchronousProtocol;
-(CGRect)_lastRectForRange:(id)arg1 ;
-(id)textInputSuggestionDelegate;
-(CGRect)_caretRect;
-(id)_selectableText;
-(long long)_opposingDirectionFromDirection:(long long)arg1 ;
-(id)_keyInput;
-(void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2 ;
-(id)_setHistory:(id)arg1 withExtending:(BOOL)arg2 withAnchor:(int)arg3 withAffinityDownstream:(BOOL)arg4 ;
-(id)_setSelectionRangeWithHistory:(id)arg1 ;
-(id)_asTextSelection;
@end
