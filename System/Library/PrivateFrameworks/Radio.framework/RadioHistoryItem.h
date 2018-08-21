/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSDate, NSString, RadioTrack;

@interface RadioHistoryItem : NSObject <NSCopying, NSMutableCopying> {

	NSDate* _datePlayed;
	NSString* _externalIdentifier;
	RadioTrack* _track;
	long long _type;

}

@property (nonatomic,readonly) NSDate * datePlayed;                             //@synthesize datePlayed=_datePlayed - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalIdentifier;              //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
@property (nonatomic,readonly) RadioTrack * track;                              //@synthesize track=_track - In the implementation block
@property (nonatomic,readonly) long long type;                                  //@synthesize type=_type - In the implementation block
-(RadioTrack *)track;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDate *)datePlayed;
-(NSString *)externalIdentifier;
@end

