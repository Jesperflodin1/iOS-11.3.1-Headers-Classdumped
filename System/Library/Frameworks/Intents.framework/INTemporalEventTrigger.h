/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INDateComponentsRange;

@interface INTemporalEventTrigger : NSObject <NSCopying, NSSecureCoding> {

	INDateComponentsRange* _dateComponentsRange;

}

@property (readonly) INDateComponentsRange * dateComponentsRange;              //@synthesize dateComponentsRange=_dateComponentsRange - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_dictionaryRepresentation;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)initWithDateComponentsRange:(id)arg1 ;
-(INDateComponentsRange *)dateComponentsRange;
@end

