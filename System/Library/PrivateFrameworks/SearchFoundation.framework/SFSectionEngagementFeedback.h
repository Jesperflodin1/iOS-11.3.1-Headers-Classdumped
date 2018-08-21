/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFFeedback.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFResultSection;

@interface SFSectionEngagementFeedback : SFFeedback <NSCopying> {

	SFResultSection* _section;
	unsigned long long _triggerEvent;

}

@property (nonatomic,copy) SFResultSection * section;                      //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) unsigned long long triggerEvent;              //@synthesize triggerEvent=_triggerEvent - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(SFResultSection *)section;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSection:(SFResultSection *)arg1 ;
-(id)initWithSection:(id)arg1 triggerEvent:(unsigned long long)arg2 ;
-(unsigned long long)triggerEvent;
-(void)setTriggerEvent:(unsigned long long)arg1 ;
@end

