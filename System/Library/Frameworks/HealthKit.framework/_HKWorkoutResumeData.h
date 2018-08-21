/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSMutableArray;

@interface _HKWorkoutResumeData : NSObject <NSSecureCoding> {

	BOOL _lastUUIDInJournal;
	NSUUID* _lastUUID;
	NSMutableArray* _gaps;

}

@property (nonatomic,retain) NSUUID * lastUUID;                   //@synthesize lastUUID=_lastUUID - In the implementation block
@property (assign,nonatomic) BOOL lastUUIDInJournal;              //@synthesize lastUUIDInJournal=_lastUUIDInJournal - In the implementation block
@property (nonatomic,retain) NSMutableArray * gaps;               //@synthesize gaps=_gaps - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setGaps:(NSMutableArray *)arg1 ;
-(NSUUID *)lastUUID;
-(NSMutableArray *)gaps;
-(void)setLastUUIDInJournal:(BOOL)arg1 ;
-(void)setLastUUID:(NSUUID *)arg1 ;
-(BOOL)lastUUIDInJournal;
@end

