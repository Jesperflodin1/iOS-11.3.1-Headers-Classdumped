/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIFoundation/NSTextStorage.h>
#import <libobjc.A.dylib/TTMergeableStringDelegate.h>
#import <libobjc.A.dylib/TTTextUndoTarget.h>

@protocol TTTextUndoTarget, TTTextStorageStyler;
@class NSMutableAttributedString, NSUndoManager, NSObject, NSMutableArray, TTMergeableStringVersionedDocument, NSArray, TTMergeableStringUndoGroup, NSAttributedString, TTMergeableAttributedString, NSString;

@interface TTTextStorage : NSTextStorage <TTMergeableStringDelegate, TTTextUndoTarget> {

	NSMutableAttributedString* _attributedString;
	unsigned long long _temporaryAttributeEditing;
	BOOL _directlyEditing;
	BOOL _previouslyHadMarkedText;
	BOOL _wantsUndoCommands;
	BOOL _convertAttributes;
	BOOL _shouldConvertTablesToTabs;
	BOOL _retainOriginalFormatting;
	BOOL _filterSubstringAttributes;
	BOOL _filterPastedAttributes;
	BOOL _filterSubstringAttributesForPlainText;
	BOOL _disableUndoCoalesceBreaking;
	BOOL _isDictating;
	BOOL _isHandlingTextCheckingResults;
	BOOL _isTypingOrMarkingText;
	BOOL _isSelectingText;
	BOOL _hasEditedCharactersAfterTextSelection;
	BOOL _isDragging;
	BOOL _isResettingBaseWritingDirection;
	BOOL _isReadingSelectionFromPasteboard;
	BOOL _isChangingSelectionByGestures;
	BOOL _isApplyingUndoCommand;
	BOOL _isEndingEditing;
	BOOL _isFixing;
	BOOL _pendingFixupAfterEditing;
	BOOL _delayedFixupAfterEditingWantsUndoCommand;
	NSUndoManager* _undoManager;
	NSObject*<TTTextUndoTarget> _overrideUndoTarget;
	id<TTTextStorageStyler> _styler;
	NSMutableArray* _deletedRanges;
	TTMergeableStringVersionedDocument* _document;
	NSArray* _pasteboardTypes;
	NSMutableArray* _undoCommands;
	TTMergeableStringUndoGroup* _coalescingUndoGroup;
	unsigned long long _editingCount;
	unsigned long long _ttEditedMask;
	long long _ttChangeInLength;
	NSRange _beforeEndEditedRange;
	NSRange _lastUndoEditRange;
	NSRange _ttEditedRange;

}

