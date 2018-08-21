/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface XCUIApplicationRegistryRecord : NSObject {

	BOOL _isTestDependency;
	NSURL* _URL;
	NSString* _bundleIdentifier;

}

@property (copy,readonly) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) BOOL isTestDependency;                         //@synthesize isTestDependency=_isTestDependency - In the implementation block
-(BOOL)isTestDependency;
-(id)initWithURL:(id)arg1 bundleIdentifier:(id)arg2 isTestDependency:(BOOL)arg3 ;
-(NSString *)bundleIdentifier;
-(NSURL *)URL;
@end
