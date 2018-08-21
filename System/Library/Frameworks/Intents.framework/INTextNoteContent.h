/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INNoteContent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface INTextNoteContent : INNoteContent <NSSecureCoding, NSCopying> {

	NSString* _text;

}

@property (nonatomic,copy,readonly) NSString * text;              //@synthesize text=_text - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_dictionaryRepresentation;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)text;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithText:(id)arg1 ;
@end
