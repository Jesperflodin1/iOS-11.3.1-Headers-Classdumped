/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <libobjc.A.dylib/CXCopying.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CXActionDelegate;
@class NSUUID, NSDate, NSMutableString, NSString;

@interface CXAction : NSObject <CXCopying, NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	long long _state;
	long long _failureReason;
	NSDate* _commitDate;
	id<CXActionDelegate> _delegate;

}

@property (nonatomic,copy) NSUUID * UUID;                                             //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) long long state;                                         //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long failureReason;                                 //@synthesize failureReason=_failureReason - In the implementation block
@property (nonatomic,copy,readonly) NSMutableString * customDescription; 
@property (nonatomic,retain) NSDate * commitDate;                                     //@synthesize commitDate=_commitDate - In the implementation block
@property (assign,nonatomic,__weak) id<CXActionDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
@property (nonatomic,readonly) NSDate * timeoutDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(double)timeout;
-(id)init;
-(id<CXActionDelegate>)delegate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CXActionDelegate>)arg1 ;
-(NSString *)description;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)UUID;
-(BOOL)isComplete;
-(void)setUUID:(NSUUID *)arg1 ;
-(void)fail;
-(void)fulfill;
-(NSMutableString *)customDescription;
-(void)updateAsFulfilled;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(NSDate *)commitDate;
-(void)updateAsFailedWithReason:(long long)arg1 ;
-(void)setCommitDate:(NSDate *)arg1 ;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopy;
-(NSDate *)timeoutDate;
-(long long)failureReason;
-(void)setFailureReason:(long long)arg1 ;
@end