@property (nonatomic,retain) NSMutableAttributedString * attributedString;                        //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,readonly) NSObject*<TTTextUndoTarget> undoTarget; 
@property (nonatomic,retain) NSMutableArray * undoCommands;                                       //@synthesize undoCommands=_undoCommands - In the implementation block
@property (nonatomic,retain) TTMergeableStringUndoGroup * coalescingUndoGroup;                    //@synthesize coalescingUndoGroup=_coalescingUndoGroup - In the implementation block
@property (assign,nonatomic) NSRange lastUndoEditRange;                                           //@synthesize lastUndoEditRange=_lastUndoEditRange - In the implementation block
@property (assign,nonatomic) unsigned long long editingCount;                                     //@synthesize editingCount=_editingCount - In the implementation block
@property (assign,nonatomic) BOOL isFixing;                                                       //@synthesize isFixing=_isFixing - In the implementation block
@property (assign,nonatomic) BOOL isApplyingUndoCommand;                                          //@synthesize isApplyingUndoCommand=_isApplyingUndoCommand - In the implementation block
@property (assign,nonatomic) BOOL pendingFixupAfterEditing;                                       //@synthesize pendingFixupAfterEditing=_pendingFixupAfterEditing - In the implementation block
@property (assign,nonatomic) NSRange beforeEndEditedRange;                                        //@synthesize beforeEndEditedRange=_beforeEndEditedRange - In the implementation block
@property (assign,nonatomic) NSRange ttEditedRange;                                               //@synthesize ttEditedRange=_ttEditedRange - In the implementation block
@property (assign,nonatomic) unsigned long long ttEditedMask;                                     //@synthesize ttEditedMask=_ttEditedMask - In the implementation block
@property (assign,nonatomic) long long ttChangeInLength;                                          //@synthesize ttChangeInLength=_ttChangeInLength - In the implementation block
@property (assign,nonatomic) BOOL delayedFixupAfterEditingWantsUndoCommand;                       //@synthesize delayedFixupAfterEditingWantsUndoCommand=_delayedFixupAfterEditingWantsUndoCommand - In the implementation block
@property (nonatomic,readonly) NSAttributedString * _icaxUnfilteredAttributedString; 
@property (nonatomic,retain) NSUndoManager * undoManager;                                         //@synthesize undoManager=_undoManager - In the implementation block
@property (__weak) NSObject*<TTTextUndoTarget> overrideUndoTarget;                                //@synthesize overrideUndoTarget=_overrideUndoTarget - In the implementation block
@property (assign,nonatomic) BOOL wantsUndoCommands;                                              //@synthesize wantsUndoCommands=_wantsUndoCommands - In the implementation block
@property (nonatomic,readonly) NSArray * textViews; 
@property (nonatomic,retain) id<TTTextStorageStyler> styler;                                      //@synthesize styler=_styler - In the implementation block
@property (nonatomic,readonly) NSMutableArray * deletedRanges;                                    //@synthesize deletedRanges=_deletedRanges - In the implementation block
@property (nonatomic,readonly) TTMergeableAttributedString * mergeableString; 
@property (nonatomic,readonly) TTMergeableStringVersionedDocument * document;                     //@synthesize document=_document - In the implementation block
@property (assign,nonatomic) BOOL convertAttributes;                                              //@synthesize convertAttributes=_convertAttributes - In the implementation block
@property (assign,nonatomic) BOOL shouldConvertTablesToTabs;                                      //@synthesize shouldConvertTablesToTabs=_shouldConvertTablesToTabs - In the implementation block
@property (nonatomic,copy) NSArray * pasteboardTypes;                                             //@synthesize pasteboardTypes=_pasteboardTypes - In the implementation block
@property (assign,nonatomic) BOOL retainOriginalFormatting;                                       //@synthesize retainOriginalFormatting=_retainOriginalFormatting - In the implementation block
@property (assign,nonatomic) BOOL filterSubstringAttributes;                                      //@synthesize filterSubstringAttributes=_filterSubstringAttributes - In the implementation block
@property (assign,nonatomic) BOOL filterPastedAttributes;                                         //@synthesize filterPastedAttributes=_filterPastedAttributes - In the implementation block
@property (assign,nonatomic) BOOL filterSubstringAttributesForPlainText;                          //@synthesize filterSubstringAttributesForPlainText=_filterSubstringAttributesForPlainText - In the implementation block
@property (nonatomic,readonly) BOOL isEditingTemporaryAttributes; 
@property (assign,nonatomic) BOOL disableUndoCoalesceBreaking;                                    //@synthesize disableUndoCoalesceBreaking=_disableUndoCoalesceBreaking - In the implementation block
@property (assign,nonatomic) BOOL isDictating;                                                    //@synthesize isDictating=_isDictating - In the implementation block
@property (assign,nonatomic) BOOL isHandlingTextCheckingResults;                                  //@synthesize isHandlingTextCheckingResults=_isHandlingTextCheckingResults - In the implementation block
@property (assign,nonatomic) BOOL isTypingOrMarkingText;                                          //@synthesize isTypingOrMarkingText=_isTypingOrMarkingText - In the implementation block
@property (assign,nonatomic) BOOL isSelectingText;                                                //@synthesize isSelectingText=_isSelectingText - In the implementation block
@property (assign,nonatomic) BOOL hasEditedCharactersAfterTextSelection;                          //@synthesize hasEditedCharactersAfterTextSelection=_hasEditedCharactersAfterTextSelection - In the implementation block
@property (assign,nonatomic) BOOL isDragging;                                                     //@synthesize isDragging=_isDragging - In the implementation block
@property (assign,nonatomic) BOOL isResettingBaseWritingDirection;                                //@synthesize isResettingBaseWritingDirection=_isResettingBaseWritingDirection - In the implementation block
@property (assign,nonatomic) BOOL isReadingSelectionFromPasteboard;                               //@synthesize isReadingSelectionFromPasteboard=_isReadingSelectionFromPasteboard - In the implementation block
@property (assign,nonatomic) BOOL isChangingSelectionByGestures;                                  //@synthesize isChangingSelectionByGestures=_isChangingSelectionByGestures - In the implementation block
@property (assign,nonatomic) BOOL isEndingEditing;                                                //@synthesize isEndingEditing=_isEndingEditing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)listItemGlyphPointSizeForUnorderedListStyle:(unsigned)arg1 withStyler:(id)arg2 ;
+(id)filteredAttributedSubstring:(id)arg1 fromRange:(NSRange)arg2 forPlainText:(BOOL)arg3 fixAttachments:(BOOL)arg4 ;
+(id)removeTextAttachmentsForAttributedString:(id)arg1 translateTTFont:(BOOL)arg2 ;
+(id)removeDataDetectorLinksForAttributedString:(id)arg1 ;
+(id)standardizedAttributedStringFromAttributedString:(id)arg1 withStyler:(id)arg2 fixAttachments:(BOOL)arg3 translateTTFont:(BOOL)arg4 ;
+(id)bulletTextAttributesWithTextFont:(UIFont*)arg1 paragraphStyle:(id)arg2 letterpress:(BOOL)arg3 withStyler:(id)arg4 ;
+(void)fixAttachmentsForRenderingInAttributedString:(id)arg1 forPlainText:(BOOL)arg2 ;
-(void)edited:(unsigned long long)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3 ;
-(BOOL)isDragging;
-(NSUndoManager *)undoManager;
-(void)addAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(id)string;
-(NSArray *)pasteboardTypes;
-(BOOL)isEditing;
-(void)setAttributedString:(NSMutableAttributedString *)arg1 ;
-(void)beginEditing;
-(void)endEditing;
-(void)coordinateEditing:(/*^block*/id)arg1 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(NSMutableAttributedString *)attributedString;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)removeAttribute:(id)arg1 range:(NSRange)arg2 ;
-(BOOL)_usesSimpleTextEffects;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(BOOL)_shouldSetOriginalFontAttribute;
-(TTMergeableStringVersionedDocument *)document;
-(id)initWithDocument:(id)arg1 ;
-(void)coordinateAccess:(/*^block*/id)arg1 ;
-(id)attributedSubstringFromRange:(NSRange)arg1 ;
-(void)coordinateReading:(/*^block*/id)arg1 ;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
-(id)dataFromRange:(NSRange)arg1 documentAttributes:(id)arg2 error:(id*)arg3 ;
-(void)dd_makeLinksForResultsInAttributesOfType:(unsigned long long)arg1 context:(id)arg2 ;
-(NSArray *)textViews;
-(id)initWithReplicaID:(id)arg1 ;
-(void)setConvertAttributes:(BOOL)arg1 ;
-(void)setWantsUndoCommands:(BOOL)arg1 ;
-(void)setShouldConvertTablesToTabs:(BOOL)arg1 ;
-(id<TTTextStorageStyler>)styler;
-(void)breakUndoCoalescing;
-(void)resetUndoManager;
-(NSRange)logicalRangeForLocation:(unsigned long long)arg1 ;
-(BOOL)wantsUndoCommands;
-(id)savedSelectionWithSelectionAffinity:(unsigned long long)arg1 ;
-(void)restoreSelection:(id)arg1 ;
-(void)setOverrideUndoTarget:(NSObject*<TTTextUndoTarget>)arg1 ;
-(id)initWithData:(id)arg1 andReplicaID:(id)arg2 ;
-(TTMergeableAttributedString *)mergeableString;
-(void)replaceWithDocument:(id)arg1 ;
-(BOOL)isEditingOrConvertingMarkedText:(BOOL)arg1 ;
-(void)styleTextInRange:(NSRange)arg1 ;
-(void)setStyler:(id<TTTextStorageStyler>)arg1 ;
-(void)fixupAfterEditing;
-(void)setFilterPastedAttributes:(BOOL)arg1 ;
-(void)setIsReadingSelectionFromPasteboard:(BOOL)arg1 ;
-(void)resetTTEdits;
-(NSObject*<TTTextUndoTarget>)overrideUndoTarget;
-(void)applyUndoWithBlock:(/*^block*/id)arg1 ;
-(void)setIsApplyingUndoCommand:(BOOL)arg1 ;
-(NSRange)ttEditedRange;
-(void)setPendingFixupAfterEditing:(BOOL)arg1 ;
-(BOOL)disableUndoCoalesceBreaking;
-(TTMergeableStringUndoGroup *)coalescingUndoGroup;
-(void)setCoalescingUndoGroup:(TTMergeableStringUndoGroup *)arg1 ;
-(BOOL)pendingFixupAfterEditing;
-(BOOL)isFixing;
-(void)setIsFixing:(BOOL)arg1 ;
-(unsigned long long)ttEditedMask;
-(long long)ttChangeInLength;
-(void)saveSelectionDuringBlock:(/*^block*/id)arg1 ;
-(BOOL)delayedFixupAfterEditingWantsUndoCommand;
-(void)setDelayedFixupAfterEditingWantsUndoCommand:(BOOL)arg1 ;
-(void)executeDelayedFixupAfterEditing;
-(void)setBeforeEndEditedRange:(NSRange)arg1 ;
-(BOOL)isEndingEditing;
-(void)setIsEndingEditing:(BOOL)arg1 ;
-(unsigned long long)editingCount;
-(void)setEditingCount:(unsigned long long)arg1 ;
-(void)setTtEditedMask:(unsigned long long)arg1 ;
-(BOOL)isApplyingUndoCommand;
-(void)fixupAfterEditingDelayedToEndOfRunLoop;
-(NSMutableArray *)undoCommands;
-(NSObject*<TTTextUndoTarget>)undoTarget;
-(id)newCoalescingUndoGroup;
-(void)applyUndoGroup:(id)arg1 ;
-(BOOL)isTypingOrMarkingText;
-(BOOL)isSelectingText;
-(void)forceFixupAfterEditingIfDelayed;
-(void)saveSelectionDuringBlock:(/*^block*/id)arg1 affinity:(unsigned long long)arg2 ;
-(BOOL)isDeletingDictationAttachmentWithReplacementRange:(NSRange)arg1 replacementLength:(unsigned long long)arg2 ;
-(BOOL)shouldBreakUndoCoalescingWithReplacementRange:(NSRange)arg1 replacementLength:(unsigned long long)arg2 ;
-(BOOL)isDictating;
-(BOOL)textViewHasMarkedText:(UITextView*)arg1 ;
-(NSRange)lastUndoEditRange;
-(BOOL)isDeletingContentAttachmentWithReplacementRange:(NSRange)arg1 replacementLength:(unsigned long long)arg2 ;
-(BOOL)isHandlingTextCheckingResults;
-(void)setLastUndoEditRange:(NSRange)arg1 ;
-(BOOL)hasEditedCharactersAfterTextSelection;
-(id)correctParagraphStyleReuseForRange:(NSRange)arg1 withNewAttributedString:(id)arg2 ;
-(void)preReplaceCharactersInRange:(NSRange)arg1 withStringLength:(unsigned long long)arg2 ;
-(BOOL)filterPastedAttributes;
-(BOOL)convertAttributes;
-(BOOL)shouldConvertTablesToTabs;
-(void)convertNSTablesToTabs:(id)arg1 ;
-(BOOL)isReadingSelectionFromPasteboard;
-(void)setHasEditedCharactersAfterTextSelection:(BOOL)arg1 ;
-(void)beginTemporaryAttributes;
-(void)endTemporaryAttributes;
-(void)dd_resetResults;
-(BOOL)ic_containsAttribute:(id)arg1 InRange:(NSRange)arg2 ;
-(BOOL)isResettingBaseWritingDirection;
-(BOOL)isEditingTemporaryAttributes;
-(BOOL)filterSubstringAttributes;
-(id)filteredAttributedSubstringFromRange:(NSRange)arg1 ;
-(BOOL)filterSubstringAttributesForPlainText;
-(void)addUndoCommand:(id)arg1 ;
-(id)initWithAttributedString:(id)arg1 replicaID:(id)arg2 ;
-(id)initWithAttributedString:(id)arg1 replicaID:(id)arg2 sourceZoomController:(id)arg3 keepSourceZoomController:(BOOL)arg4 ;
-(void)restoreAttributedString:(id)arg1 ;
-(void)editedRange:(NSRange)arg1 changeInLength:(long long)arg2 ;
-(void)editedAttributeRange:(NSRange)arg1 ;
-(BOOL)mergeableStringIsEqualAfterSerialization:(id)arg1 ;
-(unsigned long long)mergeWithDocument:(id)arg1 ;
-(void)beginTemporaryAttributeEditing;
-(void)endTemporaryAttributeEditing;
-(id)standardizedAttributedStringFixingTextAttachments;
-(NSRange)safeCharacterRangeForRange:(NSRange)arg1 ;
-(NSAttributedString *)_icaxUnfilteredAttributedString;
-(NSMutableArray *)deletedRanges;
-(NSRange)beforeEndEditedRange;
-(void)setPasteboardTypes:(NSArray *)arg1 ;
-(BOOL)retainOriginalFormatting;
-(void)setRetainOriginalFormatting:(BOOL)arg1 ;
-(void)setFilterSubstringAttributes:(BOOL)arg1 ;
-(void)setFilterSubstringAttributesForPlainText:(BOOL)arg1 ;
-(void)setDisableUndoCoalesceBreaking:(BOOL)arg1 ;
-(void)setIsDictating:(BOOL)arg1 ;
-(void)setIsHandlingTextCheckingResults:(BOOL)arg1 ;
-(void)setIsTypingOrMarkingText:(BOOL)arg1 ;
-(void)setIsSelectingText:(BOOL)arg1 ;
-(void)setIsDragging:(BOOL)arg1 ;
-(void)setIsResettingBaseWritingDirection:(BOOL)arg1 ;
-(BOOL)isChangingSelectionByGestures;
-(void)setIsChangingSelectionByGestures:(BOOL)arg1 ;
-(void)setUndoCommands:(NSMutableArray *)arg1 ;
-(void)setTtEditedRange:(NSRange)arg1 ;
-(void)setTtChangeInLength:(long long)arg1 ;
-(id)copyDataForUTI:(id)arg1 range:(NSRange)arg2 persistenceHelper:(id)arg3 ;
-(id)customPasteboardDataFromRange:(NSRange)arg1 persistenceHelper:(id)arg2 ;
-(id)filteredAttributedStringForUTI:(id)arg1 range:(NSRange)arg2 ;
@end

