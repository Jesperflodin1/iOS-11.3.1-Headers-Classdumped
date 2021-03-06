/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface XCTestObservationCenter : NSObject {

	id _internalImplementation;

}

@property (readonly) NSMutableArray * observers; 
@property (assign) BOOL suspended; 
+(void)setSharedTestObservationCenter:(id)arg1 ;
+(id)sharedTestObservationCenter;
-(void)_testCaseDidStart:(id)arg1 ;
-(void)_testCaseDidStop:(id)arg1 ;
-(void)_testCaseDidFail:(id)arg1 withDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4 ;
-(void)_testCase:(id)arg1 didMeasureValues:(id)arg2 forPerformanceMetricID:(id)arg3 name:(id)arg4 unitsOfMeasurement:(id)arg5 baselineName:(id)arg6 baselineAverage:(id)arg7 maxPercentRegression:(id)arg8 maxPercentRelativeStandardDeviation:(id)arg9 maxRegression:(id)arg10 maxStandardDeviation:(id)arg11 file:(id)arg12 line:(unsigned long long)arg13 ;
-(id)initBasicCenter;
-(void)_resumeObservation;
-(void)_suspendObservation;
-(void)_testCase:(id)arg1 willStartActivity:(id)arg2 ;
-(void)_testCase:(id)arg1 didFinishActivity:(id)arg2 ;
-(void)removeTestObserver:(id)arg1 ;
-(void)_observeTestExecutionForBlock:(/*^block*/id)arg1 ;
-(void)_suspendObservationForBlock:(/*^block*/id)arg1 ;
-(void)_testSuiteDidStart:(id)arg1 ;
-(void)_testSuiteDidStop:(id)arg1 ;
-(void)_testSuiteDidFail:(id)arg1 withDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4 ;
-(id)init;
-(id)description;
-(void)setSuspended:(BOOL)arg1 ;
-(NSMutableArray *)observers;
-(void)addTestObserver:(id)arg1 ;
-(BOOL)suspended;
@end

