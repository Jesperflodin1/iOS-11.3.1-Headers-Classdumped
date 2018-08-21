/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/CKMessageEntryRichTextViewDelegate.h>
#import <libobjc.A.dylib/CKMessageEntryViewStyleProtocol.h>

@protocol CKPluginEntryViewController;
@class CKComposition, CKMessageEntryTextView, CKMessageEntryRichTextView, UIViewController, CKConversation, UIView, IMPluginPayload, UIButton, NSString;

@interface CKMessageEntryContentView : UIScrollView <UITextViewDelegate, CKMessageEntryRichTextViewDelegate, CKMessageEntryViewStyleProtocol> {

	BOOL _shouldShowSubject;
	BOOL _needsTextLayout;
	BOOL _needsEnsureSelectionVisible;
	BOOL _needsEnsureTextViewVisible;
	BOOL _ignoreEndEditing;
	BOOL _isCompositionExpirable;
	BOOL _pendingShelfPayloadWillAnimateIn;
	CKComposition* _composition;
	long long _style;
	CKMessageEntryTextView* _subjectView;
	CKMessageEntryRichTextView* _textView;
	double _placeHolderWidth;
	double _maxContentWidthWhenExpanded;
	double _containerViewLineWidth;
	double _sendButtonTextInsetWidth;
	UIViewController*<CKPluginEntryViewController> _pluginEntryViewController;
	CKConversation* _conversation;
	UIView* _activeView;
	IMPluginPayload* _shelfPluginPayload;
	UIView* _textAndSubjectDividerLine;
	UIView* _pluginDividerLine;
	UIButton* _clearPluginButton;
	NSString* _requestedPlaceholderText;
	NSString* _overridePlaceholderText;

}

