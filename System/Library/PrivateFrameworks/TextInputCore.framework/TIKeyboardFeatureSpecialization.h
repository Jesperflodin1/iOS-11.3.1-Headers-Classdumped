/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextInputCore/TextInputCore-Structs.h>
@class TIInputMode;

@interface TIKeyboardFeatureSpecialization : NSObject {

	USetRef m_precomposedCharacterSet;
	USetRef m_acceptableCharacterSet;
	TIInputMode* _inputMode;
	long long _currentUserInterfaceIdiom;

}

@property (nonatomic,readonly) TIInputMode * inputMode;                        //@synthesize inputMode=_inputMode - In the implementation block
@property (assign,nonatomic) long long currentUserInterfaceIdiom;              //@synthesize currentUserInterfaceIdiom=_currentUserInterfaceIdiom - In the implementation block
+(id)createSpecializationForInputMode:(id)arg1 ;
+(USetRef)createAcceptableCharacterSetForKeyboardLocale:(id)arg1 ;
-(void)dealloc;
-(id)keyboardBehaviors;
-(TIInputMode *)inputMode;
-(BOOL)shouldExtendPriorWord;
-(id)wordSeparator;
-(id)replacementForDoubleSpace;
-(BOOL)canHandleKeyHitTest;
-(id)initWithInputMode:(id)arg1 ;
-(id)nonstopPunctuationCharacters;
-(id)sentencePrefixingCharacters;
-(id)sentenceDelimitingCharacters;
-(id)sentenceTrailingCharacters;
-(void)setCurrentUserInterfaceIdiom:(long long)arg1 ;
-(void)reloadPrecomposedCharacterSetWithIdiom:(long long)arg1 ;
-(BOOL)supportsLearning;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(BOOL)shouldLearnLowercaseAtBeginningOfSentence;
-(id)accentKeyStringForKeyboardState:(id)arg1 ;
-(long long)currentUserInterfaceIdiom;
-(TIInputManager*)createInputManager;
-(BOOL)doesComposeText;
-(id)dictionaryInputMode;
-(void)specializeInputManager:(TIInputManager*)arg1 forLayoutState:(id)arg2 ;
-(id)externalStringToInternal:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
-(id)wordCharacters;
-(id)terminatorsDeletingAutospace;
-(unsigned long long)maxPriorWordTokensAfterTrimming;
-(BOOL)acceptsCharacter:(unsigned)arg1 ;
-(BOOL)dictionaryUsesExternalEncoding;
-(const USetRef)precomposedCharacterSet;
-(BOOL)shouldConvertCandidateToExternal;
-(BOOL)allowsAutocorrectionOfValidWords;
-(BOOL)shouldConvertAutocorrectionCandidatesToFullWidth;
-(USetRef)createAcceptableCharacterSet;
@end
