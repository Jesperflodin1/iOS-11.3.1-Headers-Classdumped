/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _XCInternalTestRun, XCTest, NSDate;

@interface XCTestRun : NSObject {

	id _internalTestRun;

}

@property (readonly) _XCInternalTestRun * implementation;                               //@synthesize internalTestRun=_internalTestRun - In the implementation block
@property (assign) unsigned long long executionCountBeforeCrash; 
@property (assign) unsigned long long failureCountBeforeCrash; 
@property (assign) unsigned long long unexpectedExceptionCountBeforeCrash; 
@property (readonly) XCTest * test; 
@property (copy,readonly) NSDate * startDate; 
@property (copy,readonly) NSDate * stopDate; 
@property (readonly) double totalDuration; 
@property (readonly) double testDuration; 
@property (readonly) unsigned long long testCaseCount; 
@property (readonly) unsigned long long executionCount; 
@property (readonly) unsigned long long failureCount; 
@property (readonly) unsigned long long unexpectedExceptionCount; 
@property (readonly) unsigned long long totalFailureCount; 
@property (readonly) BOOL hasSucceeded; 
+(id)testRunWithTest:(id)arg1 ;
-(void)setExecutionCountBeforeCrash:(unsigned long long)arg1 ;
-(void)setFailureCountBeforeCrash:(unsigned long long)arg1 ;
-(void)setUnexpectedExceptionCountBeforeCrash:(unsigned long long)arg1 ;
-(unsigned long long)executionCountBeforeCrash;
-(unsigned long long)failureCountBeforeCrash;
-(unsigned long long)unexpectedExceptionCountBeforeCrash;
-(id)init;
-(id)description;
-(void)stop;
-(void)start;
-(_XCInternalTestRun *)implementation;
-(id)initWithTest:(id)arg1 ;
-(void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(BOOL)arg4 ;
-(unsigned long long)executionCount;
-(unsigned long long)unexpectedExceptionCount;
-(double)testDuration;
-(NSDate *)startDate;
-(unsigned long long)totalFailureCount;
-(BOOL)hasSucceeded;
-(unsigned long long)failureCount;
-(unsigned long long)testCaseCount;
-(XCTest *)test;
-(double)totalDuration;
-(NSDate *)stopDate;
@end

