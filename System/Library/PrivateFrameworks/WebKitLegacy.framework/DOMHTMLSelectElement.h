/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/DOMHTMLElement.h>

@class DOMHTMLFormElement, NSString, DOMHTMLOptionsCollection;

@interface DOMHTMLSelectElement : DOMHTMLElement

@property (assign) BOOL autofocus; 
@property (assign) BOOL disabled; 
@property (readonly) DOMHTMLFormElement * form; 
@property (assign) BOOL multiple; 
@property (copy) NSString * name; 
@property (assign) int size; 
@property (copy,readonly) NSString * type; 
@property (readonly) DOMHTMLOptionsCollection * options; 
@property (readonly) int length; 
@property (assign) int selectedIndex; 
@property (copy) NSString * value; 
@property (readonly) BOOL willValidate; 
-(BOOL)autofocus;
-(void)setAutofocus:(BOOL)arg1 ;
-(BOOL)willValidate;
-(id)namedItem:(id)arg1 ;
-(void)add:(id)arg1 before:(id)arg2 ;
-(void)add:(id)arg1 :(id)arg2 ;
-(int)size;
-(void)setSize:(int)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(int)length;
-(NSString *)type;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
-(int)selectedIndex;
-(void)setSelectedIndex:(int)arg1 ;
-(DOMHTMLOptionsCollection *)options;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(DOMHTMLFormElement *)form;
-(id)item:(unsigned)arg1 ;
-(void)_activateItemAtIndex:(int)arg1 ;
-(void)_activateItemAtIndex:(int)arg1 allowMultipleSelection:(BOOL)arg2 ;
-(BOOL)multiple;
-(unsigned)completeLength;
-(id)listItemAtIndex:(int)arg1 ;
-(int)structuralComplexityContribution;
-(void)remove:(int)arg1 ;
-(void)setMultiple:(BOOL)arg1 ;
@end

