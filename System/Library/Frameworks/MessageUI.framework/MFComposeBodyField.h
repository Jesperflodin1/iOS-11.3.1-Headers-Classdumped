/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIWebDocumentView.h>
#import <libobjc.A.dylib/MFComposeBodyFieldInternal.h>
#import <libobjc.A.dylib/WebResourceLoadDelegate.h>
#import <libobjc.A.dylib/MFComposeBodyField.h>

@protocol MFComposeBodyField <NSObject>
@property (assign,nonatomic) id<MFMailComposeViewDelegate> mailComposeViewDelegate; 
@property (assign,getter=isDirty,nonatomic) BOOL dirty; 
@required
-(NSRange*)selectedRange;
-(void)setDirty:(BOOL)arg1;
-(void)changeQuoteLevel:(long long)arg1;
-(void)setMailComposeViewDelegate:(id)arg1;
-(void)layoutWithMinimumSize;
-(void)updateInputAssistantItem;
-(void)replaceImagesIfNecessary;
-(void)setMarkupString:(id)arg1;
-(void)setMarkupString:(id)arg1 quote:(BOOL)arg2;
-(void)appendMarkupString:(id)arg1 quote:(BOOL)arg2;
-(id<MFMailComposeViewDelegate>)mailComposeViewDelegate;
-(void)insertDocumentWithData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4;
-(id)nextAttachmentName;
-(void)setPrefersFirstLineSelection;
-(void)scaleImagesToScale:(unsigned long long)arg1;
-(void)unscaleImages;
-(void)setAttachmentURLsToBeReplacedWithFilename:(id)arg1;
-(void)prependPreamble:(id)arg1;
-(void)prependMarkupString:(id)arg1 quote:(BOOL)arg2;
-(void)appendOrReplace:(id)arg1 withMarkupString:(id)arg2 quote:(BOOL)arg3;
-(void)addMailAttributesBeforeDisplayHidingTrailingEmptyQuotes:(BOOL)arg1;
-(id)containsRichText;
-(id)plainTextContent;
-(void)getHTMLStringsAttachmentsCharsetsAndPlainTextAlternative:(/*^block*/id)arg1;
-(id)htmlString;
-(CGRect*)rectOfElementWithID:(id)arg1;
-(void)setCaretPosition:(unsigned long long)arg1;
-(void)removeDropPlaceholders;
-(void)beginPreventingLayout;
-(void)endPreventingLayout;
-(void)insertPhotoOrVideoWithInfoDictionary:(id)arg1;
-(void)insertDocumentWithURL:(id)arg1 isDrawingFile:(BOOL)arg2;
-(void)replaceAttachment:(id)arg1 withDocumentAtURL:(id)arg2 completion:(/*^block*/id)arg3;
-(void)replaceAttachment:(id)arg1 withDocumentData:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4;
-(BOOL)isDirty;
-(void)prependString:(id)arg1;

@end

#import <UIKit/UIWebDraggingDelegate.h>

@protocol MFMailComposeViewDelegate;
@class UIBarButtonItemGroup, DOMHTMLElement, DOMHTMLDocument, NSString, NSArray, NSMutableSet, NSMutableDictionary, UIView, NSDictionary;

@interface MFComposeBodyField : UIWebDocumentView <MFComposeBodyFieldInternal, WebResourceLoadDelegate, MFComposeBodyField, UIWebDraggingDelegate> {

	DOMHTMLElement* _body;
	DOMHTMLDocument* _document;
	DOMHTMLElement* _blockquote;
	CGSize _originalSize;
	CGSize _layoutSize;
	BOOL _shouldShowStandardButtons;
	unsigned _isDirty : 1;
	unsigned _forwardingNotification : 1;
	unsigned _isLoading : 1;
	unsigned _needsReplaceImages : 1;
	NSRange _rangeToSelect;
	id<MFMailComposeViewDelegate> _mailComposeViewDelegate;
	NSString* _compositionContextID;
	int _preventLayout;
	BOOL _prefersFirstLineSelection;
	unsigned long long _imageCount;
	unsigned long long _attachmentSequenceNumber;
	UIEdgeInsets _previousLayoutMargins;
	NSArray* _attachmentURLsToReplaceWithFilenames;
	UIBarButtonItemGroup* _inputAssistantItemGroup;
	BOOL _createAttachmentsForUnknownDataTypes;
	NSMutableSet* _drawingAttachmentNames;
	NSMutableDictionary* _droppedAttachments;
	UIView* _imageDropSnapshot;
	NSDictionary* _attachmentDragPreviews;
	NSMutableDictionary* _dropProgressObservationsByPlaceholderId;
	NSString* _localDragSessionID;

}

