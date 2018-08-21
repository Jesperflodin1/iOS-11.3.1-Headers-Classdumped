/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/DOMHTMLElement.h>

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLTextAreaElement : DOMHTMLElement

@property (assign) BOOL autofocus; 
@property (assign) BOOL disabled; 
@property (readonly) DOMHTMLFormElement * form; 
@property (copy) NSString * name; 
@property (assign) BOOL readOnly; 
@property (assign) int rows; 
@property (assign) int cols; 
@property (copy,readonly) NSString * type; 
@property (copy) NSString * defaultValue; 
@property (copy) NSString * value; 
@property (readonly) BOOL willValidate; 
@property (assign) int selectionStart; 
@property (assign) int selectionEnd; 
@property (copy) NSString * accessKey; 
-(NSString *)accessKey;
-(void)setAccessKey:(NSString *)arg1 ;
-(BOOL)autofocus;
-(void)setAutofocus:(BOOL)arg1 ;
-(BOOL)willValidate;
-(id)autocomplete;
-(void)setAutocomplete:(id)arg1 ;
-(int)cols;
-(void)setCols:(int)arg1 ;
-(id)dirName;
-(void)setDirName:(id)arg1 ;
-(BOOL)required;
-(id)selectionDirection;
-(void)setSelectionDirection:(id)arg1 ;
-(void)select;
-(void)setRangeText:(id)arg1 ;
-(void)setRangeText:(id)arg1 start:(unsigned)arg2 end:(unsigned)arg3 selectionMode:(id)arg4 ;
-(void)setSelectionRange:(int)arg1 end:(int)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)type;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
-(id)startPosition;
-(int)maxLength;
-(void)setMaxLength:(int)arg1 ;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(id)endPosition;
-(NSString *)defaultValue;
-(DOMHTMLFormElement *)form;
-(int)_autocapitalizeType;
-(void)setPlaceholder:(id)arg1 ;
-(id)placeholder;
-(int)rows;
-(BOOL)readOnly;
-(BOOL)_isEdited;
-(int)structuralComplexityContribution;
-(id)labels;
-(void)setDefaultValue:(NSString *)arg1 ;
-(void)setRows:(int)arg1 ;
-(void)setRequired:(BOOL)arg1 ;
-(unsigned)textLength;
-(void)setReadOnly:(BOOL)arg1 ;
-(int)selectionStart;
-(int)selectionEnd;
-(void)setSelectionStart:(int)arg1 ;
-(void)setSelectionEnd:(int)arg1 ;
-(void)setWrap:(id)arg1 ;
-(id)wrap;
@end
