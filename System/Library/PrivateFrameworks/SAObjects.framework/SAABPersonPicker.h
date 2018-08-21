/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUIDomainObjectPicker.h>

@class NSArray;

@interface SAABPersonPicker : SAUIDomainObjectPicker

@property (nonatomic,copy) NSArray * persons; 
@property (assign,nonatomic) BOOL showImmediately; 
+(id)personPicker;
+(id)personPickerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)showImmediately;
-(void)setShowImmediately:(BOOL)arg1 ;
-(NSArray *)persons;
-(void)setPersons:(NSArray *)arg1 ;
@end

