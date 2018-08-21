/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/DOMHTMLElement.h>
#import <UIKit/UITextInputTraits.h>

@class NSString, DOMHTMLFormElement, DOMFileList, NSURL;

@interface DOMHTMLInputElement : DOMHTMLElement <UITextInputTraits>

@property (copy) NSString * accept; 
@property (copy) NSString * alt; 
@property (assign) BOOL autofocus; 
@property (assign) BOOL defaultChecked; 
@property (assign) BOOL checked; 
@property (assign) BOOL disabled; 
@property (readonly) DOMHTMLFormElement * form; 
@property (retain) DOMFileList * files; 
@property (assign) BOOL indeterminate; 
@property (assign) int maxLength; 
@property (assign) BOOL multiple; 
@property (copy) NSString * name; 
@property (assign) BOOL readOnly; 
@property (copy) NSString * size; 
@property (copy) NSString * src; 
@property (copy) NSString * type; 
@property (copy) NSString * defaultValue; 
@property (copy) NSString * value; 
@property (readonly) BOOL willValidate; 
@property (assign) int selectionStart; 
@property (assign) int selectionEnd; 
@property (copy) NSString * align; 
@property (copy) NSString * useMap; 
@property (copy) NSString * accessKey; 
@property (copy,readonly) NSString * altDisplayString; 
@property (copy,readonly) NSURL * absoluteImageURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
-(id)step;
-(void)setStep:(id)arg1 ;
-(NSString *)accessKey;
-(void)setAccessKey:(NSString *)arg1 ;
-(NSString *)alt;
-(BOOL)autofocus;
-(void)setAutofocus:(BOOL)arg1 ;
-(BOOL)willValidate;
-(void)click;
-(id)autocomplete;
-(void)setAutocomplete:(id)arg1 ;
-(BOOL)checkValidity;
-(NSString *)useMap;
-(void)setUseMap:(NSString *)arg1 ;
-(NSString *)altDisplayString;
-(void)setAccept:(NSString *)arg1 ;
-(BOOL)defaultChecked;
-(void)setDefaultChecked:(BOOL)arg1 ;
-(id)dirName;
-(void)setDirName:(id)arg1 ;
-(DOMFileList *)files;
-(void)setFiles:(DOMFileList *)arg1 ;
-(id)formAction;
-(void)setFormAction:(id)arg1 ;
-(id)formEnctype;
-(void)setFormEnctype:(id)arg1 ;
-(id)formMethod;
-(void)setFormMethod:(id)arg1 ;
-(BOOL)formNoValidate;
-(void)setFormNoValidate:(BOOL)arg1 ;
-(id)formTarget;
-(void)setFormTarget:(id)arg1 ;
-(BOOL)indeterminate;
-(BOOL)required;
-(double)valueAsDate;
-(void)setValueAsDate:(double)arg1 ;
-(void)setValueAsNumber:(double)arg1 ;
-(id)validationMessage;
-(id)selectionDirection;
-(void)setSelectionDirection:(id)arg1 ;
-(BOOL)incremental;
-(BOOL)capture;
-(void)setCapture:(BOOL)arg1 ;
-(void)stepUp:(int)arg1 ;
-(void)stepDown:(int)arg1 ;
-(void)setCustomValidity:(id)arg1 ;
-(void)select;
-(void)setRangeText:(id)arg1 ;
-(void)setRangeText:(id)arg1 start:(unsigned)arg2 end:(unsigned)arg3 selectionMode:(id)arg4 ;
-(void)setSelectionRange:(int)arg1 end:(int)arg2 ;
-(void)setValueForUser:(id)arg1 ;
-(BOOL)_isAutofilled;
-(void)_setAutofilled:(BOOL)arg1 ;
-(NSString *)size;
-(void)setSize:(NSString *)arg1 ;
-(void)setChecked:(BOOL)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
-(unsigned)height;
-(id)startPosition;
-(int)maxLength;
-(void)setMaxLength:(int)arg1 ;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(id)_autofillContext;
-(void)insertTextSuggestion:(id)arg1 ;
-(id)endPosition;
-(NSString *)defaultValue;
-(DOMHTMLFormElement *)form;
-(int)_autocapitalizeType;
-(BOOL)_isTextField;
-(NSURL *)absoluteImageURL;
-(void)setPlaceholder:(id)arg1 ;
-(unsigned)width;
-(id)placeholder;
-(void)setWidth:(unsigned)arg1 ;
-(BOOL)multiple;
-(void)setHeight:(unsigned)arg1 ;
-(BOOL)readOnly;
-(BOOL)_isEdited;
-(int)structuralComplexityContribution;
-(id)labels;
-(void)setDefaultValue:(NSString *)arg1 ;
-(void)setIndeterminate:(BOOL)arg1 ;
-(void)setValueWithChangeEvent:(id)arg1 ;
-(id)pattern;
-(BOOL)checked;
-(void)setValueAsNumberWithChangeEvent:(double)arg1 ;
-(double)valueAsNumber;
-(void)setIncremental:(BOOL)arg1 ;
-(NSString *)src;
-(void)setSrc:(NSString *)arg1 ;
-(void)setAlt:(NSString *)arg1 ;
-(void)setRequired:(BOOL)arg1 ;
-(id)max;
-(void)setPattern:(id)arg1 ;
-(NSString *)accept;
-(void)setReadOnly:(BOOL)arg1 ;
-(id)min;
-(void)setMin:(id)arg1 ;
-(void)setMax:(id)arg1 ;
-(int)selectionStart;
-(int)selectionEnd;
-(void)setSelectionStart:(int)arg1 ;
-(void)setSelectionEnd:(int)arg1 ;
-(void)setMultiple:(BOOL)arg1 ;
-(void)setAlign:(NSString *)arg1 ;
-(NSString *)align;
@end