@property (assign,nonatomic,__weak) UIView * activeView;                                                            //@synthesize activeView=_activeView - In the implementation block
@property (assign,nonatomic) BOOL shouldShowSubject;                                                                //@synthesize shouldShowSubject=_shouldShowSubject - In the implementation block
@property (nonatomic,retain) UIViewController*<CKPluginEntryViewController> pluginEntryViewController;              //@synthesize pluginEntryViewController=_pluginEntryViewController - In the implementation block
@property (nonatomic,retain) IMPluginPayload * shelfPluginPayload;                                                  //@synthesize shelfPluginPayload=_shelfPluginPayload - In the implementation block
@property (nonatomic,retain) CKMessageEntryTextView * subjectView;                                                  //@synthesize subjectView=_subjectView - In the implementation block
@property (nonatomic,retain) CKMessageEntryRichTextView * textView;                                                 //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) UIView * textAndSubjectDividerLine;                                                    //@synthesize textAndSubjectDividerLine=_textAndSubjectDividerLine - In the implementation block
@property (nonatomic,retain) UIView * pluginDividerLine;                                                            //@synthesize pluginDividerLine=_pluginDividerLine - In the implementation block
@property (assign,nonatomic) BOOL needsTextLayout;                                                                  //@synthesize needsTextLayout=_needsTextLayout - In the implementation block
@property (assign,nonatomic) BOOL needsEnsureSelectionVisible;                                                      //@synthesize needsEnsureSelectionVisible=_needsEnsureSelectionVisible - In the implementation block
@property (assign,nonatomic) BOOL needsEnsureTextViewVisible;                                                       //@synthesize needsEnsureTextViewVisible=_needsEnsureTextViewVisible - In the implementation block
@property (assign,nonatomic) BOOL ignoreEndEditing;                                                                 //@synthesize ignoreEndEditing=_ignoreEndEditing - In the implementation block
@property (assign,nonatomic) BOOL isCompositionExpirable;                                                           //@synthesize isCompositionExpirable=_isCompositionExpirable - In the implementation block
@property (nonatomic,retain) UIButton * clearPluginButton;                                                          //@synthesize clearPluginButton=_clearPluginButton - In the implementation block
@property (nonatomic,retain) NSString * requestedPlaceholderText;                                                   //@synthesize requestedPlaceholderText=_requestedPlaceholderText - In the implementation block
@property (nonatomic,retain) NSString * overridePlaceholderText;                                                    //@synthesize overridePlaceholderText=_overridePlaceholderText - In the implementation block
@property (assign,nonatomic) BOOL pendingShelfPayloadWillAnimateIn;                                                 //@synthesize pendingShelfPayloadWillAnimateIn=_pendingShelfPayloadWillAnimateIn - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowPlugin; 
@property (nonatomic,retain) CKComposition * composition;                                                           //@synthesize composition=_composition - In the implementation block
@property (nonatomic,copy) NSString * placeholderText; 
@property (nonatomic,readonly) UIView * pluginView; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isSingleLine,nonatomic,readonly) BOOL singleLine; 
@property (getter=isShowingDictationPlaceholder,nonatomic,readonly) BOOL showingDictationPlaceholder; 
@property (nonatomic,readonly) UIEdgeInsets contentTextAlignmentInsets; 
@property (assign,nonatomic) char balloonColor; 
@property (assign,nonatomic) double placeHolderWidth;                                                               //@synthesize placeHolderWidth=_placeHolderWidth - In the implementation block
@property (assign,nonatomic) double maxContentWidthWhenExpanded;                                                    //@synthesize maxContentWidthWhenExpanded=_maxContentWidthWhenExpanded - In the implementation block
@property (assign,nonatomic) double containerViewLineWidth;                                                         //@synthesize containerViewLineWidth=_containerViewLineWidth - In the implementation block
@property (assign,nonatomic) double sendButtonTextInsetWidth;                                                       //@synthesize sendButtonTextInsetWidth=_sendButtonTextInsetWidth - In the implementation block
@property (assign,nonatomic,__weak) CKConversation * conversation;                                                  //@synthesize conversation=_conversation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long style;                                                                       //@synthesize style=_style - In the implementation block
+(id)_createTextView;
+(id)_createSubjectView;
+(void)prewarmTextView;
-(BOOL)makeActive;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isActive;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setTextView:(CKMessageEntryRichTextView *)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)acceptAutocorrection;
-(CKMessageEntryRichTextView *)textView;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(CKConversation *)conversation;
-(void)setConversation:(CKConversation *)arg1 ;
-(void)setSendButtonTextInsetWidth:(double)arg1 ;
-(void)setPlaceHolderWidth:(double)arg1 ;
-(CKMessageEntryTextView *)subjectView;
-(CKComposition *)composition;
-(void)setMaxContentWidthWhenExpanded:(double)arg1 ;
-(BOOL)isSingleLine;
-(BOOL)shouldShowSubject;
-(void)setShouldShowSubject:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 shouldShowSubject:(BOOL)arg2 ;
-(void)setContainerViewLineWidth:(double)arg1 ;
-(void)setComposition:(CKComposition *)arg1 ;
-(IMPluginPayload *)shelfPluginPayload;
-(void)willAnimateBoundsChange;
-(UIView *)pluginView;
-(void)setBalloonColor:(char)arg1 ;
-(BOOL)isShowingDictationPlaceholder;
-(UIViewController*<CKPluginEntryViewController>)pluginEntryViewController;
-(UIView *)activeView;
-(void)messageEntryRichTextViewDidTapHandwritingKey:(id)arg1 ;
-(double)maxWidthForPreviewImagesInMessageEntryRichTextView:(id)arg1 ;
-(char)balloonColor;
-(void)messageEntryRichTextViewWasTapped:(id)arg1 isLongPress:(BOOL)arg2 ;
-(void)messageEntryRichTextView:(id)arg1 didTapMediaObject:(id)arg2 ;
-(void)didFinishAnimatedBoundsChange;
-(double)placeHolderWidth;
-(BOOL)shouldShowPlugin;
-(double)_calcuateIdealMaxPluginHeight;
-(UIButton *)clearPluginButton;
-(BOOL)shouldShowClearButton;
-(UIView *)pluginDividerLine;
-(void)_layoutDividerLine:(id)arg1 leftInset:(double)arg2 rightInset:(double)arg3 currentYOffset:(double*)arg4 ;
-(BOOL)needsTextLayout;
-(double)_maxWidthForTextView;
-(void)_layoutTextView:(id)arg1 currentYOffset:(double*)arg2 originX:(double)arg3 maxWidth:(double)arg4 ;
-(UIView *)textAndSubjectDividerLine;
-(double)sendButtonTextInsetWidth;
-(void)ensureSelectionVisibleIfNeeded;
-(void)setNeedsTextLayout:(BOOL)arg1 ;
-(void)ensureTextViewVisibleIfNeeded;
-(double)containerViewLineWidth;
-(void)setSubjectView:(CKMessageEntryTextView *)arg1 ;
-(void)setTextAndSubjectDividerLine:(UIView *)arg1 ;
-(void)clearPluginButtonTapped:(id)arg1 ;
-(void)setClearPluginButton:(UIButton *)arg1 ;
-(void)setPluginDividerLine:(UIView *)arg1 ;
-(void)plugingPayloadWantsResize:(id)arg1 ;
-(void)plugingPayloadDidLoad:(id)arg1 ;
-(BOOL)isCompositionExpirable;
-(void)invalidateComposition;
-(void)configureShelfForPluginPayload:(id)arg1 ;
-(BOOL)_shouldDeferUpdateUI;
-(void)setIsCompositionExpirable:(BOOL)arg1 ;
-(void)setShelfPluginPayload:(IMPluginPayload *)arg1 ;
-(void)setPluginEntryViewController:(UIViewController*<CKPluginEntryViewController>)arg1 ;
-(BOOL)pendingShelfPayloadWillAnimateIn;
-(void)setPendingShelfPayloadWillAnimateIn:(BOOL)arg1 ;
-(void)_updateUI;
-(void)setRequestedPlaceholderText:(NSString *)arg1 ;
-(void)setIgnoreEndEditing:(BOOL)arg1 ;
-(void)setActiveView:(UIView *)arg1 ;
-(BOOL)ignoreEndEditing;
-(void)setNeedsEnsureSelectionVisible:(BOOL)arg1 ;
-(double)maxContentWidthWhenExpanded;
-(void)setNeedsEnsureTextViewVisible:(BOOL)arg1 ;
-(BOOL)needsEnsureSelectionVisible;
-(BOOL)needsEnsureTextViewVisible;
-(void)setOverridePlaceholderText:(NSString *)arg1 ;
-(NSString *)overridePlaceholderText;
-(NSString *)requestedPlaceholderText;
-(BOOL)messageEntryRichTextView:(id)arg1 shouldPasteMediaObjects:(id)arg2 ;
-(void)messageEntryRichTextView:(id)arg1 pastedURL:(id)arg2 ;
-(void)prepareForShelfPayloadAnimation;
-(UIEdgeInsets)contentTextAlignmentInsets;
-(BOOL)shouldLayoutPluginEdgeToEdge;
@end