@property (nonatomic,retain) NSMutableDictionary * droppedAttachments;                                                         //@synthesize droppedAttachments=_droppedAttachments - In the implementation block
@property (nonatomic,retain) UIView * imageDropSnapshot;                                                                       //@synthesize imageDropSnapshot=_imageDropSnapshot - In the implementation block
@property (nonatomic,retain) NSDictionary * attachmentDragPreviews;                                                            //@synthesize attachmentDragPreviews=_attachmentDragPreviews - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dropProgressObservationsByPlaceholderId;                                    //@synthesize dropProgressObservationsByPlaceholderId=_dropProgressObservationsByPlaceholderId - In the implementation block
@property (nonatomic,copy) NSString * localDragSessionID;                                                                      //@synthesize localDragSessionID=_localDragSessionID - In the implementation block
@property (assign) BOOL shouldShowStandardButtons;                                                                             //@synthesize shouldShowStandardButtons=_shouldShowStandardButtons - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowMarkupButton; 
@property (nonatomic,readonly) BOOL shouldShowInsertPhotosButton; 
@property (nonatomic,readonly) BOOL canPaste; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<MFMailComposeViewDelegate> mailComposeViewDelegate; 
@property (assign,getter=isDirty,nonatomic) BOOL dirty; 
@property (nonatomic,retain,readonly) UIBarButtonItemGroup * _mailComposeEditingInputAssistantGroup; 
@property (setter=_setInputAssistantItemGroup:,nonatomic,retain) UIBarButtonItemGroup * _inputAssistantItemGroup; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(id)keyCommands;
-(void)layoutMarginsDidChange;
-(void)deferredBecomeFirstResponder;
-(NSRange)selectedRange;
-(void)setSelectedRange:(NSRange)arg1 ;
-(void)paste:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)webViewDidChange:(id)arg1 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3 ;
-(BOOL)_webView:(id)arg1 allowsSelectingContentAfterDropForSession:(id)arg2 ;
-(void)ensureSelection;
-(BOOL)webView:(id)arg1 shouldInsertText:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4 ;
-(BOOL)webView:(id)arg1 shouldDeleteDOMRange:(id)arg2 ;
-(id)_webView:(id)arg1 adjustedItemProviders:(id)arg2 ;
-(id)_webView:(id)arg1 willPerformDropWithSession:(id)arg2 ;
-(id)_webView:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(id)_webView:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3 ;
-(id)_webView:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3 ;
-(void)_webView:(id)arg1 dropWasHandled:(BOOL)arg2 forSession:(id)arg3 itemProviders:(id)arg4 ;
-(id)_webView:(id)arg1 willUpdateDropProposalToProposal:(id)arg2 forSession:(id)arg3 ;
-(void)_webView:(id)arg1 dropInteraction:(id)arg2 item:(id)arg3 willAnimateDropWithAnimator:(id)arg4 ;
-(long long)_webView:(id)arg1 dataOwnerForDragSession:(id)arg2 ;
-(long long)_webView:(id)arg1 dataOwnerForDropSession:(id)arg2 ;
-(id)documentFragmentForPasteboardItemAtIndex:(long long)arg1 ;
-(BOOL)_sourceIsManaged;
-(void)setSelectedDOMRange:(id)arg1 affinityDownstream:(BOOL)arg2 ;
-(void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2 ;
-(id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5 ;
-(void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3 ;
-(void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4 ;
-(double)contentWidth;
-(BOOL)canPaste;
-(void)setDirty:(BOOL)arg1 ;
-(void)addAdditionalItemsToCalloutBar;
-(void)setShouldShowStandardButtons:(BOOL)arg1 ;
-(void)changeQuoteLevel:(long long)arg1 ;
-(BOOL)shouldShowStandardButtons;
-(void)markupSelectedAttachment;
-(void)setMailComposeViewDelegate:(id<MFMailComposeViewDelegate>)arg1 ;
-(void)setPinHeight:(double)arg1 ;
-(void)layoutWithMinimumSize;
-(void)updateQuoteLevelMenu;
-(void)didUndoOrRedo:(id)arg1 ;
-(void)setLocalDragSessionID:(NSString *)arg1 ;
-(void)setDropProgressObservationsByPlaceholderId:(NSMutableDictionary *)arg1 ;
-(UIBarButtonItemGroup *)_mailComposeEditingInputAssistantGroup;
-(void)updateInputAssistantItem;
-(id)_selectedAttachmentURLForMarkup;
-(void)_replaceImages;
-(void)_applyLayoutMarginsToBodyStyle;
-(void)_finishedLoadingURLRequest:(id)arg1 name:(id)arg2 ;
-(void)replaceImagesIfNecessary;
-(void)webViewDidDraw:(id)arg1 ;
-(void)setMarkupString:(id)arg1 ;
-(void)setMarkupString:(id)arg1 quote:(BOOL)arg2 ;
-(void)_nts_AddDOMNode:(id)arg1 quote:(BOOL)arg2 emptyFirst:(BOOL)arg3 prepended:(BOOL)arg4 ;
-(void)_ensureQuotedImagesHaveAttachmentStyleForElement:(id)arg1 ;
-(void)addDOMNode:(id)arg1 quote:(BOOL)arg2 emptyFirst:(BOOL)arg3 prepended:(BOOL)arg4 ;
-(void)addMarkupString:(id)arg1 quote:(BOOL)arg2 emptyFirst:(BOOL)arg3 prepended:(BOOL)arg4 ;
-(void)prependMarkupString:(id)arg1 quote:(BOOL)arg2 emptyFirst:(BOOL)arg3 ;
-(void)appendMarkupString:(id)arg1 quote:(BOOL)arg2 ;
-(void)insertNode:(id)arg1 parent:(id)arg2 nextSibling:(id)arg3 ;
-(void)restoreSelectionFromTemporaryMarkers:(BOOL)arg1 ;
-(void)deleteNode:(id)arg1 ;
-(void)_deleteContentInContainer:(id)arg1 startParent:(id)arg2 startNextSibling:(id)arg3 endParent:(id)arg4 endNextSibling:(id)arg5 ;
-(void)insertNode:(id)arg1 parent:(id)arg2 offset:(int)arg3 ;
-(void)replaceNode:(id)arg1 oldNode:(id)arg2 ;
-(void)setSelectionStart:(id)arg1 offset:(int)arg2 end:(id)arg3 offset:(int)arg4 affinity:(int)arg5 ;
-(BOOL)shouldShowMarkupButton;
-(BOOL)shouldShowInsertPhotosButton;
-(void)saveSelectionForUndo;
-(id)insertTemporarySelectionMarkersForRange:(id)arg1 ;
-(void)splitUpBlockQuotesOverlappingStartOfRange:(id)arg1 ;
-(void)splitUpBlockQuotesOverlappingEndOfRange:(id)arg1 ;
-(void)removeBlockQuoteFromTree:(id)arg1 ;
-(id)temporaryEndingSelectionMarker;
-(void)restoreSelectionFromTemporaryMarkers;
-(void)changeQuoteLevel:(long long)arg1 forDOMRange:(id)arg2 ;
-(id<MFMailComposeViewDelegate>)mailComposeViewDelegate;
-(id)_nodeForAttachmentFileURL:(id)arg1 text:(id)arg2 type:(id)arg3 contentID:(id)arg4 ;
-(id)_nodeForAttachmentData:(id)arg1 text:(id)arg2 type:(id)arg3 ;
-(void)_insertNodeIntoCurrentSelection:(id)arg1 ;
-(void)insertDocumentWithData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4 ;
-(id)_nodeForAttachmentData:(id)arg1 text:(id)arg2 type:(id)arg3 contentID:(id)arg4 ;
-(void)_didTapInsertPhotoInputAssistantButton:(id)arg1 ;
-(UIBarButtonItemGroup *)_inputAssistantItemGroup;
-(void)_setInputAssistantItemGroup:(id)arg1 ;
-(void)_pasteAsQuotationKeyCommandInvoked:(id)arg1 ;
-(void)_increaseQuoteLevelKeyCommandInvoked:(id)arg1 ;
-(void)_decreaseQuoteLevelKeyCommandInvoked:(id)arg1 ;
-(id)compositionContextID;
-(id)plainTextAlternative;
-(id)_preferredDataTypeForItemProvider:(id)arg1 ;
-(BOOL)_isLocalItemProvider:(id)arg1 ;
-(id)_selectedAttachmentsByURL;
-(id)_dragPreviewInfoForAttachment:(id)arg1 ;
-(NSString *)localDragSessionID;
-(void)setAttachmentDragPreviews:(NSDictionary *)arg1 ;
-(id)_webView:(id)arg1 previewItem:(id)arg2 ;
-(id)_teamDataDictionaryForItemProvider:(id)arg1 ;
-(NSDictionary *)attachmentDragPreviews;
-(void)_finishedLoadingDroppedAttachments:(id)arg1 ;
-(void)_insertMapItem:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)_performAttachmentDropWithItem:(id)arg1 dataType:(id)arg2 atPoint:(CGPoint)arg3 ;
-(void)setImageDropSnapshot:(UIView *)arg1 ;
-(UIView *)imageDropSnapshot;
-(void)_unhideDOMElementsForDragItems:(id)arg1 ;
-(id)_attachmentNameForDataType:(id)arg1 fileName:(id)arg2 ;
-(BOOL)_isPreviewableImageType:(id)arg1 ;
-(id)_previewImageForDataType:(id)arg1 attachmentName:(id)arg2 ;
-(CGSize)_sizeScaledToFitContentArea:(CGSize)arg1 ;
-(id)_imageDropPlaceholderNodeWithId:(id)arg1 size:(CGSize)arg2 hasFinalSize:(BOOL)arg3 ;
-(void)_completeDropForAttachmentData:(id)arg1 dragItem:(id)arg2 dataType:(id)arg3 fileName:(id)arg4 ;
-(NSMutableDictionary *)dropProgressObservationsByPlaceholderId;
-(void)_swapPlaceholder:(id)arg1 withImageNode:(id)arg2 forceResize:(BOOL)arg3 ;
-(void)_captureAttachmentsFromPasteboard:(id)arg1 ;
-(id)nextAttachmentName;
-(id)_addInlineAttachmentWithData:(id)arg1 fileName:(id)arg2 type:(id)arg3 ;
-(id)_addInlineAttachmentWithData:(id)arg1 fileName:(id)arg2 type:(id)arg3 contentID:(id)arg4 ;
-(void)_removeInlineAttachment:(id)arg1 ;
-(void)setPrefersFirstLineSelection;
-(void)scaleImagesToScale:(unsigned long long)arg1 ;
-(void)unscaleImages;
-(void)setAttachmentURLsToBeReplacedWithFilename:(id)arg1 ;
-(void)prependPreamble:(id)arg1 ;
-(void)prependMarkupString:(id)arg1 quote:(BOOL)arg2 ;
-(void)appendOrReplace:(id)arg1 withMarkupString:(id)arg2 quote:(BOOL)arg3 ;
-(void)addMailAttributesBeforeDisplayHidingTrailingEmptyQuotes:(BOOL)arg1 ;
-(id)containsRichText;
-(id)plainTextContent;
-(void)getHTMLStringsAttachmentsCharsetsAndPlainTextAlternative:(/*^block*/id)arg1 ;
-(id)htmlString;
-(CGRect)rectOfElementWithID:(id)arg1 ;
-(void)setCaretPosition:(unsigned long long)arg1 ;
-(void)removeDropPlaceholders;
-(void)beginPreventingLayout;
-(void)endPreventingLayout;
-(void)insertPhotoOrVideoWithInfoDictionary:(id)arg1 ;
-(void)insertDocumentWithURL:(id)arg1 isDrawingFile:(BOOL)arg2 ;
-(void)replaceAttachment:(id)arg1 withDocumentAtURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)replaceAttachment:(id)arg1 withDocumentData:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4 ;
-(void)setLayoutInterval:(int)arg1 ;
-(BOOL)isForwardingNotification;
-(id)webThreadWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3 ;
-(void)_webthread_webView:(id)arg1 tileDidDraw:(id)arg2 ;
-(void)deleteTemporarySelectionMarkersFromDocument:(id)arg1 ;
-(void)_showQuoteLevelOptionsPopover:(id)arg1 ;
-(void)setCompositionContextID:(id)arg1 ;
-(NSMutableDictionary *)droppedAttachments;
-(void)setDroppedAttachments:(NSMutableDictionary *)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(BOOL)isDirty;
-(void)deleteRange:(id)arg1 ;
-(void)prependString:(id)arg1 ;
@end

