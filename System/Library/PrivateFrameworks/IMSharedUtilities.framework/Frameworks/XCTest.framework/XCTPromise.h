/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, XCTestExpectation, NSString;

@interface XCTPromise : NSObject {

	NSError* _error;
	id _value;
	XCTestExpectation* _expectation;
	NSString* _promiseDescription;

}

@property (readonly) NSString * promiseDescription;                //@synthesize promiseDescription=_promiseDescription - In the implementation block
@property (readonly) XCTestExpectation * expectation;              //@synthesize expectation=_expectation - In the implementation block
@property (retain) id value;                                       //@synthesize value=_value - In the implementation block
@property (retain) NSError * error;                                //@synthesize error=_error - In the implementation block
-(void)fulfillWithValue:(id)arg1 error:(id)arg2 ;
-(XCTestExpectation *)expectation;
-(NSString *)promiseDescription;
-(void)fulfillWithError:(id)arg1 ;
-(id)initWithDescription:(id)arg1 ;
-(void)setValue:(id)arg1 ;
-(id)value;
-(void)fulfillWithValue:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
@end

