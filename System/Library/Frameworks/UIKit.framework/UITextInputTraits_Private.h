/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSIndexSet, UIColor, UIImage, UIInputContextHistory;


@protocol UITextInputTraits_Private <NSObject,UITextInputTraits>
@property (nonatomic,copy) NSString * recentInputIdentifier; 
@property (assign,nonatomic) NSRange validTextRange; 
@property (nonatomic,copy) NSIndexSet * PINEntrySeparatorIndexes; 
@property (assign,nonatomic) CFCharacterSetRef textTrimmingSet; 
@property (nonatomic,retain) UIColor * insertionPointColor; 
@property (nonatomic,retain) UIColor * selectionBarColor; 
@property (nonatomic,retain) UIColor * selectionHighlightColor; 
@property (nonatomic,retain) UIImage * selectionDragDotImage; 
@property (nonatomic,retain) UIColor * underlineColorForTextAlternatives; 
@property (nonatomic,retain) UIColor * underlineColorForSpelling; 
@property (assign,nonatomic) unsigned long long insertionPointWidth; 
@property (assign,nonatomic) int textLoupeVisibility; 
@property (assign,nonatomic) int textSelectionBehavior; 
@property (assign,nonatomic) id textSuggestionDelegate; 
@property (assign,nonatomic) BOOL isSingleLineDocument; 
@property (assign,nonatomic) BOOL contentsIsSingleValue; 
@property (assign,nonatomic) BOOL hasDefaultContents; 
@property (assign,nonatomic) BOOL acceptsPayloads; 
@property (assign,nonatomic) BOOL acceptsEmoji; 
@property (assign,nonatomic) BOOL acceptsDictationSearchResults; 
@property (assign,nonatomic) BOOL forceEnableDictation; 
@property (assign,nonatomic) BOOL forceDisableDictation; 
@property (assign,nonatomic) BOOL forceDefaultDictationInfo; 
@property (assign,nonatomic) long long forceDictationKeyboardType; 
@property (assign,nonatomic) int emptyContentReturnKeyType; 
@property (assign,nonatomic) BOOL returnKeyGoesToNextResponder; 
@property (assign,nonatomic) BOOL acceptsFloatingKeyboard; 
@property (assign,nonatomic) BOOL acceptsSplitKeyboard; 
@property (assign,nonatomic) BOOL displaySecureTextUsingPlainText; 
@property (assign,nonatomic) BOOL displaySecureEditsUsingPlainText; 
@property (assign,nonatomic) BOOL learnsCorrections; 
@property (assign,nonatomic) int shortcutConversionType; 
@property (assign,nonatomic) BOOL suppressReturnKeyStyling; 
@property (assign,nonatomic) BOOL useInterfaceLanguageForLocalization; 
@property (assign,nonatomic) BOOL deferBecomingResponder; 
@property (assign,nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent; 
@property (nonatomic,copy) NSString * autocorrectionContext; 
@property (nonatomic,copy) NSString * responseContext; 
@property (nonatomic,retain) UIInputContextHistory * inputContextHistory; 
@property (assign,nonatomic) BOOL disablePrediction; 
@property (assign,nonatomic) BOOL disableInputBars; 
@property (assign,nonatomic) BOOL isCarPlayIdiom; 
@property (assign,nonatomic) long long textScriptType; 
@property (assign,nonatomic) BOOL loadKeyboardsForSiriLanguage; 
@property (assign,getter=isDevicePasscodeEntry,nonatomic) BOOL devicePasscodeEntry; 
@optional
-(int)textSelectionBehavior;
-(UIColor *)underlineColorForTextAlternatives;
-(void)setUnderlineColorForTextAlternatives:(id)arg1;
-(UIColor *)underlineColorForSpelling;
-(void)setUnderlineColorForSpelling:(id)arg1;
-(BOOL)displaySecureEditsUsingPlainText;
-(void)setDisplaySecureEditsUsingPlainText:(BOOL)arg1;
-(BOOL)displaySecureTextUsingPlainText;
-(CFCharacterSetRef)textTrimmingSet;
-(BOOL)acceptsSplitKeyboard;
-(BOOL)disableInputBars;
-(int)shortcutConversionType;
-(BOOL)acceptsPayloads;
-(BOOL)acceptsFloatingKeyboard;
-(BOOL)disablePrediction;
-(NSString *)responseContext;
-(UIInputContextHistory *)inputContextHistory;
-(BOOL)learnsCorrections;
-(void)setLearnsCorrections:(BOOL)arg1;
-(void)setIsCarPlayIdiom:(BOOL)arg1;
-(NSString *)autocorrectionContext;
-(void)setResponseContext:(id)arg1;
-(void)setInputContextHistory:(id)arg1;
-(NSString *)recentInputIdentifier;
-(void)setRecentInputIdentifier:(id)arg1;
-(NSRange)validTextRange;
-(void)setValidTextRange:(NSRange)arg1;
-(NSIndexSet *)PINEntrySeparatorIndexes;
-(void)setPINEntrySeparatorIndexes:(id)arg1;
-(void)setTextTrimmingSet:(CFCharacterSetRef)arg1;
-(UIColor *)insertionPointColor;
-(void)setInsertionPointColor:(id)arg1;
-(UIColor *)selectionBarColor;
-(void)setSelectionBarColor:(id)arg1;
-(UIColor *)selectionHighlightColor;
-(void)setSelectionHighlightColor:(id)arg1;
-(UIImage *)selectionDragDotImage;
-(void)setSelectionDragDotImage:(id)arg1;
-(unsigned long long)insertionPointWidth;
-(void)setInsertionPointWidth:(unsigned long long)arg1;
-(int)textLoupeVisibility;
-(void)setTextLoupeVisibility:(int)arg1;
-(void)setTextSelectionBehavior:(int)arg1;
-(id)textSuggestionDelegate;
-(void)setTextSuggestionDelegate:(id)arg1;
-(BOOL)isSingleLineDocument;
-(void)setIsSingleLineDocument:(BOOL)arg1;
-(BOOL)contentsIsSingleValue;
-(void)setContentsIsSingleValue:(BOOL)arg1;
-(BOOL)hasDefaultContents;
-(void)setHasDefaultContents:(BOOL)arg1;
-(void)setAcceptsPayloads:(BOOL)arg1;
-(BOOL)acceptsEmoji;
-(void)setAcceptsEmoji:(BOOL)arg1;
-(BOOL)acceptsDictationSearchResults;
-(void)setAcceptsDictationSearchResults:(BOOL)arg1;
-(BOOL)forceEnableDictation;
-(void)setForceEnableDictation:(BOOL)arg1;
-(BOOL)forceDisableDictation;
-(void)setForceDisableDictation:(BOOL)arg1;
-(BOOL)forceDefaultDictationInfo;
-(void)setForceDefaultDictationInfo:(BOOL)arg1;
-(long long)forceDictationKeyboardType;
-(void)setForceDictationKeyboardType:(long long)arg1;
-(int)emptyContentReturnKeyType;
-(void)setEmptyContentReturnKeyType:(int)arg1;
-(BOOL)returnKeyGoesToNextResponder;
-(void)setReturnKeyGoesToNextResponder:(BOOL)arg1;
-(void)setAcceptsFloatingKeyboard:(BOOL)arg1;
-(void)setAcceptsSplitKeyboard:(BOOL)arg1;
-(void)setDisplaySecureTextUsingPlainText:(BOOL)arg1;
-(void)setShortcutConversionType:(int)arg1;
-(BOOL)suppressReturnKeyStyling;
-(void)setSuppressReturnKeyStyling:(BOOL)arg1;
-(BOOL)useInterfaceLanguageForLocalization;
-(void)setUseInterfaceLanguageForLocalization:(BOOL)arg1;
-(BOOL)deferBecomingResponder;
-(void)setDeferBecomingResponder:(BOOL)arg1;
-(BOOL)enablesReturnKeyOnNonWhiteSpaceContent;
-(void)setEnablesReturnKeyOnNonWhiteSpaceContent:(BOOL)arg1;
-(void)setAutocorrectionContext:(id)arg1;
-(void)setDisablePrediction:(BOOL)arg1;
-(void)setDisableInputBars:(BOOL)arg1;
-(BOOL)isCarPlayIdiom;
-(long long)textScriptType;
-(void)setTextScriptType:(long long)arg1;
-(BOOL)loadKeyboardsForSiriLanguage;
-(void)setLoadKeyboardsForSiriLanguage:(BOOL)arg1;
-(BOOL)isDevicePasscodeEntry;
-(void)setDevicePasscodeEntry:(BOOL)arg1;

@required
-(void)takeTraitsFrom:(id)arg1;

@end

