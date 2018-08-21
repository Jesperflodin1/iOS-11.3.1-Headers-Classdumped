/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIPasscodeEntryField.h>

@class NSMutableCharacterSet;

@interface SBUINumericPasscodeEntryFieldBase : SBUIPasscodeEntryField {

	NSMutableCharacterSet* _numericTrimmingSet;
	unsigned long long _maxNumbersAllowed;
	BOOL _allowsNewlineAcceptance;
	BOOL _autoAcceptWhenMaxNumbersMet;

}

@property (assign,nonatomic) unsigned long long maxNumbersAllowed;              //@synthesize maxNumbersAllowed=_maxNumbersAllowed - In the implementation block
@property (assign,nonatomic) BOOL allowsNewlineAcceptance;                      //@synthesize allowsNewlineAcceptance=_allowsNewlineAcceptance - In the implementation block
@property (assign,nonatomic) BOOL autoAcceptWhenMaxNumbersMet;                  //@synthesize autoAcceptWhenMaxNumbersMet=_autoAcceptWhenMaxNumbersMet - In the implementation block
+(BOOL)_shouldResetAutoAcceptWhenMaxNumbersMetInResignFirstResponder;
-(BOOL)resignFirstResponder;
-(id)initWithDefaultSizeAndLightStyle:(BOOL)arg1 ;
-(void)setMaxNumbersAllowed:(unsigned long long)arg1 ;
-(unsigned long long)maxNumbersAllowed;
-(void)_deleteLastCharacter;
-(void)setAllowsNewlineAcceptance:(BOOL)arg1 ;
-(void)setAutoAcceptWhenMaxNumbersMet:(BOOL)arg1 ;
-(BOOL)shouldInsertPasscodeText:(id)arg1 ;
-(BOOL)_hasMaxDigitsSpecified;
-(void)_reallyAppendString:(id)arg1 ;
-(BOOL)allowsNewlineAcceptance;
-(BOOL)autoAcceptWhenMaxNumbersMet;
-(void)_appendString:(id)arg1 ;
@end

