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

@class NSArray, SGRecordId;

@interface SGContactMatchArrayOption : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _type;
	NSArray* _matches;
	SGRecordId* _recordId;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSArray * matches;                    //@synthesize matches=_matches - In the implementation block
@property (nonatomic,readonly) SGRecordId * recordId;                //@synthesize recordId=_recordId - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToContactMatchArrayOption:(id)arg1 ;
-(SGRecordId *)recordId;
-(id)initWithRecordId:(id)arg1 ;
-(id)initWithMatches:(id)arg1 ;
-(NSArray *)matches;
@end
