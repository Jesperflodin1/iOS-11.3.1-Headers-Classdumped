/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNMultiValuePropertyDescription.h>
#import <libobjc.A.dylib/CNAbstractPropertyDescription.h>

@class NSString;

@interface CNDatesDescription : CNMultiValuePropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void*)ABMultiValueValueFromCNLabeledValueValue:(id)arg1 ;
-(BOOL)isNonnull;
-(BOOL)isEqualForContact:(id)arg1 other:(id)arg2 ;
-(void)encodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(void)decodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(BOOL)canUnifyValue:(id)arg1 withValue:(id)arg2 ;
-(BOOL)isValue:(id)arg1 preferredToUnifiedValue:(id)arg2 ;
-(/*^block*/id)fromPlistTransform;
-(id)standardLabels;
-(Class)labeledValueClass;
-(BOOL)isValidMultiValueValue:(id)arg1 error:(id*)arg2 ;
-(BOOL)abPropertyID:(int*)arg1 ;
-(id)CNLabeledValueValueFromABMultiValueValueBytes:(char*)arg1 length:(unsigned long long)arg2 ;
-(id)CNLabeledValueValueFromABMultiValueValue:(void*)arg1 ;
-(id)CNValueForContact:(id)arg1 ;
-(void)setCNValue:(id)arg1 onContact:(id)arg2 ;
@end
