/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/_DKObject.h>

@class NSString, _DKObject;

@interface _DKRelation : _DKObject {

	NSString* _verbPhrase;
	_DKObject* _subject;
	_DKObject* _object;

}

@property (readonly) NSString * verbPhrase;              //@synthesize verbPhrase=_verbPhrase - In the implementation block
@property (readonly) _DKObject * subject;                //@synthesize subject=_subject - In the implementation block
@property (readonly) _DKObject * object;                 //@synthesize object=_object - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3 ;
+(id)relationWithSubject:(id)arg1 verbPhrase:(id)arg2 object:(id)arg3 ;
+(id)entityName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(_DKObject *)object;
-(id)stringValue;
-(_DKObject *)subject;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(NSString *)verbPhrase;
-(id)initWithSubject:(id)arg1 verbPhrase:(id)arg2 object:(id)arg3 ;
@end

