/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, MRTextEditingAttributes;

@interface MRTextEditingSession : NSObject <NSMutableCopying> {

	NSString* _text;
	BOOL _editing;
	MRTextEditingAttributes* _attributes;
	unsigned long long _uniqueIdentifier;

}

@property (nonatomic,readonly) unsigned long long uniqueIdentifier;               //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * text;                                   //@synthesize text=_text - In the implementation block
@property (getter=isEditing,nonatomic,readonly) BOOL editing;                     //@synthesize editing=_editing - In the implementation block
@property (nonatomic,readonly) MRTextEditingAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(id)init;
-(id)description;
-(NSString *)text;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEditing;
-(MRTextEditingAttributes *)attributes;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)uniqueIdentifier;
-(id)_copyWithZone:(NSZone*)arg1 usingConcreteClass:(Class)arg2 ;
-(id)initWithText:(id)arg1 attributes:(id)arg2 ;
@end
