/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface XCUIApplicationRegistry : NSObject {

	NSDictionary* _testDependencies;
	NSDictionary* _userOverrides;

}

@property (copy) NSDictionary * testDependencies;              //@synthesize testDependencies=_testDependencies - In the implementation block
@property (copy) NSDictionary * userOverrides;                 //@synthesize userOverrides=_userOverrides - In the implementation block
-(id)initWithTestDependencies:(id)arg1 userOverrides:(id)arg2 ;
-(id)recordForApplicationWithBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)testDependencyExistsForApplicationAtURL:(id)arg1 ;
-(id)_constructRecordMapFromRawMap:(id)arg1 isTestDependencyMap:(BOOL)arg2 ;
-(NSDictionary *)testDependencies;
-(void)setTestDependencies:(NSDictionary *)arg1 ;
-(NSDictionary *)userOverrides;
-(void)setUserOverrides:(NSDictionary *)arg1 ;
@end

