/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <XCTest/XCTestObserver.h>
#import <XCTest/XCTestObservation.h>
#import <XCTest/_XCTestObservationPrivate.h>

@class NSFileHandle, NSString;

@interface XCTestLog : XCTestObserver <XCTestObservation, _XCTestObservationPrivate>

@property (readonly) NSFileHandle * logFileHandle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_messageForTest:(id)arg1 didMeasureValues:(id)arg2 forPerformanceMetricID:(id)arg3 name:(id)arg4 unitsOfMeasurement:(id)arg5 baselineName:(id)arg6 baselineAverage:(id)arg7 maxPercentRegression:(id)arg8 maxPercentRelativeStandardDeviation:(id)arg9 maxRegression:(id)arg10 maxStandardDeviation:(id)arg11 file:(id)arg12 line:(unsigned long long)arg13 ;
+(void)_logActivity:(id)arg1 inTestCase:(id)arg2 ;
-(void)_testCase:(id)arg1 didMeasureValues:(id)arg2 forPerformanceMetricID:(id)arg3 name:(id)arg4 unitsOfMeasurement:(id)arg5 baselineName:(id)arg6 baselineAverage:(id)arg7 maxPercentRegression:(id)arg8 maxPercentRelativeStandardDeviation:(id)arg9 maxRegression:(id)arg10 maxStandardDeviation:(id)arg11 file:(id)arg12 line:(unsigned long long)arg13 ;
-(void)_testCase:(id)arg1 willStartActivity:(id)arg2 ;
-(void)_testDidFail:(id)arg1 withDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4 ;
-(void)testLogWithFormat:(id)arg1 arguments:(char*)arg2 ;
-(void)testLogWithFormat:(id)arg1 ;
-(void)testSuiteWillStart:(id)arg1 ;
-(void)testSuite:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4 ;
-(void)testSuiteDidFinish:(id)arg1 ;
-(void)testCaseWillStart:(id)arg1 ;
-(void)testCase:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4 ;
-(void)testCaseDidFinish:(id)arg1 ;
-(id)dateFormatter;
-(NSFileHandle *)logFileHandle;
@end

