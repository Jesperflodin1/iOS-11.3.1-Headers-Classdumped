/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAKnowledgeKeyValueEntry.h>

@class NSNumber;

@interface SAKnowledgeKeyValueNumericEntry : SAKnowledgeKeyValueEntry

@property (nonatomic,copy) NSNumber * value; 
+(id)keyValueNumericEntry;
+(id)keyValueNumericEntryWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setValue:(NSNumber *)arg1 ;
-(NSNumber *)value;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

