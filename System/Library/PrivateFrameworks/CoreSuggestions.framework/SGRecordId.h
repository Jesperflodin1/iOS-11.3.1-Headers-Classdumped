/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SGRecordId : NSObject <NSCopying, NSSecureCoding> {

	long long _internalEntityId;

}
+(BOOL)supportsSecureCoding;
+(id)recordIdWithNumericValue:(long long)arg1 ;
+(id)recordIdWithInternalEntityId:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)numericValue;
-(id)initWithInternalEntityId:(long long)arg1 ;
-(BOOL)isEqualToRecordId:(id)arg1 ;
-(long long)internalEntityId;
@end
