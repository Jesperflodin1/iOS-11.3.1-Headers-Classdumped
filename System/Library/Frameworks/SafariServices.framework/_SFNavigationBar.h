/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/_SFFluidProgressViewDelegate.h>
#import <libobjc.A.dylib/_SFNavigationBarURLButtonDelegate.h>
#import <libobjc.A.dylib/_UIBasicAnimationFactory.h>
#import <UIKit/UIDragInteractionDelegate_Private.h>
#import <UIKit/UIDropInteractionDelegate_Private.h>

@protocol _SFNavigationBarDelegate;
@class UIButton, UIView, _SFNavigationBarLabelsContainer, UILabel, SFWebsiteNotSecureMessageView, UIImageView, SFCrossfadingImageView, NSArray, _SFNavigationBarURLButton, _SFFluidProgressView, _SFNavigationBarBackdrop, NSAttributedString, SFNavigationBarReaderButton, _SFDimmingButton, UILongPressGestureRecognizer, NSTimer, _SFDismissButton, _SFNavigationBarItem, _SFToolbar, _UIBackdropViewSettings, UITextField, NSString, UIColor;

@interface _SFNavigationBar : UIView <UIGestureRecognizerDelegate, _SFFluidProgressViewDelegate, _SFNavigationBarURLButtonDelegate, _UIBasicAnimationFactory, UIDragInteractionDelegate_Private, UIDropInteractionDelegate_Private> {

	UIButton* _compressedBarButton;
	UIView* _controlsContainer;
	_SFNavigationBarLabelsContainer* _labelsContainer;
	UIView* _labelScalingContainer;
	UILabel* _URLLabel;
	UILabel* _expandedURLLabel;
	BOOL _urlLabelShowsNotSecureAnnotation;
	SFWebsiteNotSecureMessageView* _websiteNotSecureMessageView;
	UILabel* _readerAvailabilityLabel;
	double _URLWidth;
	double _URLHeight;
	double _expandedURLWidth;
	double _expandedURLHeight;
	double _offsetOfURLInExpandedURL;
	UIView* _URLContainer;
	UIImageView* _URLFadeOut;
	UIView* _fakeTextFieldSelectionView;
	double _fakeSelectionStartOffset;
	double _fakeSelectionEndOffset;
	UIButton* _fakeClearButton;
	BOOL _usesLiftedAppearance;
	SFCrossfadingImageView* _searchIndicator;
	SFCrossfadingImageView* _lockView;
	NSArray* _URLAccessoryItems;
	_SFNavigationBarURLButton* _URLOutline;
	_SFFluidProgressView* _progressView;
	_SFNavigationBarBackdrop* _backdrop;
	UIView* _separator;
	BOOL _lockViewNeedsUpdate;
	NSAttributedString* _attributedTextWhenExpanded;
	SFNavigationBarReaderButton* _readerButton;
	_SFDimmingButton* _stopButton;
	_SFDimmingButton* _reloadButton;
	UILongPressGestureRecognizer* _readerLongPressGestureRecognizer;
	_SFDimmingButton* _readerAppearanceButton;
	UIButton* _mediaCaptureMuteButton;
	long long _visibleTrailingButtonType;
	UILongPressGestureRecognizer* _reloadLongPressGestureRecognizer;
	UIButton* _cancelButton;
	double _cancelButtonIntrinsicWidth;
	BOOL _readerButtonWillShow;
	NSTimer* _readerAvailabilityLabelHideTimer;
	_SFDismissButton* _dismissButton;
	UIView* _dismissButtonContainer;
	unsigned long long _inputMode;
	BOOL _preferredBarTintColorIsDark;
	BOOL _preferredBarTintColorIsGreen;
	BOOL _preferredBarTintColorIsExtreme;
	BOOL _usesNarrowLayout;
	BOOL _unifiedFieldShowsProgressView;
	BOOL _usingLightControls;
	BOOL _controlsHidden;
	BOOL _expanded;
	BOOL _usesUnscaledBackdrop;
	BOOL _backdropGroupDisabled;
	BOOL _suppressesBlur;
	_SFNavigationBarItem* _item;
	unsigned long long _tintStyle;
	_SFToolbar* _toolbar;
	_UIBackdropViewSettings* _customBackdropSettings;
	UITextField* _textField;
	NSString* _backdropGroupName;
	id<_SFNavigationBarDelegate> _delegate;
	double _contentUnderStatusBarHeight;
	double _maximumHeight;
	double _minimumBackdropHeight;
	UIView* _inputAccessoryView;
	UIColor* _preferredBarTintColor;
	UIColor* _preferredControlsTintColor;

}

