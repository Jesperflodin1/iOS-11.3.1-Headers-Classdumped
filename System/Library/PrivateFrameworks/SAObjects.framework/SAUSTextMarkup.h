/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAUSMarkup.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAUSTextMarkup : AceObject <SAUSMarkup, SAAceSerializable>

@property (assign,nonatomic) BOOL emphasized; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textMarkup;
+(id)textMarkupWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setEmphasized:(BOOL)arg1 ;
-(BOOL)emphasized;
-(id)encodedClassName;
@end

