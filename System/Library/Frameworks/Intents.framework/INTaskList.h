/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INSpeakableString, NSArray, NSDateComponents, NSString;

@interface INTaskList : NSObject <NSCopying, NSSecureCoding> {

	INSpeakableString* _title;
	NSArray* _tasks;
	INSpeakableString* _groupName;
	NSDateComponents* _createdDateComponents;
	NSDateComponents* _modifiedDateComponents;
	NSString* _identifier;

}

@property (readonly) long long taskListType; 
@property (copy,readonly) INSpeakableString * title;                              //@synthesize title=_title - In the implementation block
@property (copy,readonly) NSArray * tasks;                                        //@synthesize tasks=_tasks - In the implementation block
@property (copy,readonly) INSpeakableString * groupName;                          //@synthesize groupName=_groupName - In the implementation block
@property (copy,readonly) NSDateComponents * createdDateComponents;               //@synthesize createdDateComponents=_createdDateComponents - In the implementation block
@property (copy,readonly) NSDateComponents * modifiedDateComponents;              //@synthesize modifiedDateComponents=_modifiedDateComponents - In the implementation block
@property (copy,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_dictionaryRepresentation;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(INSpeakableString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(INSpeakableString *)groupName;
-(id)initWithTitle:(id)arg1 tasks:(id)arg2 groupName:(id)arg3 createdDateComponents:(id)arg4 modifiedDateComponents:(id)arg5 identifier:(id)arg6 ;
-(id)initWithTitle:(id)arg1 tasks:(id)arg2 groupName:(id)arg3 taskListType:(long long)arg4 createdDateComponents:(id)arg5 modifiedDateComponents:(id)arg6 identifier:(id)arg7 ;
-(long long)taskListType;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSArray *)tasks;
-(NSDateComponents *)createdDateComponents;
-(NSDateComponents *)modifiedDateComponents;
@end