@property (nonatomic,retain) _SFNavigationBarItem * item;                                                     //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) BOOL usesNarrowLayout;                                                           //@synthesize usesNarrowLayout=_usesNarrowLayout - In the implementation block
@property (assign,nonatomic) BOOL unifiedFieldShowsProgressView;                                              //@synthesize unifiedFieldShowsProgressView=_unifiedFieldShowsProgressView - In the implementation block
@property (assign,nonatomic) unsigned long long tintStyle;                                                    //@synthesize tintStyle=_tintStyle - In the implementation block
@property (assign,getter=isUsingLightControls,nonatomic) BOOL usingLightControls;                             //@synthesize usingLightControls=_usingLightControls - In the implementation block
@property (assign,nonatomic) BOOL hasToolbar; 
@property (nonatomic,readonly) _SFToolbar * toolbar;                                                          //@synthesize toolbar=_toolbar - In the implementation block
@property (assign,getter=areControlsHidden,nonatomic) BOOL controlsHidden;                                    //@synthesize controlsHidden=_controlsHidden - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * customBackdropSettings;                                //@synthesize customBackdropSettings=_customBackdropSettings - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                                 //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,readonly) UITextField * textField;                                                       //@synthesize textField=_textField - In the implementation block
@property (nonatomic,readonly) CGRect URLOutlineFrameInNavigationBarSpace; 
@property (assign,nonatomic) BOOL updatesBackdrop; 
@property (assign,nonatomic) BOOL usesUnscaledBackdrop;                                                       //@synthesize usesUnscaledBackdrop=_usesUnscaledBackdrop - In the implementation block
@property (assign,getter=isBackdropGroupDisabled,nonatomic) BOOL backdropGroupDisabled;                       //@synthesize backdropGroupDisabled=_backdropGroupDisabled - In the implementation block
@property (nonatomic,copy) NSString * backdropGroupName;                                                      //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (assign,nonatomic,__weak) id<_SFNavigationBarDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (getter=_controlsAlpha,nonatomic,readonly) double controlsAlpha; 
@property (assign,nonatomic) double contentUnderStatusBarHeight;                                              //@synthesize contentUnderStatusBarHeight=_contentUnderStatusBarHeight - In the implementation block
@property (assign,nonatomic) BOOL suppressesBlur;                                                             //@synthesize suppressesBlur=_suppressesBlur - In the implementation block
@property (nonatomic,readonly) double visualHeight; 
@property (assign,nonatomic) double maximumHeight;                                                            //@synthesize maximumHeight=_maximumHeight - In the implementation block
@property (assign,nonatomic) double minimumBackdropHeight;                                                    //@synthesize minimumBackdropHeight=_minimumBackdropHeight - In the implementation block
@property (nonatomic,retain) UIView * inputAccessoryView;                                                     //@synthesize inputAccessoryView=_inputAccessoryView - In the implementation block
@property (nonatomic,retain) UIColor * preferredBarTintColor;                                                 //@synthesize preferredBarTintColor=_preferredBarTintColor - In the implementation block
@property (nonatomic,retain) UIColor * preferredControlsTintColor;                                            //@synthesize preferredControlsTintColor=_preferredControlsTintColor - In the implementation block
@property (nonatomic,readonly) BOOL isShowingPreferredControlsTintColor; 
@property (nonatomic,readonly) CGSize dismissButtonSize; 
@property (nonatomic,readonly) double dismissButtonPadding; 
@property (nonatomic,readonly) id<_SFPopoverSourceInfo> readerAppearanceButtonPopoverSourceInfo; 
@property (nonatomic,readonly) id<_SFPopoverSourceInfo> readerButtonPopoverSourceInfo; 
@property (nonatomic,readonly) id<_SFPopoverSourceInfo> reloadButtonPopoverSourceInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(double)defaultHeight;
+(double)separatorHeight;
+(double)minimumHeight;
+(long long)_metricsCategory;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(_SFNavigationBarItem *)item;
-(id<_SFNavigationBarDelegate>)delegate;
-(void)setDelegate:(id<_SFNavigationBarDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(UITextField *)textField;
-(void)setItem:(_SFNavigationBarItem *)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)tintColorDidChange;
-(_SFToolbar *)toolbar;
-(BOOL)isExpanded;
-(UIView *)inputAccessoryView;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3 ;
-(long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2 ;
-(id)_dragInteraction:(id)arg1 viewToSnapshotItem:(id)arg2 ;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(id)_placeholderColor;
-(void)setExpanded:(BOOL)arg1 ;
-(NSString *)backdropGroupName;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(void)_updateBackdropGroupName;
-(void)setMaximumHeight:(double)arg1 ;
-(double)maximumHeight;
-(void)fluidProgressViewDidShowProgress:(id)arg1 ;
-(void)fluidProgressViewWillShowProgress:(id)arg1 ;
-(BOOL)isUsingLightControls;
-(void)setPreferredControlsTintColor:(UIColor *)arg1 ;
-(void)setDismissButtonStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(void)backdropDidApplySettings:(id)arg1 ;
-(void)navigationBarURLButtonDidReceiveCopyCommand:(id)arg1 ;
-(void)navigationBarURLButtonDidReceivePasteCommand:(id)arg1 ;
-(BOOL)navigationBarURLButton:(id)arg1 shouldShowMenuForGestureWithRecognizer:(id)arg2 ;
-(BOOL)navigationBarURLButtonShouldCopy:(id)arg1 ;
-(BOOL)navigationBarURLButtonShouldPaste:(id)arg1 ;
-(id)textForNavigationBarURLButton:(id)arg1 ;
-(void)clearEphemeralUI;
-(void)_updatePlaceholderText;
-(void)_updateShowsLockIcon;
-(void)_updateShowsSearchIndicator;
-(void)_updateNavigationBarLeadingButtonsVisibility;
-(void)_updateMediaCaptureMuteButton;
-(void)_updateNavigationBarTrailingButtonsVisibility;
-(void)_updateNavigationBarTrailingButtonType;
-(void)_updateLockIconHasEVCertificateTint;
-(void)_updateReaderButtonSelected;
-(void)_updateReaderButtonVisibilityAnimated:(BOOL)arg1 showAvailabilityText:(BOOL)arg2 adjustURLLabels:(BOOL)arg3 ;
-(void)_updateNotSecureWarningsVisibility;
-(void)_updateProgressView;
-(BOOL)_shouldUpdateBackdropStyleForTransitionFromItem:(id)arg1 toItem:(id)arg2 ;
-(void)_updateBackdropStyle;
-(void)_updateToolbarAlpha;
-(id)_editingLabelFont;
-(double)_editingScaleFactor;
-(void)_updateProgressViewCornerRadius;
-(id)_viewToInsertProgressBarIn;
-(void)_updateControlTints;
-(double)_customButtonHorizontalPadding;
-(id)_backdropInputSettings;
-(void)_updateBarTintColorMetrics;
-(double)URLFieldHorizontalMargin;
-(id)toolbarPlacedOnTop;
-(id)_URLLabelFont;
-(void)_updateTextMetrics;
-(void)_updateURLOutlineCornerRadius;
-(void)_updateActiveURLLabelAccessory;
-(void)_barMetricsDidChange;
-(void)_URLTapped:(id)arg1 ;
-(void)_updateURLOutlineColor;
-(id)newTextField;
-(id)_placeholderText;
-(id)_fadeOutImageWithSize:(CGSize)arg1 opaquePoint:(CGPoint)arg2 transparentPoint:(CGPoint)arg3 leftCapWidth:(double)arg4 topCapWidth:(double)arg5 ;
-(void)_cancelButtonTapped:(id)arg1 ;
-(void)_readerButtonTapped:(id)arg1 ;
-(void)_readerButtonLongPressed:(id)arg1 ;
-(void)_updateReaderButtonTint;
-(void)_mediaCaptureMuteButtonTapped:(id)arg1 ;
-(void)_reloadButtonPressed;
-(id)_dimmingButtonWithAction:(SEL)arg1 ;
-(void)_reloadButtonLongPressed:(id)arg1 ;
-(void)_stopButtonPressed;
-(void)_readerAppearanceButtonPressed;
-(void)_configureNavigationBarTrailingButtonTintedImages;
-(void)_updateTintColorForControls;
-(id)_URLControlsColor;
-(void)_compressedBarTapped;
-(void)_dismissButtonTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 inputMode:(unsigned long long)arg2 ;
-(long long)_inferredNavigationBarTrailingButtonType;
-(double)_squishTransformFactor;
-(double)_controlsAlpha;
-(long long)_preferredLeadingButtonType;
-(id)_navigationBarTrailingButtonWithType:(long long)arg1 ;
-(void)_transitionFromView:(id)arg1 toView:(id)arg2 animated:(BOOL)arg3 ;
-(void)_updateSeparatorAlpha;
-(void)_updateBackdropFrame;
-(void)_updateLockViewIfNeeded;
-(double)_URLFieldHorizontalMargin;
-(void)_updateNavigationBarTrailingButtonsAlpha;
-(void)_updateNavigationBarLeadingButtonsAlpha;
-(void)_updateTextFieldFrame;
-(double)placeholderHorizontalInset;
-(double)_minimumXForLabelOfWidth:(double)arg1 centeredInOutlineOfWidth:(double)arg2 leftAlignedToMinimumX:(double)arg3 maximumX:(double)arg4 ;
-(double)_textFieldTopMargin;
-(void)_updateFakeViews;
-(void)_hideReaderAvailabilityLabelAnimated:(BOOL)arg1 ;
-(id)_hitTestCandidateViews;
-(id)_attributedStringByInsertingNotSecureAnnotationInURL:(id)arg1 annotationOffset:(double*)arg2 ;
-(id)_expandedURLLabelParagraphStyle;
-(void)_updateSearchIndicator;
-(id)_URLTextColor;
-(void)setExpanded:(BOOL)arg1 textFieldSelectionRange:(NSRange)arg2 ;
-(id)_lockImageUsingMiniatureVersion:(BOOL)arg1 ;
-(void)_hideReaderAvailabilityLabelNow;
-(void)_hideReaderAvailabilityLabelSoon;
-(void)_adjustLabelRectForLeadingButtonWithDelay:(double)arg1 ;
-(BOOL)_shouldShowPreferredBarTintColor;
-(void)setTextFieldPlaceHolderColor:(id)arg1 ;
-(BOOL)_isURLLabelAnnotatedWithAttributedString;
-(id)_EVCertLockAndTextColor;
-(id)_tintForWarningImage;
-(void)_showNotSecureWebsiteMessage;
-(void)_hideNotSecureWebsiteMessage;
-(void)_setUpWebsiteNotSecureMessageIconAndLabelIfNeeded;
-(void)_unsecuredWarningTransition:(id)arg1 toView:(id)arg2 ;
-(id)_tintForLockImage:(BOOL)arg1 ;
-(BOOL)updatesBackdrop;
-(BOOL)isShowingPreferredControlsTintColor;
-(void)updateToolbarTintColor;
-(void)setUsesNarrowLayout:(BOOL)arg1 ;
-(void)setUnifiedFieldShowsProgressView:(BOOL)arg1 ;
-(CGSize)dismissButtonSize;
-(double)dismissButtonPadding;
-(void)setPreferredBarTintColor:(UIColor *)arg1 ;
-(void)setUsesUnscaledBackdrop:(BOOL)arg1 ;
-(void)setCustomBackdropSettings:(_UIBackdropViewSettings *)arg1 ;
-(double)visualHeight;
-(id)_newNavigationButtonWithImage:(id)arg1 insets:(UIEdgeInsets)arg2 action:(SEL)arg3 ;
-(void)setHasToolbar:(BOOL)arg1 ;
-(BOOL)hasToolbar;
-(id)readerAppearanceButton;
-(void)setControlsHidden:(BOOL)arg1 ;
-(void)setMinimumBackdropHeight:(double)arg1 ;
-(CGRect)URLOutlineFrameInNavigationBarSpace;
-(void)_updateReaderButtonAndAvailabilityTextVisibility;
-(void)setContentUnderStatusBarHeight:(double)arg1 ;
-(void)setSuppressesBlur:(BOOL)arg1 ;
-(void)setBackdropGroupDisabled:(BOOL)arg1 ;
-(void)setUpdatesBackdrop:(BOOL)arg1 ;
-(id<_SFPopoverSourceInfo>)readerAppearanceButtonPopoverSourceInfo;
-(id<_SFPopoverSourceInfo>)readerButtonPopoverSourceInfo;
-(id<_SFPopoverSourceInfo>)reloadButtonPopoverSourceInfo;
-(id)URLOutlinePopoverSourceInfo;
-(BOOL)usesNarrowLayout;
-(BOOL)unifiedFieldShowsProgressView;
-(void)setUsingLightControls:(BOOL)arg1 ;
-(BOOL)areControlsHidden;
-(_UIBackdropViewSettings *)customBackdropSettings;
-(BOOL)usesUnscaledBackdrop;
-(BOOL)isBackdropGroupDisabled;
-(double)contentUnderStatusBarHeight;
-(BOOL)suppressesBlur;
-(double)minimumBackdropHeight;
-(UIColor *)preferredBarTintColor;
-(UIColor *)preferredControlsTintColor;
-(unsigned long long)tintStyle;
-(void)setTintStyle:(unsigned long long)arg1 ;
-(void)_updateFonts;
-(void)_updateText;
-(void)_updateTextColor;
@end
